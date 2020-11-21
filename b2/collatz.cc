#include <iostream>
#include <string>

void collatz(int number)
{
	if (number) {
		if (number > 0) {
			//positive
			while(number > 1) {
				std::cout << ' ' << number;
				number = number%2 == 0 ? number/2 : (number*3+1)/2;
			}
		} else {
			//negative
			while(number != -1 && number != -5 && number != -17) {
				std::cout << ' ' << number;
				number = number%2 == 0 ? number/2 : (number*3+1)/2;
			}
		}
		std::cout << '\n';
		
	}
	std::cout << "ergebnis = " << number << '\n';
}

int main(int argc, char** argv)
{
	collatz((argc>1) ? std::stoi(argv[1]) : 0);
	return 0;
}
