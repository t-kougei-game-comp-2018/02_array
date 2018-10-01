#include <stdio.h>

int main(int argc, char *argv[]) 
{
    int j = 0;
    char in;
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
            in = str[i];
            in *= (-1);
            printf("%d\n", stdout[in]);
            j--;
        }
        j++;
    }

    fclose(stdin);
    
    return 0;
}
