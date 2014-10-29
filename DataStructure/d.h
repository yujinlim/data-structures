#ifndef _D_H
#define _D_H
class D{
public:
	D(){};

	double operator() (double x) {
		return x * 2;
	}
};
#endif