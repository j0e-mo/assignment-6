#include <stdio.h>
#include <stdlib.h>

int main()
{
    char str[256];
    int ltr=0, digit=0, spicial=0, i;
    printf("Enter a string:\n");
    gets(str);

    for(i=0;str[i]!='\0';i++)
    {
        if((str[i]>='a' && str[i]<='z') || (str[i]>='A' && str[i]<='Z'))
            ltr++;
        else if(str[i]>='0' && str[i]<='9')
            digit++;
        else
            spicial++;
    }

    printf("Number of letters in the string is: %d\n", ltr);
    printf("Number of Digits in the string is: %d\n", digit);
    printf("Number of Special characters in the string is: %d\n\n", spicial);

    return 0;
}

