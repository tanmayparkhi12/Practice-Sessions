#include <stdio.h>
void main(){
	int n;
	printf("Enter the no of rows\n");
	scanf("%d", &n);

	char ch1 = 'a';
	char ch2 = 'A';

	for(int i=1;i<=n;i++){
		for(int j=1;j<=i;j++){

			if(j % 2 == 0){
				printf("%c", ch2);
			}else{
				printf("%c", ch1);
			}
		}
		printf("\n");
		ch1++;
		ch2++;
	}
}
 