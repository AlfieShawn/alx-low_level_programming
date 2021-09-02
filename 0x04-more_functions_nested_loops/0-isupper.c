#include<stdio.h>
#include "main.h"
/**
*main - Check for uppercase
*
*Return: Always 0 (Success)
*/
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
	return(1);
	}
	else
	{
	return(0);
	}
}
