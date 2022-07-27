#include <stdio.h>

int isPrime(int num)
{

    if (num < 12)
    {
        if (num == 2 || num == 3 || num == 5 || num == 7 || num == 11)
        {
            printf("confirming through first if\n");
            return 1;
        }
    }
    else
    {
        for (int i = 0;; i++)
        {
            if (6 * i - 1 == num || 6 * i + 1 == num)
            {
                if (num > 6 * i - 1 || num > 6 * i + 1)
                {
                    return 0;
                    printf("inside trap1");
                }
                printf("confirming through first 2 1 if\n");
                return 1;
            }
            printf("inside trap2");
            return 0;
        }
    }
}

int main()
{
    int num;
    printf("Enter a number :");
    scanf("%d", &num);
    if (isPrime(num))
    {
        printf("Prime");
    }
    else
    {
        printf("Not prime");
    }
    return 0;
}