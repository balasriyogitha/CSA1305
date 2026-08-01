#include <stdio.h>
#include <string.h>

int main()
{
    char str[100];
    int len;

    printf("NFA Simulation\n");
    printf("Language: Strings that start with '0' and end with '1'\n");

    printf("\nEnter the input string: ");
    scanf("%s", str);

    len = strlen(str);

    if (len > 0 && str[0] == '0' && str[len - 1] == '1')
    {
        printf("\nResult: String Accepted.\n");
    }
    else
    {
        printf("\nResult: String Rejected.\n");
    }

    return 0;
}
