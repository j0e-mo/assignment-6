#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char str[256], temp;
    int i, last, length;
    printf ("Enter a string:\n");
    scanf("%s", &str);
    length= strlen(str);
    last = length - 1;
    for (i=0;i<last; i++)
    {
        temp = str[i];
        str[i] = str[last];
        str[last] = temp;
        last--;
    }
    printf ("The reverse is: %s\n",  str);

    return 0;
}
