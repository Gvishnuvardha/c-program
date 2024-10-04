#include<stdio.h>
int main(){
	int num,digit =0,sum=0;
	printf("Enter the number:");
	scanf("%d",&num);
	while(num!=0){
		digit = (num%10)+1;
		if(digit == 10){
			digit =0;
		}
		sum+=digit;
		num/=10;
	}
	printf("sum of incrementy digits: %d\n",sum);
	return 0;
}