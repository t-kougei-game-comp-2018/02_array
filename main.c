#include <stdio.h>

int main(int argc, char *argv[]) 
{
    char str[5];
    int i=0,a[100],z;
    
    while(fgets(str, sizeof(str), stdin)){
        z=atoi(str);
        if(0<=z&&z<=100){
            a[i]=z;
            i++;
        }
        else if(-100<=z&&z<0)
            printf("%d\n",a[z-1]);
    }
    return 0;
}
