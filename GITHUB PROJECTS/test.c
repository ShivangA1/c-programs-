#include <stdio.h>

int josephus(int n)
{
    if (n < 1)
    {
        printf("Invalid input\n");
    }
    else
    {
        int person[n];
        int alive = n;
        int count = 0;
        int index = 0;
        for (int k = 1; k <= n ; k++)
        {
            person[k - 1] = 1;
        }
        while (alive > 1)
        {
            if (person[index] == 1)
            {
                count++;
                if (count == 2)
                {
                    person[index] = 0;
                    alive--;
                    count = 0;
                }
            }
            index = (index + 1) % n;
        }
        for (int i = 0; i < n; i++)
        {
            if (person[i] == 1)
            {
                return i + 1;
            }
        }
    }
}

int main()
{
    int n;
    printf("Enter the number of people: ");
    scanf("%d", &n);
    printf("The position of the last person remaining is: %d\n", josephus(n));
    return 0;
}