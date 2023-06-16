#include <stdio.h>
  
   int main()
   {
           int a[] = {0x01234567, 0x89ABCDEF};
           void *p = a;
  
           printf("%X", *(p + 4));
  
          return 0;
  }