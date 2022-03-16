#include <stdio.h>

int main()
{
    int i;
    int arr1[7];
    int arr2[7];
    for (i = 0; i < 7; i++)
    {
        scanf("%d %d", &arr1[i], &arr2[i]);
    }
    int num = arr1[0] + arr2[0];
    int count = 0;
    int n = 0;
    for (i = 0; i < 7; i++)
    {
        int num2 = arr1[i] + arr2[i];
        if (num2 > num)
        {
            num = num2;
            n = i + 1;
        }

        else
        {
            count++;
        }

    }
    if (count == 7)

        printf("0\n");
    else
        printf("%d\n", n);

    return 0;
}

