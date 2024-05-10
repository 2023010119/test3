#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
    int m,n,p,i,j,y,x=0;
    scanf("%d,%d",&m,&n);
    if(m>0&&m<10000&&n>0&&n<10000)
	{
    	if(m>n)
		{
    		p=m;
    		m=n;
    		n=p;
		}
		for(i=m+1;i<n;i++)
		{
			y=0;
				for(j=1;j<i;j++)
				{
					if(i%j==0)
					y+=j;
				}
				if(i==y){
					if(x==0){
						printf("%d",y);x++;}
						else
						printf(",%d",y);
				}
			}
		}else
		 printf("error");
	return 0;
}
