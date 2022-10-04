/* Author: Amber Chow */

#include "str.h"
#include <assert.h>

/*----------------------------------------------*/
size_t Str_getLength(const char pcSrc[]){
   size_t uLength = 0;
   assert(pcSrc != NULL);
   while (pcSrc[uLength] != '\0')
      uLength++;
   return uLength;
}

/*----------------------------------------------*/
char* Str_copy(char dest[], const char pcSrc[]){
   assert(pcSrc != NULL);
   for (size_t i = 0; pcSrc[i] != '\0', i++){
      dest[i] = pcSrc[i];
   }
   return dest[0];
} 

/*----------------------------------------------*/
char* Str_concat(char dest[], const char pcSrc[]){
    size_t locDest = 0;
    size_t locAdd = 0;

    assert(pcSrc != NULL);
    assert(dest != NULL);

    while (dest[i] != '\0')    {
    locDest++;
    }
    while (pcSrc[locAdd] != '\0')    {
    dest[locDest] = pcSrc[locAdd];
    locDest++;
    locAdd++;
    }
    dest[locDest] = '\0';
    return dest[0];
}

/*----------------------------------------------*/

char* Str_compare(const char s1[], const char s2[]){
    size_t index = 0;

    assert(s1 != NULL);
    assert(s2 != NULL);

    if (s1[index] == s1[index]){
        index++;
    }
    else{
    return s2[index] - s1[index];
    }
}

/*----------------------------------------------*/

char* Str_compare(const char haystack[], const char needle[]){
    size_t haystackIter = 0;
    size_t needleIter = 0;

    assert(haystack != NULL);
    assert(needle != NULL);

    while(haystack[haystackIter] != NULL){
    if( haystack[haystackIter] == needle[needleIter]){
        needleIter = 0;
        size_t subStart = haystackIter;
        while(haystack[haystackIter] == needle[needleIter]){
          if (needle[needleIter] == '\0'){
            return subStart;
          }
          haystackIter++;
          needleIter ++;    
          }    
        }
            haystackIter++;
    }
    return NULL;
}