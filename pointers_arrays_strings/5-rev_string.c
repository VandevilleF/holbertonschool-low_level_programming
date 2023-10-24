#include "main.h"
#include <string.h>
/**
 * rev_string - reverse string
 * @s: variable
 * Return: string in reverse
 */

void rev_string(char *s)
{
	int i, j;

	j = strlen(s) - 1;/*length string*/
	for (i = 0; i < j; i++)/* incremente i*/
	{

		int temp = s[i];/*swap i et j*/

		s[i] = s[j];
		s[j] = temp;
		j--;/* decremente j*/
	}
}
