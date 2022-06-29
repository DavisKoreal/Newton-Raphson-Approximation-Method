
#include <iostream>

double finding_guess(double& inserted_number) {
	inserted_number = inserted_number * 0.5;
	return inserted_number;
}

int main() {
	double inserted_number;
	std::cout << "Please enter the number that you would like to find the root of. " << std::endl;
	std::cin >> inserted_number;
	const double number_to_find_root = inserted_number;
	double diff;
	finding_guess(inserted_number);
	for (int i = 0; i < 100; i++) {
		double a = 0.5 * (inserted_number + (number_to_find_root / inserted_number));
		double y = inserted_number - a;
		inserted_number = a;
		std::cout << "The root is " << inserted_number << std::endl;
		if (y == 0) {
			break;
		}
	}
}