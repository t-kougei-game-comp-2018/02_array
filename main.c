#include <stdio.h>

int main(int argc, char *argv[]) 
{
    char str[100];
    
    while(fgets(str, sizeof(str), stdin)){
        printf("%s", str);
    }

    return 0;
}
