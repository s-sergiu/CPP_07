
#include "iter.hpp"

int main(void) {

	int foo[5] = { 42, 67, 50, 70, 80 };

	iter(foo,5,iterate);

	return (0);
}
