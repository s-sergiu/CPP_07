
#include "whatever.hpp"
#include <iostream>

int main(void) {

	char a = 42;
	char b = 60;
	std::cout<<"A Before swap: "<<a<<std::endl;
	std::cout<<"B Before swap: "<<b<<std::endl;
	swap(&a, &b);
	std::cout<<"A After swap: "<<a<<std::endl;
	std::cout<<"B After swap: "<<b<<std::endl;

	std::cout<<"Min between A & B: "<<min(a, b)<<std::endl;
	std::cout<<"Max between A & B: "<<max(a, b)<<std::endl;
	return (0);
}
