#include <stdio.h>

int main ()

{
    int n, i;

    printf("Enter The Number : ");
    scanf("%d", &n);

    for (i=1; i<=10; i++)
    {
        printf("\n%d", n * i);
    }

    return 0;
}