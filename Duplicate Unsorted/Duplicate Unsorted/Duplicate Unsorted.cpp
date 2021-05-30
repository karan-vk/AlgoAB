// Duplicate Unsorted.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>


template <size_t n>
void findDuplicate(int(&A)[n])
{
	int lastDuplicate = 0;
	for (int i = 0; i < n - 1; i++)
	{
		int count = 1;
		if (A[i] != -1)
		{
			for (int j = i + 1; j < n; j++)
			{
				if (A[i] == A[j])
				{
					count++;
					A[j] = -1;
				}
			}
			if (count > 1)
			{
				std::cout << A[i] << " : " << count << std::endl;
				count = 1;
				lastDuplicate = A[i];
			}
		}

	}
}


int main()
{
	int A[] = { 8,3,6,4,6,5,6,8,2,7 };
	findDuplicate(A);

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
