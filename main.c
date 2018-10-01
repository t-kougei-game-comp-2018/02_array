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
    
    while(fscanf(str, sizeof(str), stdin) != EOF){   
        
        printf("%s", str);
    }
    
    for(int i = 0; i < sizeof(str); i++){
     
        if(str[i] >= 0)
        {
            stdout[j] = str[i]; 
            j++;
        }
        else
        {
            in = str[i];
            in *= (-1);
            printf("%d\n", stdout[in]);
        }
    }

    fclose(stdin);
    
    return 0;
}
