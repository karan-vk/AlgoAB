#include <iostream>
#include <ostream>

int main(int argc, char const* argv[])
{
	char A[] = "painter";
	char B[] = "painting";
	int i, j;
	for(i = 0, j = 0; A[i] != '\0' && B[i] != '\0'; ++i, j++)
	{
		if(A[i] != A[i])
		{
			break;
		}
	}
	if(A[i] == B[j])
		std::cout << "Equal" << std::endl;
	else if(A[i] < B[j])
		std::cout << "Smaller" << std::endl;
	else
		std::cout << "Bigger" << std::endl;

	return 0;
}