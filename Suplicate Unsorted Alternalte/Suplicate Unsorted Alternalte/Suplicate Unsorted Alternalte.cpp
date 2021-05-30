// Suplicate Unsorted Alternalte.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

template <size_t n>
int max(int(&A)[n]) {
	int max = A[0];
	for (int i : A)
	{
		if (i > max)
		{
			max = i;
		}

	}
	return max;
}

template <size_t n>
void dup(int(&A)[n]) {
	int maxi = max(A);
	int* Vec = new int[maxi + 5];
	for (int i = 0; i <= n; i++)
	{
		Vec[i] = 0;
	}
	for (int i = 0; i < n; i++)
	{
		Vec[A[i]]++;
	}
	for (int i = 0; i < maxi + 1; i++)
	{
		if (Vec[i] > 1)
		{
			std::cout << i << " : " << Vec[i] << std::endl;
		}
	}
}

int main()
{
	int A[] = { 8,3,6,4,6,5,6,8,2,7 };
	dup(A);

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
