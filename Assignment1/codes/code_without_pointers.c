#include <stdio.h>
int main()
{
    int a[] = {2,4,6,8,10};
    int i,sum = 0, b = 4;
    for (i = 0; i < 5; i++)
        sum = sum + (arr[b] - i) - arr[b-i];
    printf("%d\n", sum);
    return 0;
}