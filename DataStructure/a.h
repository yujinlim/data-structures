//a.h

#ifndef __A_H_INCLUDED__   // if x.h hasn't been included yet...
#define __A_H_INCLUDED__   //   #define this so the compiler knows it has been included

#include <iostream>
class A {
public:
	virtual void virtualRun() {
		std::cout << "in virtual run class A";
	}

	void run() {
		std::cout << "in run function class A";
	}
};
#endif