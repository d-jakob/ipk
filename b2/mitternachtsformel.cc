#include <iostream>
#include <cmath>

int main(int argc, char** argv)
{
	double a{}, b{}, c{}, d{};
	std::cout << "a = " << std::flush;
	std::cin >> a;
	std::cout << "b = " << std::flush;
	std::cin >> b;
	if (a == 0 && b == 0) {
		std::cout << "keine eindeutige lsg" << '\n';
		return 0;
	}
	std::cout << "c = " << std::flush;
	std::cin >> c;
	if (d = b*b-4*a*c) {
		if (d < 0) {
			//lsg komplex
			std::cout << "lsg komplex" << '\n';
		} else {
			//zwei lsgen
			std::cout << "x1 = " << -(std::sqrt(d) + b)/2/a << '\n';
			std::cout << "x2 = " << (std::sqrt(d) - b)/2/a << '\n';
		}
	} else {
		//eine lsg
		std::cout << "x = " << (-b/2/a) << '\n';
	}
	return 0;
}
