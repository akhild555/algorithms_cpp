#include <iostream>
#include "week2.h"

int main() {

	// Switch which problem you want to run from week 2 assignment //
	int problem = 1;
	int n = 0;

	switch (problem) {

	case 1: {
		std::cin >> n;
		std::cout << fibonacci_fast(n) << '\n';
		break;
	}

	case 2: {
		std::cin >> n;
		std::cout << fibonacci_last(n) << '\n';
		break;
	}

	case 3: {
		std::cout << greatest_common_divisor(28851538, 1183019) << '\n';
		break;
	}

	case 4: {
		std::cout << least_common_multiple(761457, 614573) << '\n';
		break;
	}

	case 5: {
		std::cout << get_fibonacci_remainder(2816213588, 239) << '\n';
	}

	case 6: {
		std::cin >> n;
		std::cout << fibonacci_sum_last_digit(n) << '\n';
		break;
	}

	case 7: {
		std::cout << fibonacci_sum_between(10, 200) << '\n';
		break;
	}

	case 8: {
		std::cin >> n;
		std::cout << fibonacci_squares(n) << '\n';
		break;
	}

	}
	return 0;
}