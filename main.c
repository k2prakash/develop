#include <stdio.h>
#include "hw1.h"

extern char reverse (char * str, int length);
extern int sizeof_str(char * str);

int main(){
    //printf("Hello World\n");
    char str[] = "Hello World";
    int str_size = 0;
    int rc = 0;
    printf("%s\n", str);
    str_size = sizeof_str(str);
    printf("Size of the string is %d bytes\n", str_size);
    rc = reverse(str, 5);
    if (rc == 0) {
	printf("%s\n", str);
    }

  return 0;
}

