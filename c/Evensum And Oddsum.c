#include<stdio.h>
int main(){
	int i,n,evensum =0,oddsum=0;
	printf("Enter the value of n:");
	scanf("%d",&n);
	for(i=1;i<=n;i++){
		if(i%2==0 )
		 evensum+=i;
		else
		 oddsum+=i;
	}
		printf("Even sum of numbers :%d\n",evensum);
		printf("odd sum of numbers:%d\n",oddsum);
		return 0;
	}
