#include <stdio.h>
/**
 * main - entry point.
 *
 * Description: find first 98 Fibonacci nums,
 * with just long data type, long long not allowed.
 *
 * Return: Always 0 (Success).
*/
int main(void)
{
	unsigned long frst = 1, sec = 2, thrd, i, a = 10000, b = 1000000,
		      frst1, frst2, sec1, sec2, r31, r32, r21, r22, r11, r12;

	printf("%lu, %lu, ", frst, sec);
	for (i = 0; i < 32; i++)
	{
		if (i <= 29)
		{
			thrd = frst + sec, frst = sec + thrd, sec = frst + thrd;
			printf("%lu, %lu, %lu", thrd, frst, sec);
		}
		else if (i == 30)
		{
			frst1 = frst / 100, frst2 = frst % 1000000;
			sec1 = sec / 100, sec2 = sec % 1000000;
			r31 = frst1 + sec1, r32 = frst2 + sec2;
			r11 = sec1 + r31, r12 = sec2 + r32;
			r21 = r11 + r31, r22 = r12 + r32;
			printf("%lu%lu, %lu%lu, %lu%lu", (r31 / a), (r32 % b),
					(r11 / (a / 10)), (r12 % b), (r21 / a), (r22 % b));
		}
		else
		{
			r31 = r11 + r21, r32 = r12 + r22;
			r11 = r21 + r31, r12 = r22 + r32;
			r21 = r11 + r31, r22 = r12 + r32;
			printf("%lu%lu, %lu%lu, %lu%lu", (r31 / a), (r32 % b), (r11 / a),
					(r12 % b), (r21 / a), (r22 % b));
		}

		if (i != 31)
		{
			printf(", ");
		}
	}
	printf("\n");
	return (0);
}
