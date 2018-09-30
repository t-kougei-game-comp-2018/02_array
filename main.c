#include <stdio.h>

int main(int argc, char *argv[]) 
{
    char str[5];
    int array[100],input,i = 0;
    
    while(fgets(str, sizeof(str), stdin)){
        input = atoi(str);
            
        if(input >= 0)
        {
            array[i++] = input;
        }
        else
        {
            printf("%s", str[-input-1]);
        }
        
    }

    return 0;
}
