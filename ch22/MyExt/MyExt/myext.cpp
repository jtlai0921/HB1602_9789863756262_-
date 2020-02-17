#include <python.h>
#include <windows.h>

static PyObject * show(PyObject *self, PyObject *args)
{
	char *message;
	const char *title = NULL;
	HWND hwnd = NULL;
	int r;
	if (!PyArg_ParseTuple(args, "iss", &hwnd, &message, &title))
		return NULL;
	r = MessageBox(hwnd,message, title, MB_OK);
	return Py_BuildValue("i", r);
}

static PyMethodDef myextMethods[] = 
{
	{"show", show, METH_VARARGS,"show a messagebox"},
	{NULL, NULL, 0, NULL} 
};

static struct PyModuleDef myextmodule = {
    PyModuleDef_HEAD_INIT,
    "myext",
    NULL,
    -1,
    myextMethods
};

PyMODINIT_FUNC PyInit_myext()
{
	PyObject *pModule;

	pModule = PyModule_Create(&myextmodule);	

    return pModule;
}
