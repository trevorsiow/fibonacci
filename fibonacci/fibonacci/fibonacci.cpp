#include <iostream>
#include <ctime>
#include <chrono>
#include <thread>


int fibonacci(int fibNumber);

int main() {
	std::clock_t start;
	double duration;
	start = std::clock();
	

	/*
	for (int i = 0; i < 10; ++i) {
		int x = fibonacci(i);
		std::cout << x << std::endl;

	}
	*/

	duration = (std::clock() - start) / (double)CLOCKS_PER_SEC;
	std::cout << "printf: " << duration << '\n';
	std::cin.get();
}


int fibonacci(int fibNumber) {
	int currentValue = 1;
	int previousValue = 0;
	for (int i = 0; i < fibNumber; ++i) {
		int temp = currentValue;
		currentValue += previousValue;
		previousValue = temp;
	}
	return currentValue;
}