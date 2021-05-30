// Pair With Sum K.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

template <size_t n>
void findsum(int(&A)[n], int sum)
{
	for (int i = 0; i < n; i++)
	{
		for (int j = i + 1; j < n; j++)
		{
			if (A[i] + A[j] == sum)
			{
				std::cout << A[i] << "+" << A[j] << "=10" << std::endl;
			}
		}
	}
}


int main()
{
	int A[] = { 6,3,8,10,16,7,5,2,9,14 };
	findsum(A, 13);
}


