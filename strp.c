/* Author: Amber Chow */

#include "str.h"
#include <assert.h>

/*----------------------------------------------*/
size_t Str_getLength(const char *pcSrc)
{
   const char *pcEnd;
   assert(pcSrc != NULL);
   pcEnd = pcSrc;
   while (*pcEnd != '\0')
      pcEnd++;
   return (size_t)(pcEnd - pcSrc);
}

/*----------------------------------------------*/
char* Str_copy(char* dest, const char* pcSrc){

} 

/*----------------------------------------------*/
char* Str_concat(char* dest, const* char pcSrc){

}

/*----------------------------------------------*/

int Str_compare(const char* s1, const char* s2){

}

/*----------------------------------------------*/

char* Str_search(const char* haystack, const char* needle){

}