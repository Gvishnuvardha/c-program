#include<stdio.h>
int gcd(int a,int b){
	while(b!=0){
		int temp =a;		;
		b= a%b;
		a=temp;
	}
	return a;
}
	int lcm(int a,int b){
		return (a*b)/gcd(a,b);
	}
	int main(){
		int num1,num2;
		printf("Enter two numbers:");
		scanf("%d %d",&num1 , &num2);
	printf("Gcd of %d and %d:%d\n",num1,num2,gcd(num1,num2));
	printf("Lcm of %d and %d:%d\n",num1,num2, lcm(num1,num2));
	return 0;
}
