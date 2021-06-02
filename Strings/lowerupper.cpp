#include <iostream>
#include <ostream>

void upper(char a[])
{
	if(a[0] > 96)
	{
		for(int i = 0; a[i] != '\0'; ++i)
		{
			a[i] -= 32;
		}
	}
}

void lower(char a[])
{
	if(a[0] < 96)
	{
		for(int i = 0; a[i] != '\0'; ++i)
		{
			a[i] += 32;
		}
	}
}

void invert(char a[])
{
	for(int i = 0; a[i] != '\0'; ++i)
	{
		if(a[i] >= 65 && a[i] <= 90)
		{
			a[i] += 32;
		}
		else
		{
			a[i] -= 32;
		}
	}
}

int main(int argc, char const* argv[])
{
	char A[] = "WELCOME";
	lower(A);
	std::cout << A << std::endl;
	upper(A);
	std::cout << A << std::endl;
	A[2] = 'l';
	invert(A);
	std::cout << A << std::endl;
	return 0;
}


