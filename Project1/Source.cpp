#include<stdio.h>
#include<stdlib.h>
#pragma warning(disable:4996)
int prime(int);  //函式設定
int main()
{
	int num;
	int xx=2,yy=0;    //質數從2開始 順序由0開始	
	printf("請輸入數字:");
	scanf("%d", &num);   

	while (yy < num)   //超過所輸入之數字跳出
	{
		if(prime(xx++))  //不斷傳回質數,但不讀取,直到最後一個
		yy++;         //每傳回一個質數,次數+1,直到所輸入之數字
	}
	printf("第%d個質數:%d\n", num, xx-1);  //x++會多加一(會比質數多一)

    system("pause");
	return 0;
}
int prime(int a)
{	
	int i;

	for (i = 2; i <= a / 2; i++) //測試質數
		if (a%i == 0)
			return 0;   //非質數(false)
	return 1;          //傳回質數(ture)
}
