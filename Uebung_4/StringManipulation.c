#include "StringManipulation.h"


void makeCap(char text[])
{
	int i = 0;

	while (text[i])
	{
		if (text[i] >= 'a' && text[i] <= 'z')
		{
			text[i] = text[i] - ('a' - 'A');
		}
		i++;
	}

	printf("%s\n", text);
}