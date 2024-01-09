#include <stdio.h>

const int INF = 999999999;

int main()
{
    int i,j,k;
    int n,m,s;
    scanf("%d %d", &n, &m);
    int arr[n][n];

    //�迭 �ʱ�ȭ
    for(i=0;i<n;i++)
        for(j=0;j<n;j++)
            arr[i][j] = INF;

    //i==j=0
    for(i=0;i<n;i++)
        for(j=0;j<n;j++)
            if (i==j)
                arr[i][j] = 0;

    //�迭 �Է�
    for(k=0;k<m;k++) {
        scanf("%d %d", &i, &j);
        arr[i-1][j-1] = 1;
    }

    //�÷��̵� ���� �˰���
    for(k=0;k<n;k++)
        for(i=0;i<n;i++)
            for(j=0;j<n;j++)
                if (arr[i][j] > arr[i][k] + arr[k][j])
                    arr[i][j] = arr[i][k] + arr[k][j];

    //��� ��ȯ
    scanf("%d", &s);
    int sum[s];

    for(k=0;k<s;k++) {
        scanf("%d %d", &i, &j);
        i--;j--;

        if (arr[i][j] == INF && arr[j][i] == INF)
            sum[k] = 0;
        else if (arr[j][i] == INF)
            sum[k] = -1;
        else
            sum[k] = 1;
    }

    //���
    for(i=0;i<s;i++)
        printf("%d\n", sum[i]);

    return 0;
}
