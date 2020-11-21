#include <iostream>

int main(int argc, char** argv)
{
	int n{10}, sum{0};
	for (int j = 0; j <= n; ++j) {
		sum += j;
	}
	std::cout << sum << '\n';
	return 0;
}
