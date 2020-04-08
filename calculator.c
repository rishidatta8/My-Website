#include<stdio.h>
main()
{
    float a,b,c;
    char d;
    printf("Enter 2 numbers");
    scanf("%f %f",&a,&b);
    printf("Enter an operator");
    scanf(" %c",&d);
    if(d=='+')
    {
        c=a+b;
        printf("%f",c);
    }
    else if(d=='-')
    {
        c=a-b;
        printf("%f",c);
    }
    else if(d=='*')
    {
        c=a*b;
        printf("%f",c);
    }
    else if(d=='/')
    {

        c=a/b;
        printf("%f",c);
    }
    else
    {
        printf("Enter a valid operator");
    }
}
