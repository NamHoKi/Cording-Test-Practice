#include "stdafx.h"
#include<stdio.h>

int main()
{
	int count = 0;

	for (int x = 0; x <= 100; x++) {
		for (int y = 0; y<=100; y++) {
			if (((x*x + y * y) <= 10000)&& (3 * y <= 2 * x) && (3 * y >= x))
				count++;
		}
	}
	printf("%d\n", count);

    return 0;
}

