#include <stdio.h>
#include <iostream>
#include <queue>

using namespace std;

int r,c;

void f(char arr[][c], int y, int x)
{
    queue<pair<int,int> > q;
    bool checked[r][c] = {};

    q.push({y,x});

    while(!q.empty()) {
        int ii = q.front().first;
        int jj = q.front().second;
        q.pop();

        //if (ii>0 && checked[ii-1][jj]==false && arr[ii-1][jj]!=)
    }









    return;
}

int main()
{
    int i,j;
    bool canProtect = true;



    //�Է¹ޱ�
    scanf("%d %d", &r, &c);

    getchar();

    char arr[r][c];

    for(i=0;i<r;i++) {
        for(j=0;j<c;j++)
            scanf("%c", &arr[i][j]);
        getchar();
    }



    //��� ���� ���� Ȯ��
    for(i=0;i<r;i++) {
        for(j=0;j<c;j++) {
            if (arr[i][j]=='W') {
                if (i>0 && arr[i-1][j]=='S') {
                    canProtect = false;
                    goto jump;
                }
                else if (j>0 && arr[i][j-1]=='S') {
                    canProtect = false;
                    goto jump;
                }
                else if (j<c-1 && arr[i][j+1]=='S') {
                    canProtect = false;
                    goto jump;
                }
                else if (i<r-1 && arr[i+1][j]=='S') {
                    canProtect = false;
                    goto jump;
                }
            }
        }
    }
    jump:



    //�渷��
    if (canProtect == true) {
        for(i=0;i<r;i++) {
            for(j=0;j<c;j++)
                if (arr[i][j]=='W')
                    f(arr,i,j);
        }
    }



    //���
    cout >> canProtect;

    for(i=0;i<r;i++) {
        for(j=0;j<c;j++)
            printf("%c",arr[i][j]);
        printf("\n");
    }

    return 0;
}
