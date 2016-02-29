/*************************************************************************
	> File Name: 1_8.c
	> Author: longing
	> Mail: du_303412@163.com 
	> Created Time: 2016年01月30日 星期六 12时23分06秒
 ************************************************************************/

#include<stdio.h>
#include<string.h>

int IsSubstring(char* str1, char* str2);
int IsRotation(char* str1, char* str2);

int main()
{
	char str1[100], str2[100];
	memset(str1, 0, 100);
	memset(str2, 0, 100);
	fgets(str1, 100, stdin);
	fgets(str2, 100, stdin);
	str1[strlen(str1)-1] = 0;
	str2[strlen(str2)-1] = 0;
	if (IsRotation(str1, str2))
		printf("True\n");
	else
		printf("False\n");
	return 0;
}

int IsRotation(char* str1, char* str2)
{
	char ch[200];
	memset(ch, 0, 200);
	strcat(ch, str1);
	strcat(ch, str1);
	if (strlen(str1) == strlen(str2) && strlen(str1)>0)
	{
		return IsSubstring(ch, str2);
	}
	return 0;
}

int IsSubstring(char* str1, char* str2)
{
	int i, j, k;
	for (i = 0; i < strlen(str1); i++)
	{
		if (str1[i] == str2[0])
		{
			k = i;
			for (j = 0; str1[k] == str2[j] && j < strlen(str2); j++, k++);
			if (j == strlen(str2))
				return 1;
		}
	}
	return 0;
}
