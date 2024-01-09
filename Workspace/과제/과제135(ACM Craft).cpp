#include <stdio.h>
#include <iostream>
#include <vector>
#include <queue>

using namespace std;

void topologySort()
{
    int i,j;
    int n,m;
    int n1,n2;
    int t;
    int sum = 0;

    scanf("%d %d", &n, &m);

    vector<int> road[n];
    int enter[n] = {};
    int time[n];
    bool check[n] = {};
    queue<int> q;

    queue<int> sumArr;

    //�ҿ�ð� �Է¹ޱ�
    for(i=0;i<n;i++)
        scanf("%d", &time[i]);

    //vector �Է¹ޱ�
    for(i=0;i<m;i++) {
        scanf("%d %d", &n1, &n2);

        road[n1-1].push_back(n2-1);
        enter[n2-1]++;
    }

    //�������� 0��� ����
    for(i=0;i<n;i++)
    if (enter[i] == 0)
        q.push(i);

    printf("test1\n");

    //���� ����
    while (!q.empty()) {
        int x = q.front();

        sumArr.push(x);

        q.pop();

        for(i=0;i<road[x].size();i++) {
            enter[road[x][i]]--;

            if (enter[road[x][i]] == 0)
                q.push(road[x][i]);
        }
        printf("test2\n");
    }

    //Ÿ�� �Է�
    scanf("%d", &t);


    /*
    while (!sumArr.empty()) {
        printf("SortTest%d\n", sumArr.front());
        sumArr.pop();
    }

    */


    //Ÿ�ٱ��� �ð� ���
    sum += time[sumArr.front()];

    while(check[t-1] == false) {
        int x = sumArr.front();
        int p = 0;

        sumArr.pop();

        for(i=0;i<road[x].size();i++) {
            if (check[road[x][i]] == false && time[road[x][i]] > p)
                p = time[road[x][i]];

            check[road[x][i]] = true;
        }

        printf("test3 x:%d sum:%d\n", x+1 , sum);

        sum += p;
    }

    //���
    printf("sum : %d\n", sum);

    return;
}

int main()
{
    int i;
    int n;
    scanf("%d", &n);

    for(i=0;i<n;i++)
        topologySort();

    return 0;

}
