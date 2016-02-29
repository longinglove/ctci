/*************************************************************************
	> File Name: 1_3.c
	> Author: longing
	> Mail: du_303412@163.com 
	> Created Time: 2016年01月29日 星期五 20时36分56秒
 ************************************************************************/

#include<stdio.h>
#include<string.h>

int changable1(char* str1, char* str2);
int changable2(char* str1, char* str2);
void sort(char* str);

int main()
{
	char ch1[100], ch2[100];
	memset(ch1, 0, 100);
	memset(ch2, 0, 100);
	fgets(ch1, 100, stdin);
	fgets(ch2, 100, stdin);
	ch1[strlen(ch1)-1] = 0;
	ch2[strlen(ch2)-1] = 0;
	if (changable2(ch1, ch2))
		printf("No\n");
	else
		printf("Yes\n");
	return 0;
}

int changable1(char* str1, char* str2)
{
	int a[256], b[256], i;
	memset(a, 0, sizeof(int)*256);
	memset(b, 0, sizeof(int)*256);
	while (*str1)
	{
		++a[*str1];
		++str1;
	}
	while (*str2)
	{
		++b[*str2];
		++str2;
	}
	for (i = 0; i < 256; i++)
	{
		if (a[i] != b[i])
			return 0;
	}
	return 1;
}

void sort(char* str)
{
	int i, j;
	char ch;
	for (i = 0; i < strlen(str)-1; i++)
	{
		for (j = 0; j < strlen(str)-1-i; j++)
		{
			if (str[j+1] < str[j])
			{
				ch = str[j];
				str[j] = str[j+1];
				str[j+1] = ch;
			}
		}
	}
}

int changable2(char* str1, char* str2)
{
	sort(str1);
	sort(str2);
	return strcmp(str1, str2);
}
