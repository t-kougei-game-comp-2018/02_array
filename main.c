#include <stdio.h>

int main(void)
{
	int n[100],i,c;

	for (i = 0; i < 100; i++) {
		n[i] = 0;
	}

	for(i=0;i<100;i++){
		printf("入力==");
		scanf_s("%d", &n[i]);
		if (n[i]<= 0) {
			c = (-n[i])-1;
			printf("出力==");
			printf("%d",n[c]);
			printf("\n");
		}
	}

	return 0;
}
