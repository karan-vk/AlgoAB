#include <stdbool.h>
#include <stdio.h>
int main(int argc, char const* argv[])
{
	char A[] = "madam";
	int size = sizeof(A) / sizeof(char);
	bool isPalin;
	for(int i = 0; i < size; ++i)
	{
		if(A[i] == A[size - i])
		{
			isPalin = true;
		}
	}

	if(isPalin)
	{
		printf("Palindrome \n");
	}
	else
	{
		printf("Not palindrome\n");
	}

	return 0;
}