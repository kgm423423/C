#include <stdio.h>

int f(int n)
{
    if (n==1) {
        return 0;
    }

    if (n==2) {
        return 1;
    }

    return f(n-1) + f(n-2);
}

int main()
{
    int k;
    scanf("%d",&k);

    printf("%d ",f(k));

    return 0;
}
