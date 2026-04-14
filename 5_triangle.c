#include<stdio.h>
#include<conio.h>
int main()
{
    int a,b,c,c1,c2,c3;

    do
    {
        printf("Enter the sides of Triangle:\n");
        scanf("%d %d %d",&a,&b,&c);

        c1=((a>=1)&&(a<=10));
        c2=((b>=1)&&(b<=10));
        c3=((c>=1)&&(c<=10));

        if(!c1)
            printf("The value of a is out of range\n");
        if(!c2)
            printf("The value of b is out of range\n");
        if(!c3)
            printf("The value of c is out of range\n");

    } while(!c1 || !c2 || !c3);

    if((a+b)>c && (b+c)>a && (c+a)>b)
    {
        if(a==b && b==c)
            printf("Triangle is Equilateral\n");
        else if(a!=b && b!=c && c!=a)
            printf("Triangle is Scalene\n");
        else
            printf("Triangle is Isosceles\n");
    }
    else
    {
        printf("Triangle can't be formed\n");
    }

    return 0;
}
