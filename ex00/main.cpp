
#include "whatever.hpp"
#include <iostream>

int main(void) {

	char x = 42;
	char z = 60;
	std::cout<<std::endl;
	std::cout<<"MY OWN TESTER ================="<<std::endl;
	std::cout<<"A Before swap: "<<x<<std::endl;
	std::cout<<"B Before swap: "<<z<<std::endl;
	swap(x, z);
	std::cout<<"A After swap: "<<x<<std::endl;
	std::cout<<"B After swap: "<<z<<std::endl;

	std::cout<<"Min between A & B: "<<min(x, z)<<std::endl;
	std::cout<<"Max between A & B: "<<max(x, z)<<std::endl;

	int a = 2;
	int b = 3;
	std::cout<<std::endl;
	std::cout<<"PDF TESTER ===================="<<std::endl;
	::swap( a, b );
	std::cout << "a = " << a << ", b = " << b << std::endl;
	std::cout << "min( a, b ) = " << ::min( a, b ) << std::endl;
	std::cout << "max( a, b ) = " << ::max( a, b ) << std::endl;
	std::string c = "chaine1";
	std::string d = "chaine2";
	::swap(c, d);
	std::cout << "c = " << c << ", d = " << d << std::endl;
	std::cout << "min( c, d ) = " << ::min( c, d ) << std::endl;
	std::cout << "max( c, d ) = " << ::max( c, d ) << std::endl;
	return 0;
}
