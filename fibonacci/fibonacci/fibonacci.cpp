#include <iostream>
#include <iomanip>
#include <ctime>
#include <chrono>
#include <thread>


unsigned long long fibonacci(int fibNumber);
unsigned long long recurseFibonacci(int fibNumber);

int main() {
	std::clock_t start;
	double duration;

	for (unsigned i = 5; i < 50; i += 5) {
		start = std::clock();

		recurseFibonacci(i);
		duration = (std::clock() - start) / (float)CLOCKS_PER_SEC;
		std::cout << "Fibonacci number " << i << '\n';
		std::cout << "Elapsed time " <<std::setprecision(10)<<duration << "\n\n";
	}
	std::cout << "END\n";
	std::cin.get();
}

unsigned long long recurseFibonacci(int fibNumber) {
	if (fibNumber == 0 || fibNumber == 1) {
		return 1;
	}
	return recurseFibonacci(fibNumber - 1) + recurseFibonacci(fibNumber - 2);
}


unsigned long long fibonacci(int fibNumber) {
	unsigned long long currentValue = 1;
	unsigned long long previousValue = 0;
	for (int i = 0; i < fibNumber; ++i) {
		unsigned long long temp = currentValue;
		currentValue += previousValue;
		previousValue = temp;
	}
	return currentValue;
}