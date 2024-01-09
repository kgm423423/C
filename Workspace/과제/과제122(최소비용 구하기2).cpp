#include <stdio.h>      //fin
#include <iostream>
#include <vector>
#include <queue>

using namespace std;

const int INF = 999999999;

int n,m,x,k;

vector<pair<int,int>> road[1001];

struct node
{
  bool  check;
  int dis;
};

void f(struct node arr[])
{
    int i,xx;
    int n1,n2;
    priority_queue<pair<int,int>> q;

    //�迭 �ʱ�ȭ
    for(i=1;i<=n;i++) {
        arr[i].check = false;
        arr[i].dis = INF;
    }
    arr[x].dis = 0;
    q.push({0,-x});

    //���
    while (!q.empty()) {
        xx = q.top().second;

        q.pop();
        //üũ
        if (arr[xx].check == true)
            continue;

        arr[xx].check = true;

        //�Ÿ� ������Ʈ
        for(i=0;i<road[xx].size();i++) {
            n1 = arr[xx].dis + road[xx][i].second;
            n2 = arr[road[xx][i].first].dis;

            if (n1 < n2) {
                arr[road[xx][i].first].dis = n1;
                q.push({-n1, road[xx][i].first});
            }
        }
    }

    return;
}

int main()
{
    int i,j;
    int n1,n2,n3;
    scanf("%d %d", &n, &m);
    struct node arr[n+1];

    //���� �Է�
    for(i=1;i<=m;i++) {
        scanf("%d %d %d", &n1, &n2, &n3);
        road[n1].push_back({n2,n3});
    }

    //���,���� �Է�
    scanf("%d %d", &x, &k);

    //�Լ�ȣ��
    f(arr);

    printf("%d ", arr[k].dis);

    return 0;
}
