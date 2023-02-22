#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
  	char str[256], ch;
  	int i, indicator;
  	indicator = 0;

  	printf("Enter a String:\n");
  	gets(str);
  	printf("Enter the Character you want to Search for:\n");
  	scanf("%c", &ch);

  	for(i=0;i<=strlen(str);i++)
  	{
  		if(str[i]==ch)
		{
  			indicator++;
			break;
 		}
	}
    if(indicator == 0)
  		printf("We haven't found your character '%c'\n", ch);
	else
		printf("We found '%c' at position %d\n", ch, i + 1);
  	return 0;
}
