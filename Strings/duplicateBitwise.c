#include <stdio.h>

int main(int argc, char const* argv[])
{
	char A[] = "finding";
	long int H = 0, x = 0;
	for(int i = 0; A[i] != '\0'; ++i)
	{
		x = 1;
		x = x << (A[i] - 97);
		printf("%ld\n", x);
		if((x & H) > 0)
		{
			printf("%c is Duplicate\n", A[i]);
		}
		else
		{
			H = x | H;
		}
	}

	return 0;
}