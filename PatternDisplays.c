/*
 * PatternDisplays.c
 *
 *  Created on: Feb 14, 2019
 *      Author: hikar
 */

#include <stdio.h>

int main()
{
	int count = 1;
	while(count<11)
	{
		for(int i = 0; i<count; i++)
		{
			printf("*");
		}
		printf("\n");
		count++;
	}
	while(count>0)
	{
		for(int i = 0; i<count; i++)
		{
			printf("*");
		}
		printf("\n");
		count--;
	}

}
