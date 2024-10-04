#include<stdio.h>
int main(){
	int i,num;
	int factorial=1;
	printf("Enter the number:");
	scanf("%d",&num);
	for(i=1;i<=num;i++){
	
   factorial*=i;
	printf("factorial of a number :%d\n",factorial);
}
return 0;
}