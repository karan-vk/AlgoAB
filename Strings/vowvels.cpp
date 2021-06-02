#include <iostream>
#include <ostream>

void vowel(char a[])
{
	int i, vcount = 0, ccount = 0;
	for(i = 0; a[i] != '\0'; ++i)
	{
		bool condi = a[i] >= 97 && a[i] <= 122;
		if(a[i] == 'a' || a[i] == 'e' || a[i] == 'i' || a[i] == 'o' || a[i] == 'u' || a[i] == 'A' || a[i] == 'E' ||
		   a[i] == 'I' || a[i] == 'O' || a[i] == 'U')
			vcount++;

		else if((a[i] >= 65 && a[i] <= 90) || (condi))
			ccount++;
	}
	std::cout << "Vowel Count :" << vcount << std::endl;
	std::cout << "Consonant Count :" << ccount << std::endl;
}

void countWords(char a[])
{
	int wcount = 0;
	for(int i = 0; a[i] != 0; ++i)
		if(a[i] == ' ')
			wcount++;

	std::cout << "Word Count :" << wcount + 1 << std::endl;
}

int main(int argc, char const* argv[])
{
	char A[] = "How are you";
	countWords(A);
	vowel(A);

	return 0;
}