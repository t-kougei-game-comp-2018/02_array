#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{

	static const int TOTAL_LINE = 100;

	char str[5];

	int array[100];
	int showLine[100];

	int *ap = array;
	int *sp = showLine;

	while (fgets(str, sizeof(str), stdin)) {

		int val = atoi(str);

		if (val >= 0)
		{
			*ap++ = val;
		}
		else
		{
			*sp++ = -1 * val;
		}
	}
	*sp = -1;

	sp = showLine;
	while (*sp != -1)
	{
		printf("%d\n", array[*sp++ - 1]);
	}

	return 0;
}