#include <stdio.h>

int main(int argc, char *argv[]) 
{
    int j = 0;
    char str[256], stdout[256];
    FILE *stdin;      
   
    stdin = fopen("input1.txt","r"); 
    if(stdin == NULL){
        printf("ファイル読み込みに失敗しました。\n");
        
        return -1;
    }
    
    while(fgets(str, sizeof(str), stdin) != NULL){        
    }
    
    for(int i = 0; i < sizeof(str); i++){
     
        if(str[i] >= 0)
        {
            stdout[j] = str[i]; 
        }
        else
        {
            printf("%d\n", stdout[(-1)*str[i]]);
            j--;
        }
        j++;
    }

    fclose(stdin);
    
    return 0;
}
