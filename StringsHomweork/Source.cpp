#include <iostream>
#include <ctime>

int main() {
	time_t now = time(0);
	struct tm timeinfo;
	localtime_s(&timeinfo, &now);
	int today = timeinfo.tm_mday;

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
		if (today % size == i) {
			int sum = 0;
			for (int j = 0; j < size; j++) {
				sum += Matrix[i][j];
			}
			std::cout << sum << '\n';
		}
	}
}