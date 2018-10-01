#include <stdio.h>

int main(int argc, char *argv[]) 
{
    int j = 0;
    int i;
    int in;
    char str[256], stdout[256];
    FILE *stdin;      
   
    stdin = fopen("input1.txt","r"); 
    if(stdin == NULL){
        printf("ファイル読み込みに失敗しました。\n");
        
        return -1;
    }
    
    while(fgets(str, sizeof(str), stdin) != NULL){   
        
        //printf("%s", str);
    }
    
    for(i = 0; i < sizeof(str); i++){
     
        //if(str[i] >= 0)
        //{
            stdout[i] = str[i]; 
            //j++;
       // }
        
    }
    printf("%s", stdout);

    fclose(stdin);
    
    return 0;
}
