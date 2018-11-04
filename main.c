#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
	int i = 0;
	int input;
	int stdoutput[101];
	char str[5];

	while (fgets(str, sizeof(str), stdin) != NULL)
	{
		input = atoi(str);

		if (input >= 0)
		{	
			stdoutput[i] = input;
			i++;
		}
		else 
		{
			printf("%d\n", stdoutput[-1*input-1]);
		}
	}

	return 0;
}
