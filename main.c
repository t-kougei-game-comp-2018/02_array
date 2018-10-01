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
    
    //while(fgets(str, sizeof(str), stdin) != NULL){   
    
    while(fscanf(stdin, "%d", str[i]) != EOF){   
        i++;
        printf("%d", str[i]);   
    }
    
    //for(i = 0; i < 7; i++){
     
        //if(str[i] >= 0)
        //{
            //stdout[i] = str[i]; 
            //j++; 
       // printf("%d", str[i]);
       // }
        
  //  }
   

    fclose(stdin);
    
    return 0;
}
