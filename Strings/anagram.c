#include <stdbool.h>
#include <stdio.h>
int main(int argc, char const* argv[])
{
	char A[] = "verbose";
	char B[] = "observe";
	bool isAnagram = true;
	int H[26] = {0};

	for(int i = 0; A[i] != '\0'; ++i)
	{

		H[A[i] - 97]++;
	}
	int i;
	for(i = 0; B[i] != '\0'; ++i)
	{
		H[B[i] - 97] -= 1;
		if(H[B[i] - 97] < 0)
		{
			printf("The strings are not anagram\n");
			return 0;
		}
	}

	printf("the given strings are anagram\n");

	return 0;
}