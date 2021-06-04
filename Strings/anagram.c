#include <stdbool.h>
#include <stdio.h>
int main(int argc, char const* argv[])
{
	char A[] = "medical";
	char B[] = "decimal";
	int H[26] = {-1};
	for(int i = 0; i < 27; i++)
	{
		H[i] = 0;
	}

	for(int i = 0; A[i] != 0; ++i)
	{

		H[A[i] - 97]++;
	}
	bool isAnagram = true;
	for(int i = 0; B[i] != 0; ++i)
	{
		H[B[i] - 97]--;
	}
	for(int i = 0; i < 26; ++i)
	{
		if(H[i] < 0)
		{
			isAnagram = false;
		}
	}

	if(isAnagram)
	{
		printf("the given strings are anagram\n");
	}
	else
	{
		printf("The strings are not anagram\n");
	}

	return 0;
}