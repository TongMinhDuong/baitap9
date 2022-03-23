#include <stdio.h>
#include <stdlib.h>

int main()
{
	int N,c;
	
    	printf("nhap so nguyen duong la : ");
    	scanf("%d",&N);
 	    printf("Tap hop uoc cua %d la : \n",N);
 	    for(c=1;c<=N;c++)
  		   {
			if(N%c==0)
				printf(" %d ",c);
			}	
}

