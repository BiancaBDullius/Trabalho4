#include <stdio.h>

int main()
{
    int n = 3, result = 0;
    int nums[3] = {0, 3, 1};

    for (int i = 0; i < n; i++)
    {
        result = result + i - nums[i];
    }

    printf("%d", result + n);

    return 0;
}