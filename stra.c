
/*The Str_getLength() function calculates the length 
of the string in pcSrc[], excluding the terminating null byte*/
size_t Str_getLength(const char pcSrc[])
{
   size_t uLength = 0;
   assert(pcSrc != NULL);
   while (pcSrc[uLength] != '\0')
      uLength++;
   return uLength;
}

/*The Str_copy() function copies the string in pcSrc[],
including the terminating null byte, to the buffer dest[].
The strings may not overlap and the destination string dest[]
must be large enough to recieve the copy*/
char* Str_copy(char dest[], const char pcSrc[])
{
   size_t i = 0;
   assert(pcSrc != NULL);
   while (pcSrc[i] != '\0')
      dest[i] = pcSrc[i];
   return dest[0];
} 

/*The Str_concat() function appends the pcSrc[] string
to the dest string, overwriting the terminating null byte. 
The strings may not overlap, and the dest string must have
enough space for teh result. If dest is not large enough, 
program behavior is unpredictable*/
char* Str_concat(char dest[], const char pcSrc)
{
    
}