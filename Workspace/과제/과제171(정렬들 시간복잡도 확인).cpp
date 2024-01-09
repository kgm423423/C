#include <iostream>     //fin
#include<cstdlib>
#include<ctime>
#include<time.h>
#define n 30000
using namespace std;

void bubbleSort(int arr[])
{
    int i,j;

    for(i=1;i<n;i++)
        for(j=0;j<n-i;j++)
            if (arr[j] > arr[j+1])
                swap(arr[j], arr[j+1]);

    return;
}

void selectionSort(int arr[])
{
    int i,j;
    int p;

    for(i=0;i<n;i++) {
        p = i;
        for(j=i+1;j<n;j++)
            if (arr[p] > arr[j])
                p = j;
        swap(arr[p],arr[i]);
    }

    return;
}

void insertionSort(int arr[])
{
    int i,j;

    for(i=1;i<n;i++)
        for(j=i;j>0;j--) {
            if (arr[j] > arr[j-1])
                break;
            swap(arr[j], arr[j-1]);
        }

    return;
}

void quickSort(int arr[], int s, int e)
{
    if (s >= e)
        return;

    int i=(s+1);
    int j=e;

    while (i <= j) {
        while (i < n && arr[i] <= arr[s])
            i++;
        while (arr[j] > arr[s])
            j--;

        if (i < j)
            swap(arr[i], arr[j]);
        else
            swap(arr[s], arr[j]);
    }

    quickSort(arr,s,j-1);
    quickSort(arr,j+1,e);

    return;
}

void randArr(int arr[])
{
    int i;
    srand(time(NULL));

    for(i=0;i<n;i++)
        arr[i] = rand();

    return;
}

int main()
{
    int i,j;
    int arr1[n];
    int arr2[n];
    int arr3[n];
    int arr4[n];

    //�迭�� ������ �Է�
    randArr(arr1);
    randArr(arr2);
    randArr(arr3);
    randArr(arr4);

    ///�� �ҿ�ð� ���
    printf("���� ���� %d\n", n);

    //����
    clock_t bubbleStart = clock();
    bubbleSort(arr1);
    clock_t bubbleDelay = clock();
    printf("���� �ҿ�ð� : %lf\n", (double)(bubbleDelay-bubbleStart)/1000);

    //����
    clock_t selectionStart = clock();
    bubbleSort(arr2);
    clock_t selectionDelay = clock();
    printf("���� �ҿ�ð� : %lf\n", (double)(selectionDelay-selectionStart)/1000);

    //����
    clock_t insertionStart = clock();
    bubbleSort(arr3);
    clock_t insertionDelay = clock();
    printf("���� �ҿ�ð� : %lf\n", (double)(insertionDelay-insertionStart)/1000);

    //��
    clock_t quickStart = clock();
    bubbleSort(arr4);
    clock_t quickDelay = clock();
    printf("�� �ҿ�ð� : %lf\n", (double)(quickDelay-quickStart)/1000);

    return 0;
}
