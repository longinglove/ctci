/*************************************************************************
	> File Name: 1.c
	> Author: longing
	> Mail: du_303412@163.com 
	> Created Time: 2016年01月29日 星期五 19时43分22秒
 ************************************************************************/

#include<stdio.h>
#include<string.h>
/*
int main()
{
	int a[256], i, flag=0;
	char s[100];
	memset(s, 0, 100);
	memset(a, 0, sizeof(int)*256);
	gets(s);
	for (i = 0; i < strlen(s); i++)
	{
		if (a[s[i]] == 0)
			a[s[i]]++;
		else
		{
			flag = 1;
			break;
		}
	}
	if (flag)
		printf("False\n");
	else
		printf("True\n");
	return 0;
}
*/

int main()
{
	int i, j, flag = 0;
	char s[100];
	memset(s, 0, 100);
	gets(s);
	for (i = 0; i < strlen(s)-1; i++)
	{
		for (j = i+1; j < strlen(s); j++)
		{
			if (s[i] == s[j])
			{
				printf("False\n");
				return 0;
			}
		}
	}
	if (!flag)
		printf("True\n");
	return 0;
}
