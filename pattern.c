#include <stdio.h>

int main()
{
	int n,multiple,mod,x,y,a;
	printf("enter number of turns \n");
	scanf("%d",&n);

	mod = n%4;
	multiple=n/4;
	a=multiple*2;
    
	if (mod==1){
	    x=0-a;
        y=1+a ;         
    }
    else if (mod==2){
    	x=2+a ;
    	y=1+a;
    }
    else if (mod==3){
    	x=2 + a;
    	y=-2 - a;
    }
    else if(mod==0){
    	x= -2 -a;
    	y= -2 - a;
    }
    printf("%d ,%d",x,y);
    return 0;
}