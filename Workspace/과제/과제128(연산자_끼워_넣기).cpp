#include <stdio.h>
#include <iostream>
#include <queue>

using namespace std;    //8:40

int minN = 0;
int maxN = 0;

//����Լ� ����
void f(queue<int> arr,int opt[],int sum)
{
    while(!arr.empty()) {
        if (opt[1] != 0) {

        }
    }



    return;
}


int main()
{
    //�� �Է¹ޱ�
    int i,j;
    int n;
    scanf("%d",&n);
    queue<int> arr;
    queue<int> arr2;
    int opt[n];

    for(i=0;i<n;i++) {
        scanf("%d", &j);
        arr.push(j);
        arr2.push(j);
    }

    for(i=0;i<4;i++)
        scanf("%d",&opt[i]);

    arr2.pop();

    //�Լ� ����
    for(i=0;i<n;i++) {
         f(arr2,opt,arr.front());
         arr.pop();
    }




    //�� ���













    return 0;
}
