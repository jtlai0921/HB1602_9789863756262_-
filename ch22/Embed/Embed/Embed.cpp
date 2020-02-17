#include <Python.h>
int main()
{
	Py_Initialize();							/* Python解釋器起始化 */
	PyRun_SimpleString("print('hi,python!')");		/* 執行字串 */
	Py_Finalize();							/* 結束Python解釋器，釋放資源 */
	return 0;
}
