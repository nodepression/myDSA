#include <iostream>
#include <cstdio>
#include "vector.h"
using namespace std;

int main() {

	int a[10] = { 1,4,6,8,5,3,7,2,10,9 };
	Vector< int > v(a,0,10);

	printf("%d\n",v.size());
	printf("%d\n", v.bubble(0, 10));

	v.bubbleSort(0,v.size());
	for (int i = 0; i < v.size(); i++) {
		printf("%d ", v[i]);
	}
	return 0;

}