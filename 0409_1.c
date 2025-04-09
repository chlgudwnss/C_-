#include <stdio.h>

int main(void)
{
	char ch = 9;
	int inum = 1052;
	double dnum = 3.1415;
	printf("변수ch의 크기 : %d \n", sizeof(ch));
	printf("변수inum의 크기 : %d \n", sizeof(inum));
	printf("변수dnum의 크기 : %d \n", sizeof(dnum));

	printf("변수char의 크기 : %d \n", sizeof(char));
	printf("변수int의 크기 : %d \n", sizeof(int));
	printf("변수long의 크기 : %d \n", sizeof(long));
	printf("변수long long의 크기 : %d \n", sizeof(long long));
	printf("변수float의 크기 : %d \n", sizeof(float));
	printf("변수double의 크기 : %d \n", sizeof(double));
	return 0;
}