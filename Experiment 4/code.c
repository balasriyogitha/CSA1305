#include <stdio.h>
#include <string.h>

int main()
{
    char str[100];
    int i, len, valid = 1;

    printf("Enter binary string: ");
    scanf("%s", str);

    len = strlen(str);

    if(len < 2)
        valid = 0;
    else if(str[0] != '0' || str[len-1] != '1')
        valid = 0;
    else
    {
        for(i = 0; i < len; i++)
        {
            if(str[i] != '0' && str[i] != '1')
            {
                valid = 0;
                break;
            }
        }
    }

    if(valid)
        printf("String belongs to the grammar.\n");
    else
        printf("String does not belong to the grammar.\n");

    return 0;
}
