#include<stdio.h>

int main()
{
    int c1,c2,c3,temp;
    int locks,stocks,barrels,totallocks,totalstocks,totalbarrels;
    float lockprice,stockprice,barrelprice;
    float locksales,stocksales,barrelsales,sales,com;

    lockprice=45.0;
    stockprice=30.0;
    barrelprice=25.0;

    totallocks=0;
    totalstocks=0;
    totalbarrels=0;

    printf("Enter the number of locks and to exit press -1\n");
    scanf("%d",&locks);

    while(locks != -1)
    {
        c1=(locks<=0 || locks>70);

        printf("\nEnter the number of stocks and barrels\n");
        scanf("%d %d",&stocks,&barrels);

        c2=(stocks<=0 || stocks>80);
        c3=(barrels<=0 || barrels>90);

        if(c1)
            printf("\nValue of locks not in range 1-70\n");
        else
        {
            temp=totallocks+locks;
            if(temp>70)
                printf("New totallocks=%d exceeds limit\n",temp);
            else
                totallocks=temp;
        }

        printf("\nTotal locks=%d",totallocks);

        if(c2)
            printf("\nStocks not in range 1-80\n");
        else
        {
            temp=totalstocks+stocks;
            if(temp>80)
                printf("\nNew total stocks=%d exceeds limit",temp);
            else
                totalstocks=temp;
        }

        printf("\nTotal stocks=%d",totalstocks);

        if(c3)
            printf("\nBarrels not in range 1-90\n");
        else
        {
            temp=totalbarrels+barrels;
            if(temp>90)
                printf("\nNew total barrels=%d exceeds limit\n",temp);
            else
                totalbarrels=temp;
        }

        printf("\nTotal barrels=%d",totalbarrels);

        printf("\nEnter the number of locks and to press -1 to exit \n");
        scanf("%d",&locks);
    }

    printf("\nTotal locks=%d",totallocks);
    printf("\nTotal stocks=%d",totalstocks);
    printf("\nTotal barrels=%d",totalbarrels);

    locksales=totallocks*lockprice;
    stocksales=totalstocks*stockprice;
    barrelsales=totalbarrels*barrelprice;

    sales=locksales+stocksales+barrelsales;

    printf("\nTotal sales=%f",sales);

    if(sales > 1800)
    {
        com = 0.10*1000;
        com = com + (0.15*800);
        com = com + 0.20*(sales-1800);
    }
    else if(sales > 1000)
    {
        com = 0.10*1000;
        com = com + 0.15*(sales-1000);
    }
    else
    {
        com = 0.10*sales;
    }

    printf("\nCommission=%f",com);

    return 0;
}