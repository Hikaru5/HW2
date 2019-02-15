/*
 * StockTransaction.c
 *
 *  Created on: Feb 14, 2019
 *      Author: hikar
 */

#include <stdio.h>

int main()
{
	double shares = 1000, initial = 45.5, final = 56.9;
	printf("Initial price of stock: %.2f\n", initial);
	printf("Commission for purchase: %.2f\n", shares*initial*.02);
	printf("Price at which stock was sold: %.2f\n", shares*final);
	printf("Commission for sale: %.2f\n", shares*final*.02);
	printf("Profit: %.2f\n", (final-initial)*shares-(final+initial)*shares*.02);

}
