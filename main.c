#include <stdio.h>

int main(int argc, char *argv[]) 
{
    char str[5];
    int array[100];
    int num = 0;
    
    while(fgets(str, sizeof(str), stdin)){
        
     int input = atoi(str);  
          if( n >= 0)
          {
              array[num++] = input;
          }
        else
        {
            printf("%d\n",array[-input -1]);
        }
    }

    return 0;
}
