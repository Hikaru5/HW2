/*
 * RestaurantBill.c
 *
 *  Created on: Feb 13, 2019
 *      Author: hikar
 */

#include <stdio.h>

int main(int arg, char **argv)
{
	double bill = 88.67, tax,tip;
	tax = 88.67*.0675;
	tip = (bill+tax)*.2;
	printf("Meal cost: %.2f\n", bill);
	printf("Tax amount: %.2f\n", tax);
	printf("Tip amount: %.2f\n", tip);
	printf("Total bill: %.2f\n", bill+tax+tip);
	return 0;
}
