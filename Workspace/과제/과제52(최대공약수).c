#include <stdio.h>

int main()
{
    int i,j,n,m; //n�� ������ �� m�� ���ڰ���
    char k; //�Ǻ� ����
    scanf("%d", &m);
    int arr[m];

    for(i=0;i<m;i++) {
        scanf("%d", &arr[i]);
        if (i==0)
            n=arr[i];
        if (arr[i]<n)
            n=arr[i];
    }

    for(k=0;n>0;n--,k=0) {
        for(j=0;j<m;j++) {
            if (arr[j]%n!=0) {
                k=1;
                break;
            }
        }
        if (k==0)
            break;
    }

    printf("%d", n);

    return 0;
}
