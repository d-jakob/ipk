#include <iostream>
#include <limits>

namespace power
{
	//(a)
	
	/**
	* @brief: calculates q to the nth power iteratively
	*
	* @param: int q
	*       : unsigned n
	*
	* @return: int
	*/
	int iterative(int q, unsigned n)
	{
		int r{ 1 };
		for (int i = 0; i < n; ++i) {
			r *= q;
		}
		return r;
	}

	//(b)(c)

	/**
	* @brief: calculates q to the nth power recursively
	*
	* @param: int q
	*       : unsigned n
	*
	* @return: int
	*/
	int recursive(int q, unsigned n)
	{
		if (n) {
			int tmp { recursive(q, n / 2) };
			return (n % 2 ? q : 1) * tmp * tmp;
		}
		return 1;
	}
} //end namespace power

int main(int argc, char** argv)
{
	int q{};
	unsigned n{};
	bool qb{}, nb{};

	std::cout << "input q: " << std::flush;
	while (!(std::cin >> q)) {
		std::cout << "error: input not compatible with type int, try again: ";
		std::cin.clear();
		std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
	}
	std::cout << "q = " << q << '\n';
	
	std::cout << "input n: " << std::flush;
	while (!(std::cin >> n)) {
		std::cout << "error: input not compatible with type int, try again: ";
		std::cin.clear();
		std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
	}
	std::cout << "n = " << n << '\n';

	std::cout << power::iterative(q, n) << '\n';
	std::cout << power::recursive(q, n) << '\n';

	return 0;
}
