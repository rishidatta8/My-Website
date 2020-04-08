#include<stdio.h>
#include<string.h>
#include<conio.h>
struct accinfo
{
    char name;
    int accno;
    float accbal;
    char acctype;
};
struct accinfo a[10];
    int c;
    c=0;
    void createacc()
    {
        if(c<10)
        {
            printf("Enter Account Number ");
            scanf("%d",& a[c].accno);
            printf("Enter Your Account Balance ");
            scanf("%f",& a[c].accbal);
            printf("Enter Account Type ");
            scanf(" %c",& a[c].acctype);
            c++;
        }
        else
        {
            printf("Sorry! Accounts Limit Exceeded");
        }
};
void accinfo()
{
    int i,ano;
    printf("Enter Your Account Number");
    scanf("%d",& ano);
    for(i=0;i<10;i++)
    {
        if(ano==a[i].accno)
        {
            printf("Account Number: %d \n",a[i].accno);
            printf("Account Balance: %f \n",a[i].accbal);
            printf("Account Type: %c \n",a[i].acctype);
        }
    }
}
void withdraw()
{
    int w,i,ano;
    printf("Enter your account number");
    scanf("%d",& ano);
    for(i=0;i<10;i++)
    {
        if(ano==a[i].accno)
        {
            printf("Your Account balance is %f \n",a[i].accbal);
            printf("Enter the amount you want to withdraw");
            scanf("%d",&w);
            if(w>a[i].accbal)
            {
                printf("Entered Amount is greater than your existing balance \n");
            }
            else
            {
                printf("Your updated account balance is %f \n",a[i].accbal-w);
                a[i].accbal=a[i].accbal-w;
            }
}
}
}
void deposit()
{
    int i,ano,d;
    printf("Enter Your Account Number");
    scanf("%d",& ano);
    for(i=0;i<10;i++)
    {
        if(ano==a[i].accno)
        {
            printf("Your Account Balance is %f \n",a[i].accbal);
            printf("Enter the amount you want to deposit ");
            scanf("%d",&d);
            printf("Your Updated account balance is %f \n",a[i].accbal+d);
            a[i].accbal=a[i].accbal+d;
        }
}
}
main()
{
    char c;
    //clrscr();
    do
    {
        printf("Enter C if you want to create an account \n");
        printf("Enter E if you already have an account \n");
        printf("Enter W if you want to withdraw cash \n");
        printf("Enter D if you want to deposit cash \n");
        printf("Enter M if you want to exit \n");
        scanf(" %c",&c);
        switch(c)
        {
            case 'C':
                createacc();
                break;
            case 'E':
                accinfo();
                break;
            case 'W':
                withdraw();
                break;
            case 'D':
                deposit();
                break;
            case 'M':
                break;
            default:
                printf("Enter any one of the options given above \n");
                break;
        }
    }while(c!='M');
}

