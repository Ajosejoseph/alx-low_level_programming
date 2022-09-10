#include <stdio.h>

int main()
{
int num;
for (num = 0; num <= 9; num++) {
putchar(num + '0');
if (num == 9)
contunue;
putchar(',');
putchar(' ');
}
putchar('\n');
return 0;
}
