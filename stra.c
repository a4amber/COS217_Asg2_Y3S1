/*--------------------------------------------------------------------*/
/* stra.c                                                         */
/* Author: Amber Chow                                             */
/*--------------------------------------------------------------------*/

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

    assert(dest != NULL);
   assert(pcSrc != NULL);
   while (pcSrc[i] != '\0'){
      dest[i] = pcSrc[i];
      i++;
   }
   dest[i] = '\0';
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

    while (s1[index] == s2[index]){
        if(s1[index] == '\0')
        return 0;
        else
        index++;
    }
    return (int)(s1[index] - s2[index]);

}

/*----------------------------------------------*/

char* Str_search(const char haystack[], const char needle[]){
    size_t haystackIter = 0;
    size_t needleIter = 0;
    size_t subStart = 0;

    assert(haystack != NULL);
    assert(needle != NULL);

    while(haystack[haystackIter] != '\0'){
    needleIter = 0; 

    /* if the current index of haystack is the first value of needle
    save the location and keep checking*/
    if( haystack[haystackIter] == needle[needleIter]){
        subStart = haystackIter;
        while(haystack[haystackIter] == needle[needleIter]){
          haystackIter++;
          needleIter ++;    

          /* if the whole needle has been found return the saved start point*/
            if (needle[needleIter] == '\0'){
              return (char*) (haystack + subStart);
          }
            /* if the needle was not complete go back to where we left off*/
          }    
          haystackIter = subStart;
        }

        /*check the next index of the hyastack for */
            haystackIter++;
    }

    /*boundary condition where needle is an empty string*/
    if(needle[0] == '\0'){
    while (haystack[haystackIter] != '\0'){
    haystackIter++;
    } 
    return (char*) haystack;
    }
    

    return NULL;
}