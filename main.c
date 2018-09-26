#include <stdio.h>

int main(int argc, char *argv[]) 
{
    char str[5];
    int i = 0;
    int array[100];
    
    while(fgets(str, sizeof(str), stdin)){
        
        int n = atoi(str);
        if(0<=n){ array[i++]=n; 
                } else { printf("%d\n",array[-i]); 
                                }
    }

    return 0;
}
