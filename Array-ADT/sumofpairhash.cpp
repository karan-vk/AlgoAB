#include <iostream>
#include <ostream>

template<size_t n>
int max(int (&A)[n])
{
	int max = A[0];
	for (int i = 0; i <= n; ++i)
	{
		if (A[i] > max)
		{
			max = A[i];
		}
	}
	return max;
}
template<size_t n>
void sumofpairs(int (&A)[n], int sum) {
	int maxi  = max(A);
	int* vec = new int[maxi + 1];

	for (int i = 0; i < n; ++i)
	{
		if (vec[sum - A[i]] != 0)
		{
			std::cout << A[i] << "+" << sum - A[i] << "=" << sum << std::endl;

		}
		vec[A[i]]++;
	}

}

int main(int argc, char const *argv[])
{
	int A[] = {6, 3, 8, 10, 16, 7, 5, 2, 9, 14};
	sumofpairs(A, 10);




	return 0;
}