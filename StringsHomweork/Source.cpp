#include <iostream>

void printEvenOdd(int startFrom, int limit) {
	int i = startFrom ? 2 : 1;
	while (i <= limit) {
		std::cout << i << '\n';
		i += 2;
	}
}

int main() {

	int limit = 100;

	for (int i = 0; i <= limit; i++) {
		if (i%2 == 0) {
			std::cout << i << '\n';
		}
	}

	printEvenOdd(1, 20);
}