#include <stdio.h>

void f(int n)
{
    int i,arr[3]={1,1,100};

    for(i=0;i<n;i++) {
        printf("Ȯ�� %d\n",arr[2]);

        if (i<3) {
            printf("%d ",arr[i]);
        }
        else {
             arr[2]=arr[0]+arr[1]; //�迭�� �ȴ�����
             printf("%d ",arr[2]);
             arr[0]=arr[1];
             arr[1]=arr[2];
        }
    }

    return;
}

int main()
{
    int n;

    scanf("%d",&n);

    f(n);

    return 0;
}
