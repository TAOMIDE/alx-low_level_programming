#ifndef ABS_X
#define ABS_X

/**
 * File: 3-function_like_macro.h
 * Desc: Header file that defines a function-like macro ABS(x)
 * that computes the absolute value of a number x.
 * @x: Variable declaration
 */

#define ABS(X) ((X < 0) ? (X * -1) : (X))
#endif
