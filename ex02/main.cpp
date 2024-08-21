
#include "Array.hpp"

typedef Array<int> arrInt;
typedef Array<char> arrChar;
typedef Array<std::string> arrString;

int main(void) {
	
	try {
		arrString arr_string(2);
		arr_string[0] = "one";
		arr_string[1] = "two";
		int x = arr_string.size();
		std::cout<<"size is: "<<x<<std::endl;
		std::cout<<"arr[0]: "<<arr_string[0]<<std::endl;
		std::cout<<"arr[1]: "<<arr_string[1]<<std::endl;

		arrChar arr_char(2);
		arr_char[0] = 42;
		arr_char[1] = 60;
		x = arr_char.size();
		std::cout<<"size is: "<<x<<std::endl;
		std::cout<<"arr[0]: "<<arr_char[0]<<std::endl;
		std::cout<<"arr[1]: "<<arr_char[1]<<std::endl;

		arrInt arr_int_emtpy;
		arrInt arr_int(2);
		arrInt arr_int2(3);
		arr_int[0] = 1;
		arr_int[1] = 2;
		arr_int2[0] = 3;
		arr_int2[1] = 4;
		arr_int2[2] = 5;
		arr_int = arr_int2;
		x = arr_int.size();
		std::cout<<"size is: "<<x<<std::endl;
		std::cout<<"arr[0]: "<<arr_int[0]<<std::endl;
		std::cout<<"arr[1]: "<<arr_int[1]<<std::endl;
	} catch (std::exception &e) {
		std::cerr<<"Error: "<<e.what()<<std::endl;
	}
	return (0);
}
