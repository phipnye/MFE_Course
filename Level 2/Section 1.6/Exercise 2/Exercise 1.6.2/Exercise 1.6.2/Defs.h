#ifndef DEFS_H			/*Avoid including the header file Defs.h more than once*/
#define DEFS_H
#ifndef MAX2			/*If MAX2 is not defined, define it, prevents it from being defined more than once*/
#define MAX2(x,y) ((x) >= (y) ? (x) : (y))
#endif					/*If MAX2 is already defined, skips to this point*/
/*MAX2 tests for the greater value of two variables x and y*/
#ifndef MAX3			/*If MAX3 is not defined, define it, prevents it from being defined more than once*/
#define MAX3(x,y,z) MAX2(MAX2(x,y) , z)
/*MAX3 tests for the greatest value of three variables x, y, and z*/
/*Performed using the previous MAX2 in which MAX3 tests MAX2(x,y) versus z*/
#endif					/*If MAX3 is already defined, skips to this point*/
#endif					/*If DEFS_H already defined, skips to this point*/