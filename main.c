#include <stdio.h>

int main(int argc, char *argv[]) 

{
    char str[5];
    int soma[100];
    int index = 0;

    while(fgets(str, sizeof(str), stdin))
    {
        int n = atoi(str);
        if(0 <= n)
        {
            soma[index++] = n;
        }else
        {
            printf("%d\n",soma[-n-1]);
        }
    }
    return 0;
}
