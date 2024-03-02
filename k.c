#include<stdio.h>
int A(int x, int y,int z) //自定义一个函数
{
	int h = x + y + z;
	
		return h;
}

int main()
{
	int n1, n2, n3;
	printf("...:\n");
	scanf_s("%d %d %d", &n1,&n2,&n3);

	int sum = A(n1,n2,n3);
	printf("%d", sum);
	return 0;


}