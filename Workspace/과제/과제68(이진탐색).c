#include <stdio.h>

int j=1;

void f(int arr[], int n, int s, int e)
{
    int i=(s+e)/2;

    if (arr[i-1]==n) {
        printf("���� ��ġ : %d, �ݺ� : %d", i, j);
        return;
    }

    if (e-s<1) {
        printf("���ϴ�  ���� �����ϴ�. �ݺ� : %d", j);
        return;
    }
    j++;

    if (arr[i-1]>n)
        f(arr, n, s, i-1);
    if(arr[i-1]<n)
        f(arr, n, i+1, e);

    return;
}

int main()
{
    int i,n,r;
    scanf("%d", &r);
    int arr[r];

    for(i=0;i<r;i++)
        scanf("%d", &arr[i]);

    scanf("%d", &n);

    f(arr, n, 1, r);

    return 0;
}
