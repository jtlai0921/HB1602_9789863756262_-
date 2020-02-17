#include <stdio.h>
#include <Python.h>
int main(int argc, char* argv[])
{	
	PyObject *modulename, *module, *dic, *func, *args, *rel, *list;
	char *funcname1 = "sum";
	char *funcname2 = "strsplit";
	int i;		
	Py_ssize_t s;
	printf("-==在C中內嵌Python==-\n");

	/* Python解釋器的起始化*/
	Py_Initialize();                      
	if(!Py_IsInitialized())   
	{   
		printf("起始化失敗!");   
		return -1;   
	}

	/* 匯入Python模組,並檢驗是否正確匯入 */
	modulename = Py_BuildValue("s", "pytest");  
	module = PyImport_Import(modulename);   
	if(!module)   
	{   
		printf("匯入pytest失敗!");   
		return  -1;   		
	} 

	/* 獲得模組中函數並檢驗其有效性 */
	dic = PyModule_GetDict(module);  
	if(!dic)
	{
		printf("錯誤!\n");
		return -1;   
	}

	/* 獲得sum函數位址並驗證 */
	func = PyDict_GetItemString(dic,funcname1);   
	if(!PyCallable_Check(func))   
	{   
		printf("不能找到函數 %s",funcname1);     
		return -1;   
	}

	/* 建構清單 */
	list = PyList_New(5);
	printf("使用Python中的sum函數求解下列數之和\n");
	for (i = 0; i < 5; i++)
	{
		printf("%d\t",i);
		PyList_SetItem(list,i,Py_BuildValue("i",i)); 
	}
	printf("\n");

	/* 建構sum函數的參數元群組*/
	args = PyTuple_New(1); 
	PyTuple_SetItem(args,0,list);

	/* 呼叫sum函數 */
	PyObject_CallObject(func,args); 

	/* 獲得strsplit函數位址並驗證*/
	func = PyDict_GetItemString(dic,funcname2);   
	if(!PyCallable_Check(func))   
	{   
		printf("不能找到函數 %s",funcname2);     
		return -1;
	}   

	/* 建構strsplit函數的參數元群組 */
	args = PyTuple_New(2); 
	printf("使用Python中的函數分割以下字串:\n");
	printf("this is an example\n");

	PyTuple_SetItem(args,0,Py_BuildValue("s","this is an example"));   
	PyTuple_SetItem(args,1,Py_BuildValue("s"," "));  
	/* 呼叫strsplit函數並獲得傳回值 */
	rel = PyObject_CallObject(func, args);   
	s = PyList_Size(rel);

	printf("結果如下所示:\n");
	for ( i = 0; i < s; i ++)
	{
		printf("%s\n",PyUnicode_AS_UNICODE(PyList_GetItem(rel,i)));
	}

	/* 釋放資源 */
	Py_DECREF(list);
	Py_DECREF(args);
	Py_DECREF(module);  

	/* 結束Python解釋器 */
	Py_Finalize();			
	printf("按確認鍵離開程式:\n");

	getchar();   
	return 0;	
}
