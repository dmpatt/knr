// K & R Exercise 1-2
// Play with printing character escapes

#include <stdio.h>

int main()
{
printf("printing control characters:\n");
printf("0:\0\n");
printf("1:\1\n");
printf("2:\2\n");
printf("3:\3\n");
printf("4:\4\n");
printf("5:\5\n");
printf("6:\6\n");
printf("7:\7\n");
printf("a:\a\n");
printf("b:\b\n");
printf("e:\e\n");
printf("f:\f\n");
printf("n:\n\n");
printf("r:\r\n");
printf("t:\t\n");
printf("v:\v\n");
printf("u:\uFFD1\n"); //universal chars
printf("x:\xA\n"); //hex digits
printf("done!\n");
}

