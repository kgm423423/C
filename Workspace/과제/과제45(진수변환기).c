#include <stdio.h>

void f(int m, int n)
{
    if (n<m) {
        if (n%m>=10)
            printf("%c",55+n%m);
        else
            printf("%d",n%m);

        return;
    }

    f(m,n/m);

    if (n%m>=10)
        printf("%c",55+n%m);
    else
        printf("%d",n%m);

    return;
}

int main()
{
    int n,m;

    scanf("%d %d", &m, &n); //m�� ��ȯ ���� n�� ��ȯ�� 10���� ��

    f(m,n);

    return 0;
}
