#include <stdio.h>

int e[10][10], visited[10], n;

void epsilonClosure(int state)
{
    int i;

    if (visited[state])
        return;

    visited[state] = 1;
    printf("q%d ", state);

    for (i = 0; i < n; i++)
    {
        if (e[state][i] == 1)
            epsilonClosure(i);
    }
}

int main()
{
    int i, j;

    printf("Enter number of states: ");
    scanf("%d", &n);

    printf("\nEnter epsilon transition matrix (0 or 1):\n");

    for(i = 0; i < n; i++)
    {
        for(j = 0; j < n; j++)
        {
            scanf("%d", &e[i][j]);
        }
    }

    printf("\nEpsilon Closures:\n");

    for(i = 0; i < n; i++)
    {
        for(j = 0; j < n; j++)
            visited[j] = 0;

        printf("ε-closure(q%d) = { ", i);
        epsilonClosure(i);
        printf("}\n");
    }

    return 0;
}
