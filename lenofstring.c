#include <stdio.h>
#include<string.h>
int main() {
   char string1[100];
   printf("enter the string:");
   scanf("%s",string1);
   int i=0, length;
   while(string1[i] !='\0') {
      i++;
   }
   length=i;
   printf(" string length is %d",length);
   return 0;
}
