#include <stdio.h>      //fin

int main()
{
    int i;
    float n;
    int arr[3] = {};
    int a;

    scanf("%f", &n);

    //�Է¹ޱ�
    for(i=0;i<n;i++) {
        scanf("%d", &a);
        arr[a+1]++;
    }

    //���
    arr[1] >= n/2 ? printf("INVALID") : arr[2] > arr[0] ? printf("APPROVED") : printf("REJECTED");

    return 0;
}
