#ifndef MATRIXMATH_H
#define MATRIXMATH_H

void MatrixMul(const double matrix[][3], const double vector[], double erg[]);

void MatrixMul2(const double* A, unsigned int mDIM, unsigned int nDIM, const double b[], double x[]);

#endif