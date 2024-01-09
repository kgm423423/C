#include <stdio.h>
#include <math.h>

using namespace std;

int main()
{
    long long int n,m;
    int sum = 0;


    /// 1.�迭 ����� �ʱ�ȭ
    scanf("%lld %lld", &n, &m);
    int num = (int)sqrt(m);
    bool check[num+1];

    //�ʱ�ȭ
    for(int i=1;i<=num;i++)
        check[i] = false;
    check[1] = true;


    /// 2.���� �Ҽ� ã��
    for(int i=2;i<=num;i++) {
        if (!check[i]){
            //������� ã��
            int k = 2;
            while (n <= pow(i,k) && m >= pow(i,k)) {
                sum++;
                k++;
            }

            //���������׳׽� ü
            int j = i+i;

            while (j <= num) {
                check[j] = true;
                j += i;
            }
        }
    }


    /// 3.�� ���
    printf("%d", sum);

    return 0;
}
