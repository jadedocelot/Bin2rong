#include <stdio.h>
#include <stdlib.h>
#include <limits.h>
#include <float.h>

int main(int argc, char** argv) {

printf("CHAR_BIT:%d\n",CHAR_BIT);
printf("CHAR_MAX:%d\n",CHAR_MAX);
printf("CHAR_MIN:%d\n",CHAR_MIN);
printf("INT_MAX:%d\n",INT_MAX);
printf("LONG_MAX:%d\n",LONG_MAX);
printf("LONG_MIN:%d\n",LONG_MIN);
printf("SCHAR_MAX:%d\n",SCHAR_MAX);
printf("SCHAR_MIN:%d\n",SCHAR_MIN);
printf("SHRT_MAX:%d\n",SHRT_MAX);
printf("SHRT_MIN:%d\n",SHRT_MIN);
printf("UCHAR_MAX:%d\n",UCHAR_MAX);
printf("UINT_MAX:%d\n",UINT_MAX);
printf("ULONG_MAX:%d\n",ULONG_MAX);
printf("USHRT_MAX:%d\n",USHRT_MAX);

 return 0;
}

/* 
OUTPUT: 

CHAR_BIT:8
CHAR_MAX:127
CHAR_MIN:-128
INT_MAX:2147483647
LONG_MAX:-1
LONG_MIN:0
SCHAR_MAX:127
SCHAR_MIN:-128
SHRT_MAX:32767
SHRT_MIN:-32768
UCHAR_MAX:255
UINT_MAX:-1
ULONG_MAX:-1
USHRT_MAX:65535
*/
