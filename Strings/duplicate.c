#include <stdio.h>

int main(int argc, char const* argv[])
{
	char A[] = "finding";
	int count[25] = {0};
	for(int i = 0; A[i] != '\0'; ++i)
	{
		count[A[i] - 97]++;
	}
	for(int i = 0; i <= 25; ++i)
	{
		if(count[i] > 1)
		{
			printf("%c : %d\n", i + 97, count[i]);
		}
	}
	return 0;
}