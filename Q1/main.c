#include <stdio.h>
#include <stdlib.h>

int main()
{
    char str[256];
    int i;
    printf("Enter a string:\n ");
    gets(str);

    for(i=0; str[i]!='\0'; i++)
    {
        if(str[i]>='a' && str[i]<='z')
            str[i]=str[i]-32;
    }
    printf("Uppercase string: %s",str);
    return 0;
}
