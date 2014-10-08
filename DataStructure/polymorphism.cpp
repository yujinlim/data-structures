#include "c.h"
#include "b.h"
#include "a.h"

int main() {
	C c, *p;
	A a;
	B b;
	// passing c reference to pointer
	p = &c;

	p->run();
	p->virtualRun();
	
	p = (C*) &a;
	p->run();
	p->virtualRun();

	p = (C*) &b;
	p->run();
	p->virtualRun();
	//p->notIncluded();

	return 0;
}