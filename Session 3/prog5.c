#include <stdio.h>
void main(){
	int n;
	printf("Enter the number of rows\n");
	scanf("%d", &n);

	int x = 1;
	for(int i=1;i<=n;i++){
		for(int j=1;j<=n;j++){
			printf("%d ", x);
			x += 3;
		}
		printf("\n");
		x = x - 6;
	}
}


