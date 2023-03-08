#include <stdio.h>
#include "func.h"

int main (void)
{
int a, b ,result;
getnumbers(&a, &b);
result = sum(a, b);

printf("The result is: %d", result);

return 0;
}

