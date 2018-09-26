#include <stdio.h>

int main(int argc, char *argv[]) 
{
    char str[5];
    
    while(fgets(str, sizeof(str), stdin)){
        if(str<0){printf("%s", str);}
        else if(0<=str){ str[]=str; }
    }

    return 0;
}
