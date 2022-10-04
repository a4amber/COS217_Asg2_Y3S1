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
    size_t i = 0;
   assert(pcSrc != NULL);
   while (pcSrc[i] != '\0'){
      dest[i] = pcSrc[i];
      i++;
   }
   return dest;
} 

/*----------------------------------------------*/
char* Str_concat(char dest[], const char pcSrc[]){
    size_t locDest = 0;
    size_t locAdd = 0;

    assert(pcSrc != NULL);
    assert(dest != NULL);

    while (dest[locDest] != '\0')    {
    locDest++;
    }
    while (pcSrc[locAdd] != '\0')    {
    dest[locDest] = pcSrc[locAdd];
    locDest++;
    locAdd++;
    }
    dest[locDest] = '\0';
    return dest;
}

/*----------------------------------------------*/

int Str_compare(const char s1[], const char s2[]){
    size_t index = 0;

    assert(s1 != NULL);
    assert(s2 != NULL);

    if (s1[index] == s2[index]){
        index++;
    }
    else{
    return s2[index] - s1[index];
    }
    return 0;
}

/*----------------------------------------------*/

char* Str_search(const char haystack[], const char needle[]){
    size_t haystackIter = 0;
    size_t needleIter = 0;
    size_t subStart = 0;

    assert(haystack != NULL);
    assert(needle != NULL);

    while(haystack[haystackIter] != '\0'){
    if( haystack[haystackIter] == needle[needleIter]){
        needleIter = 0;
        subStart = haystackIter;
        while(haystack[haystackIter] == needle[needleIter]){
          if (needle[needleIter] == '\0'){
            return haystack + subStart;
            /* TRIGGERS WARNING DISCARDS CONST*/
          }
          haystackIter++;
          needleIter ++;    
          }    
        }
            haystackIter++;
    }
    return NULL;
}