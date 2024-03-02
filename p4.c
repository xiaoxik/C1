#include <stdio.h> 
int main()
{
	int a=10;
	int b, c, d;
	printf("a++=%d\n a=%d",a++,a);
	printf("++a=%d\n a=%d", ++a,a);

	scanf_s("%d %d %d",&b,&c,&d);
	printf("%d %d %d", b, c, d);
	int vim = b + c + d;
	printf("ÊäÈë½á¹û%d",vim);

	return 0;
}