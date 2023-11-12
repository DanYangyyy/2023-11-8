#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>
//void left_move(char *ch,int i)
//{
//	int len = strlen(ch);
//	int k = 0;
//	for (k = 0; k < i; k++)
//	{
//		char tmp = ch[0];
//		int j = 0;
//		for (j = 0; j < len - 1; j++)
//		{
//			ch[j] = ch[j + 1];
//		}
//		ch[len - 1] = tmp;
//	}
//}
void reverse(char* left, char* right)//ÄæÖÃº¯Êý
{
	while(left < right)
	{
		char tmp = *left;
		*left = *right;
		*right = tmp;
		left++;
		right--;
	}
}
void left_move(char* ch, int k)
{
	int len = strlen(ch);
	len %= k;
	reverse(ch, ch + k - 1);
	reverse(ch + k, ch + len - 1);
	reverse(ch, ch + len - 1);
}
int main()
{
	//×óÐý×ª×Ö·û´®
	int k = 0;
	scanf("%d", &k);
	char ch[] = "abcdef";
	left_move(ch,k);
	printf("%s\n", ch);
	return 0;

}