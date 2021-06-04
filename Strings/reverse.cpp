#include <iostream>
#include <ostream>

int len(char A[])
{
	int i;
	for(i = 0; A[i] != '\0'; i++)
	{}
	return i;
}
void reverse(char A[])
{
	int i = len(A);

	char b[i + 1];
	i -= 1;
	int j;
	for(j = 0; i >= 0; i--, j++)
	{
		b[j] = A[i];
	}
	b[j] = '\0';
	std::cout << b << std::endl;
}

void reverse2(char A[])
{
	int j = len(A);
	char b[j + 1];
	char t;
	int i;
	j -= 1;
	for(i = 0; i < j; ++i)
	{
		t = A[i];
		A[i] = A[j];
		A[j] = t;
	}
	// A[j + 1] = '\0';
	std::cout << A << std::endl;
}

int main(int argc, char const* argv[])
{
	char a[] = "python";

	// std::cout << a << std::endl;
	reverse(a);
	reverse2(a);
	// std::cout << x << std::endl;

	return 0;
}