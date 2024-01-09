#include <stdio.h>      //fin
#include <stack>

using namespace std;

int main()
{
    int i,j;
    int n;

    stack<int> s;


    // �迭 ����
    scanf("%d", &n);

    int arr[n];

    for(i=0;i<n;i++)
        scanf("%d", &arr[i]);



    //���
    for(i=0;i<n-1;i++) {
        s.push(i);
        if (arr[i+1] > arr[i]) {
            while (!s.empty() && arr[s.top()] < arr[i+1]) {
                arr[s.top()] = arr[i+1];
                s.pop();
            }
        }
    }



    //���� �� ó��
    s.push(n-1);
    while(!s.empty()) {
        arr[s.top()] = -1;
        s.pop();
    }



    //�� ���
    for(i=0;i<n;i++)
        printf("%d ", arr[i]);


    return 0;
}
