#include <iostream>
#include "fobjects.h"
#include "d.h"

void run(D d, int n, int m){
	double result = 0;
	for (int i = n; i <= m; i++)
		result += d(i);
	
	std::cout << result;
};

void sum() {
	D d;
	run(d, 0, 10);
};