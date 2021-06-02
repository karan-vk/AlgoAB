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

int main(int argc, char const* argv[])
{
	char A[] = "WELCOME";
	lower(A);
	std::cout << A << std::endl;
	upper(A);
	std::cout << A << std::endl;
	return 0;
}