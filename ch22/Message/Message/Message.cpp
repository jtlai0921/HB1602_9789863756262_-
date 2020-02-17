#include <string.h>
#include <boost/python.hpp>
using namespace boost::python;
//#pragma comment(lib, "boost_python.lib")
class Message
{
public:
	std::string msg;
	Message(std::string m)
	{
		msg = m;
	} 
	void set(std::string m) 
	{ 
		msg = m;
	}
	std::string get()
	{ 
		return msg; 
	}
    
};

BOOST_PYTHON_MODULE(Message)
{
    class_<Message>("Message", init<std::string>())
        .def("set", &Message::set)
		.def("get", &Message::get)
		;
}
