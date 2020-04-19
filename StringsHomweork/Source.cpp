#include <iostream>

int main() {
	int today = 20;
	const int size = 15;
	int Matrix[size][size];

	for (int i = 0; i < size; i++) {
		for (int j = 0; j < size; j++) {
			Matrix[i][j] = i + j;
			std::cout << Matrix[i][j] << ' ';
		}
		std::cout << '\n';
	}

	std::cout << "============" << '\n';
	

	for (int i = 0; i < size; i++) {
		int sum = 0;
		for (int j = 0; j < size; j++) {
			sum += Matrix[i][j];
		}
		if (sum % today == 0) {
			std::cout << sum << '\n';
		}
	}
}