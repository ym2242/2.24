#include<stdio.h>

int main(void)
{
	int num1, mod;
	
	printf("叫块俱计,и盢禗琌计┪案计\n");
	scanf_s("%d", &num1);
	mod = num1 % 2;
	if (mod % 2 == 0)
	{
		printf("案计\n");
	}
	if (mod % 2 != 0)
	{
		printf("计\n");
	}
	system("pause");
	return 0;
}