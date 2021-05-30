#include <iostream>
#include <ostream>

int main(int argc, char const *argv[])
{
	int A[] = {5, 8, 3, 9, 6, 2, 10, 7, -1, 4};
	int min = A[0];
	int max = A[0];
	for (int &i : A)
	{
		if (i < min)
		{
			min = i;
		}
		else if (i > max)
		{
			max = i;
		}
	}
	std::cout << "Min: " << min << std::endl;
	std::cout << "Max: " << max << std::endl;

	return 0;
}