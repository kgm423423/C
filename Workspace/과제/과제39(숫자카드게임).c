#include <stdio.h>

int main()
{
    int m,n,i,j,k,p;

    scanf("%d %d",&m ,&n);

    int arr[n][m]; // m���� n����

    for(i=0;i<n;i++) { //�Է�
        for(j=0;j<m;j++) {
            scanf("%d",&arr[i][j]);
        }
    }

    for(i=0;i<n;i++) { //x0�࿡ �ּҰ�
        for(j=0;j<m-1;j++) {
            for(k=0;k<m-j-1;k++) {
                if (arr[i][k]>arr[i][k+1]) {
                    p = arr[i][k];
                    arr[i][k] = arr[i][k+1];
                    arr[i][k+1] = p;
                }
            }
        }
    }

    for(i=0;i<n-1;i++) { //0,0�࿡ �ִ�
        for(j=0;j<n-i-1;j++) {
            if (arr[j][0]<arr[j+1][0]) {
                p=arr[j][0];
                arr[j][0]=arr[j+1][0];
                arr[j+1][0]=p;
            }
        }
    }

    printf("%d",arr[0][0]);

    return 0;
}
