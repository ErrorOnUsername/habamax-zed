#include "stdio.h"

typedef struct {
	int res;
} SquareResult;

SquareResult square( int n )
{
	SquareResult res;
	res.res = n * n;
	return res;
}

int main()
{
	// Test comment
	SquareResult test_var = square( 10 );

	printf("Hello, habamax!");
}
