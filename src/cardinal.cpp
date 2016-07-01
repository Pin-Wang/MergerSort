//============================================================================
// Author      : pep
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include "cardinal.h"

int main() {
	Cardinal c;
	int a[]={4,2,6,8,1,7};
	c.cardinal_sort(a,6);
	c.print(a,6);
	return 0;
}
