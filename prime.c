#include<stdio.h>

int main()
{
    int prime[50]={0};
    prime[0]=2;
    prime[1]=3;
    int k=0;
    int index=2;

    for (int i=5;i<100;i=i+2)
    {    

         for (int j=1;i>j;j=j+1) 
         {
         	if (i % prime[j]==0)
         	{
                k=2;
         	}
         	else 
         	{
         		prime[index]=i;
         		index=index+1;
         	}
         }
            
    }
    
    printf("rahul ki mkb");
    for(int a=0;a<50;a++)
    {
    	printf("%d  ",&prime[a]);
    	a=a+1;
    }
    return 0;
}   