#include <stdio.h>
int A[10] = {0};
char res[10] = {0};
void prem(char x[], int k)
{

	if(x[k] == '\0')
	{
		res[k] = '\0';
		printf("%s", res);
	}
	else
	{
		for(int i = 0; x[i] != '\0'; ++i)
		{
			if(A[i] == 0)
			{
				res[k] = x[i];
				A[i] = 1;
				prem(x, k + 1);
				A[i] = 0;
			}
		}
	}
}

int main(int argc, char const* argv[])
{
	char A[] = "abc";
	prem(A, 0);

	return 0;
}