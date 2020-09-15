#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int string(char a[10000])
{
	int i = 0;
	while (a[i] != '\0')
	{
		if (!(a[i] >= 'A' && a[i] <= 'Z' || a[i] >= 'a' && a[i] <= 'z' || a[i] == ' '))
		{
			return 0;
		}
		i++;
	}
	return i;
}
int main()
{
	int i = 0, j = 0;
	char str1[10000],str2[10000];
	scanf("%[^\n] %[^\n]", str1, str2);
	if (string(str1) == 0 ||string(str2) == 0)
	{
		printf("error");
		return 0;
	}
	if (string(str1) == string(str2))
	{
		printf("same");
	}
	else
	{
		printf("not same");
	}
	return 0;
}