#include<stdio.h>
void input(int *x,int *y);
int add(int a,int b);
void output(int sum);

void input(int *x,int *y)
{
    scanf("%d%d",x,y);
}
int add(int a,int b)
{
    int c;
    c=a+b;
    return c;
}
void output(int sum)
{
    printf("%d",sum);
}
int main()
{
    int a,b,sum;
    input(&a,&b);
    sum =add(a,b);
    output(sum);
    return 0;
}
