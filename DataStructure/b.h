//b.h

#ifndef __B_H_INCLUDED__   // if x.h hasn't been included yet...
#define __B_H_INCLUDED__   //   #define this so the compiler knows it has been included

#include <iostream>
class B {
public:
	void notIncluded() {
		std::cout << "in run function class B";
	}
};
#endif