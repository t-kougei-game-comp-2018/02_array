#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) 
{
    char str[5];
    int i=0,number[100],x;
    
    while(fgets(str, sizeof(str), stdin)){
       int x=atoi(str);//整数変換
        if(0<=x && x<=100 )
        {
            number[i]=x;
            i++; //0番目を考慮
        }
        else if (0>x && x>=-100)
        {
           printf("%d\n", number[-x-1]); 
        }
        else{continue;}
    }

    return 0;
}
