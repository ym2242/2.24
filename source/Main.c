#include<stdio.h>

int main(void)
{
	int num1, mod;
	
	printf("�п�J�@�Ӿ��,�ڱN�i�D�A�O�_�Ʃΰ���\n");
	scanf_s("%d", &num1);
	mod = num1 % 2;
	if (mod % 2 == 0)
	{
		printf("����\n");
	}
	if (mod % 2 != 0)
	{
		printf("�_��\n");
	}
	system("pause");
	return 0;
}