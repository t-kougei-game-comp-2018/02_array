#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) 
{
    char str[5];
    
    int array[100];
    int nun = 0;
    
    while(fgets(str, sizeof(str), stdin))
    {
     int n = quantity(str);
		if (0 <= n) 
        {
			array[nun++] = n;
		}
		else 
        {
			printf("%d\n", array[-n - 1]);
		}
    }

    return 0;
}
