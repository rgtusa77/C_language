#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>

int digit_array[20000001] = { 0 };

int main()
{
	int n, card_digit;

	scanf("%d", &n);
	
	for (int i = 0; i < n; i++) {
		scanf(" %d", &card_digit);
		digit_array[card_digit + 10000000]++;
	}

	int m, choose_digit;

	scanf("%d", &m);

	for (int i = 0; i < m; i++) {
		scanf(" %d", &choose_digit);
		printf("%d ", digit_array[choose_digit + 10000000]);
	}

	return 0;

}