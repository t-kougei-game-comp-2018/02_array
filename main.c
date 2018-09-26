#include <stdio.h>

int main(int argc, char *argv[]) 
{
    char str[5];
    int i = 0;
    while(fgets(str, sizeof(str), stdin)){
        if(0<=str){printf("%s", str);}
        
        
    }

    return 0;
}
