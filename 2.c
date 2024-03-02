#include <stdio.h>
int main()    //两个时间相减求得所差分钟
{
	int hour1=0 , minute=0;
	int hour2=0, minute2=0;

	printf("输入被减项\n");

	scanf_s("%d %d", &hour1, &minute);

	printf("输入减项\n");

	scanf_s("%d %d",&hour2,&minute2);

	int amount1 = hour1 - hour2;
	int amount2 = minute - minute2;
	int amount3 = amount1*60 ;
	int q = amount3 + amount2 ;

	printf("时间所差是%d", q);

	return 0;
}