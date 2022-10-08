/*--------------------------------------------------------------------*/
/* replace.c                                                          */
/* Author: Amber Chow                                                     */
/*--------------------------------------------------------------------*/


#ifndef STR
#define STR
#include <stddef.h>

/*----------------------------------------------*/

/*The Str_getLength() function calculates the length 
of the string in pcSrc[], excluding the terminating null byte. 
Return length as size_t*/

size_t Str_getLength(const char pcSrc[]);

/*----------------------------------------------*/

/*The Str_copy() function copies the string in pcSrc[],
including the terminating null byte, to the buffer dest[].
The strings may not overlap and the destination string dest[]
must be large enough to recieve the copy. Return dest[0]*/

char* Str_copy(char dest[], const char pcSrc[]);

/*----------------------------------------------*/

/*The Str_concat() function appends the pcSrc[] string
to the dest string, overwriting the terminating null byte. 
The strings may not overlap, and the dest string must have
enough space for the result. If dest is not large enough, 
program behavior is unpredictable. Return dest[0]*/

char* Str_concat(char dest[], const char pcSrc[]);

/*----------------------------------------------*/

/*The Str_compare() function compares the two strings
s1[] and s2[]. It returns an integer less than, equal to,
or greater than zero if s1[] is found, respectively, to be less 
than, to match, or be greater than s2[] */

int Str_compare(const char s1[], const char s2[]);

/*----------------------------------------------*/

/*The Str_search() function finds the first occurance of the
substring needle in the string haystack. The terminating
null bytes are not compared. Returns the beginning address
of the substring or null if the substring is not found. */

char* Str_search(const char haystack[], const char needle[]);

/*----------------------------------------------*/

#endif