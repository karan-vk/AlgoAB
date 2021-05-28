// FindingDuplicateInSorted.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

template <size_t n>
int max(int(&A)[])
{
	int max = 0;
	for (int i = 0; i < n; i++)
	{
		if (A[i] > max)
		{
			max = A[i];
		}
	}
	return max;
}
template <size_t n>
void findDuplicateSorted(int(&A)[n]) {
	int lastDuplicate = 0;
	for (int i = 0; i < n; i++)
	{
		if (A[i] == A[i + 1] && lastDuplicate != A[i])
		{
			std::cout << A[i] << std::endl;
			lastDuplicate = A[i];
		}
	}
}

template <size_t n>
void CountDuplicateSorted(int(&A)[n]) {
	int lastDuplicate = 0;
	int i, j;
	i = 0;
	for (i = 0; i < n - 1; i++)
	{
		if (A[i] == A[i + 1])
		{
			int j = i + 1;
			while (A[i] == A[j])
			{
				j++;
			}
			std::cout << A[i] << " : " << j - i << std::endl;
			i = j - 1;
		}
	}
}


int main()
{
	int A[] = { 3,6,8,8,10,12,15,15,15,20 };
	CountDuplicateSorted(A);

}
