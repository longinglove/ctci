/*************************************************************************
	> File Name: 1_4.c
	> Author: longing
	> Mail: du_303412@163.com 
	> Created Time: 2016年01月29日 星期五 21时15分42秒
 ************************************************************************/

#include<stdio.h>
#include<string.h>

/*
int main()
{
	int i;
	char str[100];
	memset(str, 0, 100);
	fgets(str, 100, stdin);
	str[strlen(str)-1] = 0;
	for (i = 0; i < strlen(str); i++)
	{
		if (str[i] == ' ')
			printf("%%20");
		else
			printf("%c", str[i]);
	}
	printf("\n");
	return 0;
}
*/

int main()
{
	int spaceCount = 0, newLength, i;
	char str[100];
	memset(str, 0, 100);
	fgets(str, 100, stdin);
	str[strlen(str)-1] = 0;
	for (i = 0; i < strlen(str); i++)
	{
		if (str[i] == ' ')
			spaceCount++;
	}
	newLength = strlen(str)+spaceCount*2;
	str[newLength] = 0;
	for (i = strlen(str)-1; i >= 0; i--)
	{
		if (str[i] == ' ')
		{
			str[newLength-1] = '0';
			str[newLength-2] = '2';
			str[newLength-3] = '%';
			newLength -= 3;
		}
		else
		{
			str[newLength-1] = str[i];
			newLength = newLength-1;
		}
	}
	printf("%s\n", str);
	return 0;
}
