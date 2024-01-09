#include <stdio.h>      //fin

const int INF = 999999999;

int main()
{
    int i,j,k;
    int n,m;
    int n1,n2,n3;
    scanf("%d %d", &n, &m);
    int arr[n][n];

    //�迭�ʱ�ȭ
    for(i=0;i<n;i++)
        for(j=0;j<n;j++)
            arr[i][j]=INF;

    //i==j=0
    for(i=0;i<n;i++)
        for(j=0;j<n;j++)
            if (i==j)
                arr[i][j] = 0;

    //��� �Է�
    for(i=0;i<m;i++) {
        scanf("%d %d %d", &n1, &n2, &n3);

        if (arr[n1-1][n2-1] > n3)
            arr[n1-1][n2-1] = n3;
    }

    //�÷��̵� ���� �˰���
    for(k=0;k<n;k++) {
        if (i==k)
            continue;
        for(i=0;i<n;i++) {
            if (j==i || j==k)
                continue;
            for(j=0;j<n;j++) {
                if (arr[i][j] > arr[i][k] + arr[k][j])
                    arr[i][j] = arr[i][k] + arr[k][j];
            }
        }
    }

    //���
    for(i=0;i<n;i++) {
        for(j=0;j<n;j++) {
            if (arr[i][j] == INF)
                printf("0 ");
            else
                printf("%d ", arr[i][j]);
        }
        printf("\n");
    }
    return 0;
}
