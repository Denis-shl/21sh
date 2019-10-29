#include "../includes/memory_registration.h"

int main ()
{
	char **str;
	int index;
	int jindex = 0;

	index = 0;
	S_REG = 2;
	str = NULL;
	str = (char **) ft_malloc(sizeof(char *) * 10);
	for (int i = 0; i < 9; i++)
	{
		str[i] =(char *) ft_malloc(11);
	}
	str[2] = NULL;
	while (index < 2)
	{
		jindex = 0;
		while (jindex < 9)
		{
			str[index][jindex] = 'a' + 1;
			jindex++;
		}
		str[index][jindex] = '\0';
		index++;
	}
	
	index = 0;
	while (index < 2)
	{
		printf ("%s\n", str[index]);
		index++;
	}
	printf ("%p\n", str[3]);
	ft_free(str[3]);
	ft_del_memory();
	return (0);
}