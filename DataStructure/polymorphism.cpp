#include "c.h"
#include "b.h"
#include "a.h"
#include "polymorphism.h"

void poly() {
	
	//p->notIncluded();
	
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
};