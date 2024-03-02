#include <stdio.h>//a,b互换 引入第三变量c
int main() {
	int a = 4;
	int b = 5;
	int c ;
	 c=a;
	 a=b;
	b = c;
	printf("%d %d",a, b);

	return 0;

}