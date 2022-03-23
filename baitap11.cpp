#include <stdio.h>

int main()
{
	int N,a,n=1;
	
	printf("Nhap so nguyen : ");
	scanf("%d",&N);  
	for(a=1;a<=N;a++)
		{  
     		 n=n*a;	  
  		} 
		  printf("Giai thua cua %d la %d",N,n); 
}
