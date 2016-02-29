/*************************************************************************
	> File Name: 5_2.c
	> Author: longing
	> Mail: du_303412@163.com 
	> Created Time: 2016年02月04日 星期四 16时04分05秒
 ************************************************************************/

#include<stdio.h>
#include<string.h>

char* Handle(double input, char a[]);

int main()
{
	double input;
	char result[100];
	char* str;
	memset(result, 0, 100);
	scanf("%lf", &input);
	if (input > 1 || input < 0)
		printf("ERROR\n");
	else
	{
		str = Handle(input, result);
		if (!str)
			printf("ERROR\n");
		else
			printf("0.%s\n", str);
	}
	return 0;
}


char* Handle(double input, char a[])
{
	int index = 0;
	while (input != 0)
	{
		input *= 2;
		if (index >= 32)
			return NULL;
		if (input >= 1)
		{
			a[index] = '1';
			input -= 1;
		}
		else 
			a[index] = '0';
		index++;
	}
	return a;
}
