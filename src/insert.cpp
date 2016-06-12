//============================================================================
// Author      : pep
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include "insert.h"

int main() {
	Insert i;
	int a[]={4,2,6,8,1,7};
	i.insert_hill(a,6);
	i.print(a,6);
	return 0;
}
