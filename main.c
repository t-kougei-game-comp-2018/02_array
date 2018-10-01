#include <stdio.h>

int main(int argc, char *argv[]) 
{
    char str[256], stdout[256];
    FILE *stdin;      
   
    stdin = fopen("input1.txt","r");     
    
    while(fgets(str, sizeof(str), stdin) != NULL){        
    }
    
    for(var i = 0; i < sizeof(str), i++){
     
        if(str[i] >= 0)
            stdout[i] = str[i];
        
        else
            printf("%d\n", stdout[(-1)*str[i]]);
    }

    return 0;
}
