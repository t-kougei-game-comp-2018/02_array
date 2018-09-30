#include <stdio.h>

int main(int argc, char *argv[]) 
{
    char str[5];
    int array[100];
    int num = 0;
    
    while(fgets(str, sizeof(str), stdin)){
        
     int input = atoi(str);  
          if( input >= 0)
          {
              array[num++] = index;
          }
        else
        {
            printf("%d\n",array[-index -1]);
        }
    }

    return 0;
}
