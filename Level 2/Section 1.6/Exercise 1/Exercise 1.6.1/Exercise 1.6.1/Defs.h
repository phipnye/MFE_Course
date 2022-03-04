#ifndef DEFS_H			/*Avoid including the header file Defs.h more than once*/
#define DEFS_H	
#ifndef PRINT1			/*If PRINT 1 is not defined, define it. Prevents it from being defined more than once*/
#define PRINT1(expr)	printf(#expr " = %d\n", expr)
/*PRINT1 prints the value of an expression, in this case a, which is initialized in main in source*/
#endif					/*If PRINT1 already defined, skips to this point*/
#ifndef PRINT2			/*If PRINT 2 is not defined, define it. Prevents it from being defined more than once*/
#define PRINT2(expr_a, expr_b)	printf(#expr_a " = %d and " #expr_b " = %d\n", expr_a, expr_b)
/*PRINT2 prints the values of two expressions, in this case a and b, which are initialized in main in source*/
#endif					/*If PRINT2 already defined, skips to this point*/
#endif					/*If DEFS_H already defined, skips to this point*/