#include <iostream>

void printCase(bool even, int limit) {
	int i = even ? 2 : 1;
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

	printCase(false, 20);
}