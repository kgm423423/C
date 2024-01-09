#include <stdio.h>

const int INF = 999999999;

int main()
{
    int i,j,k;
    int n,m;
    int sum = 0;

    scanf("%d %d", &n, &m);

    int arr[n+1][n+1];
    int sumArr[n+1];


    //�迭 �ʱ�ȭ
    for(i=1;i<=n;i++)
        for(j=1;j<=n;j++)
            arr[i][j] = INF;

    for(i=1;i<=n;i++)
        arr[i][i] = 0;

    for(i=1;i<=n;i++)
        sumArr[i] = 0;


    //�迭 �Է¹ޱ�
    int n1,n2;

    for(i=0;i<m;i++) {
        scanf("%d %d", &n1, &n2);

        arr[n1][n2] = 1;
    }



    //�÷��̵� ���� �˰���
    for(k=1;k<=n;k++)
        for(i=1;i<=n;i++)
            for(j=1;j<=n;j++)
                if (arr[i][j] > arr[i][k] + arr[k][j])
                    arr[i][j] = arr[i][k] + arr[k][j];


    //���� �迭 ���
    for(i=1;i<=n;i++) {
        for(j=1;j<=n;j++)
            if (arr[i][j] != INF)
                sumArr[i] += arr[i][j];
    }



    //���� ���
    for(i=1;i<=n;i++)
        if (sumArr[i] != i) {
            sum++;
            printf("%d %d\n", sumArr[i], i);
        }


    printf("%d", sum);


    return 0;
}
