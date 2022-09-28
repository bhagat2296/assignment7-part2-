#include <stdio.h>
#include <stdlib.h>

/*int main()
{
    int n,t1=0,t2=1,sum=0;
    printf("enter nth term to find fibonacci\n");               //Question 1
    scanf("%d",&n);

    if(n==1||n==0)
    {
        printf("fibonacci number of nth term is %d",n);
    }
    else
    {
        sum=t1+t2;
        for(int i=2;i<=n;++i)
        {
            t1=t2;
            t2=sum;
            sum=t1+t2;
        }
         printf("%d\n",t2);
     }


}*/



/*int main()
{
    int n,t1=0,t2=1,sum=0;
    printf("enter the number of term: ");               //Question 2
    scanf("%d",&n);

    printf("Fibonacci Series is: ");

    if(n<=1)
    {
        for(int i=0;i<=n;i++)
        printf("%d",i);
    }
    else
    {
        printf("%d,%d,",t1,t2);
        sum=t1+t2;
        for(int i=2;i<=n;++i)
        {
            t1=t2;
            t2=sum;
            sum=t1+t2;
            printf("%d,",t2);
        }

     }

}*/


/*int main()
{
    int n,t1=0,t2=1,sum=0;
    printf("enter the number to check whether it is fibonacci or not: ");               //Question 3
    scanf("%d",&n);

    if(n==0||n==1)
    {
        printf("%d number is fibonacci",n);
    }
    else if(n>1)
    {
        sum=t1+t2;
        for(int i=2;i<=n;++i)
        {
            t1=t2;
            t2=sum;
            sum=t1+t2;
            if(t2==n){
            printf("%d number is fibonacci\n",n);break;}
            else
            printf("%d number is not fibonacci\n",n);

        }

     }
}*/

/*int main()                                                      //Question 4
{
    int a,b,c;
    printf("enter first positive number\n");
    scanf("%d",&a);


    printf("enter second positive number\n");
    scanf("%d",&b);

    if(a>b)
    {
        if(a%b==0)
            printf("hcf is %d",b);
        else
        {
            while(a%b!=0)
            {
                c=a%b;
                a=b;
                b=c;
            }
            printf("hcf is %d",c);
        }
    }

    else
    {
        if(b%a==0)
            printf("hcf is %d",a);
        else
        {
            while(b%a!=0)
            {
                c=b%a;
                b=a;
                a=c;
            }
            printf("hcf is %d",c);
        }
    }


}*/



/*int main()                                                      //Question 5
{
    int a,b,c;
    printf("enter first positive number\n");
    scanf("%d",&a);


    printf("enter second positive number\n");
    scanf("%d",&b);

    if(a>b)
    {
        if(a%b==0)
            printf("not coprime numbers");
        else
        {
            while(a%b!=0)
            {
                c=a%b;
                a=b;
                b=c;
            }
            if(c==1)
            printf("numbers are coprime");
            else
            printf("numbers are not coprime");

        }
    }

    else
    {
        if(b%a==0)
            printf("not coprime numbers");
        else
        {
            while(b%a!=0)
            {
                c=b%a;
                b=a;
                a=c;
            }
            if(c==1)
            printf("numbers are coprime");
            else
            printf("numbers are not coprime");
        }
    }


}*/


/*int main()                                      //Question 6
{
    int n,flag=0;
    printf("prime number upto 100\n");

    for(int i=2;i<100;i++)
    {
        for(int n=2;n<i/2;n++)
            if(i%n!=0)
            printf("%d,",i);

    }

}*/



/*int main()                                      //Question 9
{
    int n,temp,sum=0,r;

    printf("enter number\n");
    scanf("%d",&n);
    for(temp=n;n!=0;n=n/10)
    {
        r=n%10;
        sum=sum+(r*r*r);
    }


    if(sum==temp)
        printf("number is armstrong");
    else
        printf("number is not armstrong");
}*/


/*int main()                                    //Question 10
{
    int n,temp,sum=0,r;

    for(int i=1;i<=1000;i++)
    {
       for(temp=i;temp!=0;temp=temp/10)
        {
          r=temp%10;
          sum=sum+(r*r*r);
        }
        if(sum==i)
        {printf("%d,",i);}
        else
        sum=0;


    }
}*/





