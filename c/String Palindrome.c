#include<stdio.h>
#include<string.h>
int main(){
	int i,len;
	char str[100];
	printf("Enter the string:");
	scanf("%s",str);
	len =strlen(str);
	for(i=1;i<=len/2;i++){
		if(str[i]!=str[len-i-1]){
			printf("%s is not  a palindrome.\n",str);
			return 0;
		}
	}
	printf("%s is  a palindrome.\n",str);
	return 0;
	
}