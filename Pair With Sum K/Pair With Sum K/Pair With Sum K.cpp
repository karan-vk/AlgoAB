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

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
