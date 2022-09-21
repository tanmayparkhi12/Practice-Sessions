#include <stdio.h>
void main(){
	int n;
	printf("Enter no of rows\n");
	scanf("%d", &n);

	int num = 2;
	for(int i=1;i<=num;i++){
		for(int j=1;j<=num;){
 
			int count = 0;

			for(int k = 1; k<=num; k++){
				if( num % k == 0){
					count++;
				}
			}

			if(count == 2){
				printf("%d", num);
				j++;
			}
			num++;

		}
		printf("\n");
		
	}
}

