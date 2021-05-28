// Find Duplicate Alternative.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
template <size_t n>
int max(int(&A)[n]) {
	int max = A[0];
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
void find(int(&A)[n]) {
	int maxi = A[0];
	int amax = max(A);

	int* Vec = new int[amax];
	for (int i = 0; i < amax; i++)
	{
		Vec[i] = 0;
	}

	for (int i = 0; i < n; i++)
	{
		Vec[A[i]]++;
	}
	for (int j = 0; j < amax; j++)
	{
		if (Vec[j] > 1)
		{
			std::cout << j << " : " << Vec[j] << std::endl;
		}

	}
	//delete[]Vec;

}

int main()
{
	int A[] = { 3,6,8,8,10,12,15,15,15,20 };
	find(A);
	std::cout << "Hello World!\n";
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
