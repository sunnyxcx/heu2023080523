#include<stdio.h>
int main()
{
	int number;
	int digit=0;
	int ret=0;
	printf("请输入需要逆序的数字");
	scanf("%d",&number);
	while(number!=0){
		digit=number%10;
		ret=ret*10+digit;
		number=number/10;
		printf("number=%d,digit=%d,ret=%d\n",number,digit,ret); 
	}
	printf("ret=%d",ret);
	return 0;
}
