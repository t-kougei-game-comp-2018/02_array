#include <stdio.h>

int main(int argc, char *argv[]) 
{
    char str[5];
    int i = 0;
    
    while(1){
        fgets(str, sizeof(str[i]), stdin);
        printf("%s", str[i]);
        i++;
        
        if(i == 5) { break; }
    }

    return 0;
}
