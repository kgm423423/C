#include <stdio.h>

int main()
{
    int i,j,n,k;
    //printf("���� ���� �Է� : "); scanf("%d", &n);
    //int arr[n]; �ʱ�ȭ�� �ȉ�

    int arr[1000]={};//�׳� 999����

    printf("�Է� Ƚ�� �Է� : "); scanf("%d", &n);

    for(i=0;i<n;i++) {
        scanf("%d", &k);
        arr[k]++;
    }
    for(i=0;i<1000;i++)
        if (arr[i]!=0)
            for(j=0;j<arr[i];j++)
                printf("%d ",i);



    return 0;
}
