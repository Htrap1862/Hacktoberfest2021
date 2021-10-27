//string compare without string.h function strcmp()

#include <stdio.h>
int main()
{
    int i = 0, f = 0;
    char a[20], b[20];
    clrscr();
    printf("Enter strin a: ");
    gets(a);
    printf("Enter string b: ");
    gets(b);
    while (a[i] != '\0' && b[i] != '\0')
    {
        if (a[i] != b[i])
        {
            f = 1;
            break;
        }
        i++;
    }
    if (f == 0)
    {
        printf("\nStrings are same");
    }
    else
    {
        printf("Strings aren't same");
    }
}