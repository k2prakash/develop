#include <stdio.h>
#include "hw1.h"

extern char reverse (char * str, int length);
extern int sizeof_str(char * str);

int main(){
    //printf("Hello World\n");
    char str[] = "This is a string";
    int str_size = 0;
    int rc = 0;
    int length = 0;

    printf("%s\n", str);
    str_size = sizeof_str(str);
    printf("Size of the string is %d bytes\n", str_size);
    printf("Enter the number of characters to perform the string reversal\n");
    scanf("%d", &length);

    if (length != str_size){
    	printf("Performing string reversal for the first %d characters\n", length);
    }
    else {
    	printf("Performing string reversal of the entire string\n");
    }
    rc = reverse(str, length);
    if (rc == 0) {
	printf("%s\n", str);
    }

  return 0;
}

