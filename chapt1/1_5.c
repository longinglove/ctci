/*************************************************************************
  > File Name: 1_5.c
  > Author: longing
  > Mail: du_303412@163.com 
  > Created Time: 2016年01月29日 星期五 23时22分07秒
 ************************************************************************/

#include<stdio.h>
#include<string.h>
#include<stdlib.h>

int main()
{
	int num, i=0, j, k=0;
	char str[100], out[100], temp[10];
	memset(str, 0, 100);
	memset(out, 0, 100);
	memset(temp, 0, 10);
	fgets(str, 100, stdin);
	str[strlen(str)-1] = 0;
	while (i < strlen(str))
	{
		num = 1;
		out[k++] = str[i];
		for (j = i+1; j < strlen(str); j++)
		{
			if (str[j] == str[i])
				++num;
			else
				break;
		}
		out[k++]=num+'0';
		i = j;
	}
	if (strlen(str) == strlen(out))
		printf("%s", str);
	else
		printf("%s", out);
	printf("\n");
	return 0;
}
