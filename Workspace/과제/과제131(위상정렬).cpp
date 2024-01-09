#include <stdio.h>      //fin
#include <iostream>
#include <vector>
#include <queue>

using namespace std;

int n,m;

vector<int> road[100001];   //����
int enter[100001] = {};

void topologySort()
{
    queue<int> q;

    int i,j;

    //ť�� �������� 0��� ����
    for(i=0;i<n;i++) {
        if (enter[i] == 0) {
            q.push(i);
        }
    }

    //ť�� ��������
    while (!q.empty()) {
        int x = q.front();
        q.pop();

        printf("%d ", x+1);

        for(i=0;i<road[x].size();i++) {
            enter[road[x][i]]--;

            if (enter[road[x][i]] == 0) {
                q.push(road[x][i]);
            }
        }
    }

    return;
}

int main()
{
    int i,j;
    int n1,n2;
    scanf("%d %d", &n, &m);

    //���� �Է�
    for(i=0;i<m;i++) {
        scanf("%d %d", &n1, &n2);
        road[n1-1].push_back(n2-1);
        enter[n2-1]++;
    }

    topologySort();

    return 0;
}
