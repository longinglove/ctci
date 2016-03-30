/*************************************************************************
	> File Name: 17_5.c
	> Author: duqinglong
	> Mail: du_303412@163.com 
	> Created Time: 2016年03月30日 星期三 11时45分12秒
 ************************************************************************/

#include<stdio.h>
#include<string.h>

int rl[4];
int gs[4];

void freq(char *, int *);

int main()
{
	char guess[5], real[5];
	int bingo = 0, i, pbingo = 0;
	memset(guess, 4, sizeof(guess));
	memset(real, 4, sizeof(real));
	scanf("%s", real);
	scanf("%s", guess);
	for (i = 0; i < 4; i++)
		if (guess[i] == real[i])
			bingo++;
	freq(real, rl);
	freq(guess, gs);
	for (i = 0; i < 4; i++)
		pbingo += (rl[i] >= gs[i])?gs[i]:rl[i];
	printf("%d %d\n", bingo, pbingo-bingo);
	return 0;
}

void freq(char *a, int *b)
{
	int i;
	for (i = 0; i < 4; i++)
	{
		switch (a[i])
		{
			case 'R':
				b[0]++;
				break;
			case 'Y':
				b[1]++;
				break;
			case 'G':
				b[2]++;
				break;
			case 'B':
				b[3]++;
				break;
			default:
				break;
		}
	}
}
