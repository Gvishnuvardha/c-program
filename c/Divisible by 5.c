#include<stdio.h>
int main(){
	int a,i,n,count =0;
	printf("Enter the nalue of n:");
	scanf("%d",&n);
	for(i=1;i<=n;i++){
		if(i%5==0){
			count++;
		}
	}
	printf("number of integers divisible by 5:%d\n",count);
	return 0;
}