#include <cs50.h>
#include <stdlib.h>
#include <stdio.h>

// programm check credit card
// knyazkof.alexey

int main(void)
{

long a, b, c, i, k;

k = 0;
a = 0;

// check pozitive number

while (a <= 0)
{
	a = get_long("Number: ");
}

b = a;
c = a;

// Luhn's Algorithm

while (b > 1)
{
	i = (b % 100) / 10 * 2;
	k = k + (i / 10 + i % 10);
	b = b / 100;
}

while (a > 1)
{
	i = (a % 10);
	a = a / 100;
	k = k + i;
}
k = k % 10;

// check type credit card

if (k == 0)
{
while (c >= 100)
{
	c = c / 10;
}
if (c == 34 || c == 37)
{
	printf("AMEX\n");
}
else if (c == 51 || c == 52 || c == 53 || c == 54 || c == 55)
{
	printf("MASTERCARD\n");
}
else if (c == 40 || c == 41 || c == 42 || c == 43 || c == 44 || \
c == 45 || k == 46 || k == 47 || k == 48 || k == 49)
{
	printf("VISA\n");
}
else
{
	printf("INVALID\n");
}
}
else
{
	printf("INVALID\n");
}
}
