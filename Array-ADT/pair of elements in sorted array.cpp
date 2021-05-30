#include <iostream>




int main(int argc, char const *argv[])
{

	int A[] = {1, 3, 4, 5, 6, 8, 2, 5 , 9, 10, 12, 14, 7, 11};
	int j = (sizeof(A) / sizeof(int)) ;
	std::cout << j << std::endl;
	int i = 0;
	int sum = 10;
	for (i = 0, j = j; i <= j;) {
		if (A[i] + A[j] == sum)
		{
			std::cout << A[i] << "+" << A[j] << "=" << sum << std::endl;
			i++;
			j--;
		}
		else if (A[i] + A[j] < sum) {
			i++;
		} else {
			j--;
		}
	}

	return 0;
}
