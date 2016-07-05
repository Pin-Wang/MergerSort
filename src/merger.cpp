//============================================================================
// Author      : pep
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include "merger.h"

int main() {
	Merger c;
	int a[]={4,2,6,8,6,7};
	c.merge_sort(a,0,5);
	c.print(a,6);
	return 0;
}
