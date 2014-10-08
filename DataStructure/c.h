//c.h

#ifndef __C_H_INCLUDED__   // if x.h hasn't been included yet...
#define __C_H_INCLUDED__   //   #define this so the compiler knows it has been included

#include <iostream>
class C {
public:
	virtual void virtualRun() {
		std::cout << "in virtual run class c";
	}

	void run() {
		std::cout << "in run function class c";
	}
};
#endif