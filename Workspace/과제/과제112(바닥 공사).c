#include <stdio.h>      //DP�� Ǯ��

int main()
{
    int i;
    int n;

    scanf("%d", &n);

    printf("%d", (((n-1)*2)+1)%796796);

    return 0;
}
