/*************************************************************************
	> File Name: 1_2.c
	> Author: longing
	> Mail: du_303412@163.com 
	> Created Time: 2016年01月29日 星期五 20时08分29秒
 ************************************************************************/

#include<stdio.h>
#include<string.h>

void reverse(char* str);
void reverse1(char* str);

int main()
{
	char s[100];
	memset(s, 0, 100);
	fgets(s, 100, stdin);
	s[strlen(s)-1] = 0;
	reverse(s);
	printf("%s\n", s);
	reverse1(s);
	printf("%s\n", s);
	return 0;
}

//简单实现
void reverse(char* str)
{
	char ch;
	int i, j;
	for (i = 0, j = strlen(str)-1; j > i; i++, j--)
	{
		ch = str[i];
		str[i] = str[j];
		str[j] = ch;
	}
}

//指针实现
void reverse1(char* str)
{
	char* end = str;
	char temp;
	if (str)
	{
		while (*end)
		{
			++end;
		}
	}

	--end;

	while (str < end)
	{
		temp = *str;
		*str++ = *end;
		*end-- = temp;
	}
}

