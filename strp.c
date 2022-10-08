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
   const char *pcEnd;
   assert(pcSrc != NULL);
   assert(dest != NULL);
   pcEnd = pcSrc;
   while (*pcEnd != '\0'){
     *dest = *pcSrc;
      pcEnd++;
} 
   return dest;
}

/*----------------------------------------------*/
char* Str_concat(char* dest, const char* pcSrc){
   char* crossDest;
   char* crossPc;
   assert(pcSrc != NULL);
   assert(dest != NULL);

   crossDest = dest;
   crossPc = pcSrc;
   while (*crossDest !
   = '\0')
      crossDest ++;
    while (*crossPc != '\0'){
    *crossDest = *pcSrc;
    crossDest++;
    crossPc++;
    }
   return dest;
}

/*----------------------------------------------*/

int Str_compare(const char* s1, const char* s2){
   const char *ind1;
   const char *ind2;

   assert(s1 != NULL);
   assert(s2 != NULL);

   ind1 = s1;
   ind2 = s2;

   while ((*ind1 == *ind2)){
    if(*ind1 == '\0'){
        return 0;
    }
    ind1++;
    ind2++;
   }
   return (int)*ind1-*ind2;

}

/*----------------------------------------------*/

char* Str_search(const char* haystack, const char* needle){
   char *hay;
   const char *need;
   char *finders;

   assert(haystack != NULL);
   assert(needle != NULL);

   hay = haystack;
   need = needle;

   /*iterates through all of haystack, marks possible needle
   and checks reseting with next location if failed and returning
   starting mark if success*/
   while ((*hay != '\0')){
    if(*hay == *need){
    finders = hay;
    while(*hay == *need){
        if (*need == '\0')
        return (char*)finders;
    need++;
    hay++;
    }
    hay = finders +1;
    need = needle;
    }
    hay++;
   }
   return NULL;
}