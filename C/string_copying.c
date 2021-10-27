//string copy without string.h functions

#include <stdio.h>
int main()
{
    int i = 0, j = 0, sa, sb;
    char a[20], b[20];
    clrscr();
    printf("Enter strin a: ");
    gets(a);
    printf("Enter string b: ");
    gets(b);
    while (b[i] != '\0')
    {
        i++;
    }
    sb = i;
    i = 0;
    while (a[i] != '\0')
    {
        i++;
    }
    sa = i;
    for (i = 0; i < sb; i++)
    {
        a[i] = b[i];
    }
    a[sb] = '\0';
    printf("\nCOPIED STRING: %s", a);
    getch();
}