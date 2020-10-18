#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>


void main()  
{
	char str[1000];
	scanf("%[^\n]" ,&str);
	int i = 0; 
	while (str[i] != '\0')
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
		{
			printf("%c", str[i]); 
		}
		i++; 
	}
	

}