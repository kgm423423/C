#include <stdio.h>

int Add(int a, int b) //o o
{
    int c = a + b;

    return c;
}

int sc() //o x
{
    int b;

    scanf("%d",&b);

    return b;
}

void pr(int a) //x o
{
    printf("%d",a);

}

void start() //x x
{
    printf("�� ���α׷��� �� ���� ���ϴ� ���α׷��Դϴ� �� ���ڸ� �Է����ּ��� : ");
}

int  main()
{
    int a,b;

    start();

    a = sc();
    b = sc();

    pr(Add(a ,b));

    return 0;
}
