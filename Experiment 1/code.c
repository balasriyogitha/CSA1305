#include <stdio.h>
#include <string.h>

int main()
{
    char str[100];
    int len;

    printf("DFA Simulation\n");
    printf("Language: Strings that start with 'a' and end with 'a'\n");

    printf("\nEnter the input string: ");
    scanf("%s", str);

    len = strlen(str);

    if (len > 0 && str[0] == 'a' && str[len - 1] == 'a')
    {
        printf("\nResult: String Accepted.\n");
    }
    else
    {
        printf("\nResult: String Rejected.\n");
    }

    return 0;
}
