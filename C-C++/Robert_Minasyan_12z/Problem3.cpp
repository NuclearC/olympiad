// ConsoleApplication5.cpp : Defines the entry point for the console application.
//

#include <iostream>
#include <math.h>

int main() {
	double N;
	std::cin >> N;
	if (N == 1) std::cout << 0;
	int i = 0;
	for (i = 0; N != 1; i++) {
		N = ceil(N / 2);
	}
	std::cout << i;

	return 0;
}
