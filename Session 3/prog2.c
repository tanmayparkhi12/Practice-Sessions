#include <stdio.h>
void main(){
	int n;
	printf("Enter row size\n");
	scanf("%d", &n);

        int x = 2;
	for(int i=1;i<=n;i++){
		for(int j=1;j<=i;j++){
			printf("%d", x);
			x++;
			
		}
		printf("\n");
		x = 2 + i;
		
	}
}

