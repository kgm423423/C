#include <stdio.h>      //fin

int main()
{
    int i,j;
    int n,m;
    scanf("%d %d", &n, &m);
    int arr[n+1];


    //0�� �ʱ�ȭ
    arr[0] = 0;


    //�� �Է¹ޱ�
    for(i=1;i<=n;i++) {
        scanf("%d", &arr[i]);
        arr[i] += arr[i-1];
    }


    //�� ����ϱ�
    for(i=0;i<m;i++) {
        int n1,n2;
        scanf("%d %d", &n1, &n2);
        printf("%d\n", arr[n2]-arr[n1-1]);
    }

    return 0;
}
