#include <stdio.h>
#include <stdlib.h>

void main()
{
	int a,b,c;
	printf("nhap so nguyen duong : a = ");
	scanf("%d",&a);
	printf("so a bao gom cac chu so :\n");
		for(;a!=0;a/=10)
	{
		b = a%10;
		printf("%d\n",b);
		c+=b;
		
	}
		
	printf("tong cac chu so cua a = %d",c);
}
	
	
