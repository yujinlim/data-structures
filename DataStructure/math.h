//a.h

#ifndef __MATH_H_INCLUDED__   // if x.h hasn't been included yet...
#define __MATH_H_INCLUDED__   //   #define this so the compiler knows it has been included

#include <iostream>
#include <math.h>

class Math{
public:
	int findRoot(int value) {
		return sqrt(value * 2);
	}

	int sum(int max) {
		float value = ((float)max / (float)2) * ((float)(max + 1));
		return int(ceil(value));
	}

	bool squareRoot(int value) {
		float root = sqrt(value);
		return fmod(root, 1) == 0;
	}

	void run() {
		std::cout << "in run function class A";
	}
};
#endif