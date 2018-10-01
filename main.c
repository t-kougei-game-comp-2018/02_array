#include <stdio.h>

int main(int argc, char *argv[]) 
{
    int j = 0;
    int i = 0;
    int in;
    char str[5], stdout[101][5];
    FILE *stdin;      
   
    stdin = fopen("input1.txt","r"); 
    if(stdin == NULL){
        printf("ファイル読み込みに失敗しました。\n");
        
        return -1;
    }
    
    while(fgets(str, sizeof(str), stdin) != NULL){    
     
        if(str >= 0)
        {
            stdout[i] = str; 
            i++; 
        }     
        else
             printf("%d", stdout[(-1)*str[i]]);
    }
   

    fclose(stdin);
    
    return 0;
}
