#include <stdio.h>

int main()
{
    int countNums = 0, countSequence = 0, result;
    int n = 9;
    int nums[9] = {9, 6, 4, 2, 3, 5, 7, 0, 1};

    for (int i = 0; i < n; i++)
    {
        countNums += nums[i];
        countSequence += i;
    }
    result = (countSequence + n) - countNums;

    printf("%d", result);

    return 0;
}