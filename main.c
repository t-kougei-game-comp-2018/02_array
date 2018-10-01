#include <stdio.h>

int main(int argc, char *argv[]) 
{
    int j = 0;
    int i = 0;
    int in;
    int str[256], stdout[256];
    FILE *stdin;      
   
    stdin = fopen("input1.txt","r"); 
    if(stdin == NULL){
        printf("ファイル読み込みに失敗しました。\n");
        
        return -1;
    }
    
    while(fgets(str, sizeof(str), stdin) != NULL){      
    }
    
    
    printf("%s", str);
    printf("%c", str[0]);
    printf("%c", str[1]);

    fclose(stdin);
    
    return 0;
}
