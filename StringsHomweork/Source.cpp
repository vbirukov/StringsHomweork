#include <iostream>

void printCase(bool even, int limit) {
	int i = 0;
	while (i <= limit) {
		if (even && i%2 == 0) {
			std::cout << i << '\n';
		}
		else if (!even && i % 2 != 0) {
			std::cout << i << '\n';
		}
		i++;
	}
}

int main() {

	int limit = 100;

	for (int i = 0; i <= limit; i++) {
		if (i%2 == 0) {
			std::cout << i << '\n';
		}
	}

	printCase(false, 20);
}