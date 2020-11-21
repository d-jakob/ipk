#include <iostream>
#include <string>
#include <cmath>

double phi{ (1+std::sqrt(5))/2 }, psi{ 1-phi };

unsigned long long fibonacci(int number)
{
	return (std::pow(phi, number)-std::pow(psi, number))/std::sqrt(5);
}

int main(int argc, char** argv)
{
	int n{(argc>1) ? std::stoi(argv[1]) : 0};
	for (int i = 0; i <= n; ++i) {
		std::cout << fibonacci(i) << '\n';
	}
	return 0;
}
