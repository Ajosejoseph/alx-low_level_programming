#include <stdio.h>

int main(void)

{
int num;
int d1;
int d2;
for (num = 0; num <= 9; num++)
{
putchar(num + '0');
if (num == 9)
contunue;
putchar(',');
putchar(' ');
}
putchar( '\n' );
return 0;
}
