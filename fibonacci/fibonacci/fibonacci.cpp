#include <iostream>
#include <ctime>
#include <chrono>
#include <thread>


unsigned long long fibonacci(int fibNumber);
unsigned long long recurseFibonacci(int fibNumber);

int main() {
	std::clock_t start;
	double duration;
	start = std::clock();
	
	unsigned long long fibValue = fibonacci(2);
	unsigned long long fibRecurseValue = recurseFibonacci(35);
	std::cout << "The recursive fib value is " << fibRecurseValue << std::endl;
	std::cout<<fibValue<<std::endl;

	duration = (std::clock() - start) / (float)CLOCKS_PER_SEC;
	std::cout << "Elapsed time " << duration << '\n';
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