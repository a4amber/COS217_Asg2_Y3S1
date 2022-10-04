/* Author: Amber Chow */

#include "str.h"
#include <assert.h>


/*The Str_getLength() function calculates the length 
of the string in pcSrc[], excluding the terminating null byte. 
Return length as size_t*/
size_t Str_getLength(const char pcSrc[]){
   size_t uLength = 0;
   assert(pcSrc != NULL);
   while (pcSrc[uLength] != '\0')
      uLength++;
   return uLength;
}

/*The Str_copy() function copies the string in pcSrc[],
including the terminating null byte, to the buffer dest[].
The strings may not overlap and the destination string dest[]
must be large enough to recieve the copy. Return dest[0]*/
char* Str_copy(char dest[], const char pcSrc[]){
   assert(pcSrc != NULL);
   for (size_t i = 0; pcSrc[i] != '\0', i++){
      dest[i] = pcSrc[i];
   }
   return dest[0];
} 

/*The Str_concat() function appends the pcSrc[] string
to the dest string, overwriting the terminating null byte. 
The strings may not overlap, and the dest string must have
enough space for teh result. If dest is not large enough, 
program behavior is unpredictable. Return dest[0]*/
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

/*The Str_compare() function compares the two strings
s1[] and s2[]. It returns an integer less than, equal to,
or greater than zero if s1[] is found, respectively, to be less 
than, to match, or be greater than s2[] */
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

/*The Str_search() function finds the first occurance of the
substring needle in the string haystack. The terminating
null bytes are not compared. Returns the beginning address
of the substring or null if the substring is not found. */
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