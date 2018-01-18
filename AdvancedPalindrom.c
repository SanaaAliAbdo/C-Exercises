#include <stdio.h>
#include <ctype.h>

int main()
{

	char palindr2[] = "madam,I'm Adam";
	int i,j,len;

	len = sizeof(palindr2) - 1;
	for(i = 0, j = len - 1;i < len, j >= 0; i++,j--)
	{
		while(! isalpha(palindr2[i])) i++;
		while(! isalpha(palindr2[j])) j--;
		if((tolower(palindr2[i]) != tolower(palindr2[j])))
		{
			printf("%s - It's not a palindrome\n",palindr2);
			return 0;
		}
	}
	printf("%s - It's a palindrome\n",palindr2);
	return 0;
}
