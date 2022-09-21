#include <stdio.h>
void main(){
	int n;
	printf("Enter the number of rows\n");
	scanf("%d", &n);

/*	char ch1 = 65 + n - 1;
	char ch2 = 97 + n + 2;
*/
	for(int i=0; i<n; i++){
		char ch1 = 65 + n - 1;
		char ch2 = 97 + n + 2;
		for(int j=0; j<n;j++){
		       if(i % 2 != 0){
		         printf("%c", ch1);
			 ch1--;
		       }else{
			       printf("%c", ch2);
			       ch2++;
		       }
		}
		printf("\n");
	}
}


