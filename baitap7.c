#include <stdio.h>
#include <stdlib.h>

int main()
{
	int a1=0,a2=1,a,b,c;
	
	printf("nhap so nguyen duong : ");
	scanf("%d", &c);
	printf("day fibonaci cua %d la :\n", c);
	printf("\n %d %d ", a1,a2);
	
	while(c!=a)
	{
		a=a1+a2;
		a1=a2;
		a2=a;
		if(a<c)
		{
			printf("%d ",a);
		}
		
	}
	
}	


