#include <stdio.h>
void main(){
	int num, sum = 0;
	int rem;

	int n = num;
	printf("Enter a number\n");
	scanf("%d", &num);

	while(num != 0){
		rem = num % 10;
		sum = sum + rem;
		num = num / 10;
	}
	 

	if(n % sum == 0){
		printf("%d is Harshad Number", n);
	}else{
		printf("%d is nota harshad number", n);
	}
}

