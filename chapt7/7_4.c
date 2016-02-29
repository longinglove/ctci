/*************************************************************************
	> File Name: 7_4.c
	> Author: longing
	> Mail: du_303412@163.com 
	> Created Time: 2016年02月05日 星期五 12时42分07秒
 ************************************************************************/

#include<math.h>
#include<stdio.h>

int Nega(int num);
int Minus(int a, int b);
int Mult(int a, int b);
int Divide(int a, int b);

int main()
{
	int a, b;
	scanf("%d %d", &a, &b);
	printf("%d %d %d\n", Minus(a, b), Mult(a, b), Divide(a, b));
	return 0;
}

int Nega(int num)
{
	int temp = 0, d;
	d = num>0 ? -1 : 1;
	while (num != 0)
	{
		temp += d;
		num += d;
	}
	return temp;
}

int Minus(int a, int b)
{
	return a+Nega(b);
}

int Mult(int a, int b)
{
	int temp = 0, absa, absb, i;
	if (a == 0)
		return 0;
	absa = abs(a);
	absb = abs(b);
	for (i = absa; i > 0; i--)
		temp += abs(b);
	if ((a > 0 && b > 0) || (a < 0 && b < 0))
		return temp;
	else
		return Nega(temp);
}
int Divide(int a, int b)
{
	int temp = 0, absa, absb, i;
	if (b == 0)
	{
		printf("Error\n");
		return 0;
	}
	absa = abs(a);
	absb = abs(b);
	for (i = 0; i + absb <= absa; i += absb)
		temp++;
	if ((a > 0 && b > 0) || (a < 0 && b < 0))
		return temp;
	else
		return Nega(temp);
}

