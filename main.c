#include <stdio.h>
#include <string.h>

void str_input(char *str)
{
	gets(str);
	return;
}

int get_index_max(char *str)
{
	int count = 0;
	int count_max = 0;
	int i_max = 0;
	int i_now;
	for (int i = 0; i < strlen(str); i++)
	{
		if (str[i] != ' ')
		{
			if (str[i] != ' ' && count == 0)
				i_now = i;
			count++;
		}
		else
		{
			if (count > count_max)
			{
				i_max = i_now;
				count_max = count;
			}
			count = 0;
		}
	}
	return i_max;
}


int main()
{
	char str[100];
	str_input(str);
	int i_max;
	int i1, i2;
	i_max = get_index_max(str);
	printf("%d", i_max);
	return 0;
}
	
	
	