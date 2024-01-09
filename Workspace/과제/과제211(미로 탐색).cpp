#include <stdio.h>      //fin
#include <queue>

using namespace std;


int main()
{
    int i,j;
    int n,m;
    char k;

    queue < pair<int, int> > q;



     /// #1�迭 �����

    scanf("%d %d",&n, &m);

    bool road[n][m];
    int arr[n][m];

    //�ʱ�ȭ
    for(i=0;i<n;i++)
        for(j=0;j<m;j++) {
            road[i][j] = true;
            arr[i][j] = 0;
        }



    /// #2 �迭 �Է¹ޱ�

    for(i=0;i<n;i++) {
        getchar();
        for(j=0;j<m;j++) {
            scanf("%c", &k);
            road[i][j] = k == '1' ? true : false;
        }
    }



    /// #2 BFS
    q.push({0,0});
    road[0][0] = false;

    while(!q.empty()) {
        int y = q.front().first;
        int x = q.front().second;
        q.pop();

        if (y > 0 && road[y-1][x]) {
            arr[y-1][x] = arr[y][x] + 1;
            q.push({y-1, x});
            road[y-1][x] = false;
        }
        if (y < n-1 && road[y+1][x]) {
            arr[y+1][x] = arr[y][x] + 1;
            q.push({y+1, x});
            road[y+1][x] = false;
        }
        if (x > 0 && road[y][x-1]) {
            arr[y][x-1] = arr[y][x] + 1;
            q.push({y, x-1});
            road[y][x-1] = false;
        }
        if (x < m-1 && road[y][x+1]) {
            arr[y][x+1] = arr[y][x] + 1;
            q.push({y, x+1});
            road[y][x+1] = false;
        }
    }



    ///�� ���
    printf("%d", arr[n-1][m-1] + 1);

    return 0;
}
