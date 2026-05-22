#include "MatrixMath.h"

void MatrixMul(const double matrix[][3], const double vector[], double erg[])
{
	int n = 0;
	int m = 0;

	for (; n < 3; n++)
	{
		
		for (m = 0; m < 3; m++)
		{
			erg[n] += matrix[n][m] * vector[m];
		}
	}
}

void MatrixMul2(const double *A, unsigned int mDIM,unsigned int nDIM, const double b[], double x[])
{
	unsigned int n;
	unsigned int m;

	for (n = 0; n < nDIM; n++)
	{
		for (m = 0; m < mDIM; m++)
		{
			x[n] += *(A+(mDIM*n+m)) * b[m];
		}
	}
}