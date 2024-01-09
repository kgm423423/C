#include <stdio.h>      //fin

const int INF = 999999999;



int main()
{
    int i,j,k;
    int n,m;
    int n1,n2,n3;

    scanf("%d %d", &n, &m);

    int arr[n+1][n+1];

    //�ʱ�ȭ
    for(i=1;i<=n;i++)
        for(j=1;j<=n;j++)
            arr[i][j] = INF;

    for(i=1;i<=n;i++)
        arr[i][i] = 0;



    //�迭 �Է¹ޱ�
    for(i=0;i<m;i++) {
        scanf("%d %d %d", &n1, &n2, &n3);

        if(arr[n1][n2] > n3)
            arr[n1][n2] = n3;
    }



    //�÷��̵� ���� �˰���
    for(k=1;k<=n;k++) {
        for(i=1;i<=n;i++)
            for(j=1;j<=n;j++)
                if (arr[i][j] > (arr[i][k] + arr[k][j]))
                    arr[i][j] = (arr[i][k] + arr[k][j]);
    }



    //INFó��
    for(i=1;i<=n;i++)
        for(j=1;j<=n;j++)
            if (arr[i][j] == INF)
                arr[i][j] = 0;




    //���
    for(i=1;i<=n;i++) {
        for(j=1;j<=n;j++)
            printf("%d ", arr[i][j]);
        printf("\n");
    }
    printf("\n");


    return 0;
}
