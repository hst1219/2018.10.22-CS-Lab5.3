#include<stdio.h>
#include<stdlib.h>
#pragma warning(disable:4996)
int prime(int);  //�禡�]�w
int main()
{
	int num;
	int xx=2,yy=0;    //��Ʊq2�}�l ���ǥ�0�}�l	
	printf("�п�J�Ʀr:");
	scanf("%d", &num);   

	while (yy < num)   //�W�L�ҿ�J���Ʀr���X
	{
		if(prime(xx++))  //���_�Ǧ^���,����Ū��,����̫�@��
		yy++;         //�C�Ǧ^�@�ӽ��,����+1,����ҿ�J���Ʀr
	}
	printf("��%d�ӽ��:%d\n", num, xx-1);  //x++�|�h�[�@(�|���Ʀh�@)

    system("pause");
	return 0;
}
int prime(int a)
{	
	int i;

	for (i = 2; i <= a / 2; i++) //���ս��
		if (a%i == 0)
			return 0;   //�D���(false)
	return 1;          //�Ǧ^���(ture)
}
