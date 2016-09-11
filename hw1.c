#include <stdio.h>
#include "hw1.h"


/*
* This fucntion will perform a string reversal upto the given length of the string
*/
char reverse (char * str, int length) {
 int c = 0;
 int l = length;
 char tmp = 0;

 if (sizeof_str(str) == 0) { // check if the passed string has a zero length
 	printf("\nString of 0 length passed. Invalid string passed.\n");
        return -5;
 }  else if (!(*str)) { // check to see if the string passed is null
        printf("\nNull string passed\n");
        return -1;
 } else if (length < 0 ) { //check to see if the passed length is negative
        printf("\nNegative string length passed. Invalid length passed\n");
        return -2;
 } else if (length == 0) { // check to see if the passed length is 0
        printf("length passed is 0. Invalid length passed.\n");
        return -3;
 }  else if (length > sizeof_str(str)) { // check to see if the passed length is greater than the length of the string
         printf("\nLength greater than length of the string. Invalid length passed.\n");
         return -4;
 } else {
 	while (*str != '\0') {
            if (c == l/2) {
                break;
            } 
            tmp = *(str+c);
            *( str+c ) = *( str+length-1);
            *(str+length-1) = tmp;
            c++;
            length--;
  	}
    return 0;

    }
}

/*
* This function will determine the length of the passed string
*/
int sizeof_str(char * str) {
    int count = 0;
    while (*str != '\0') {
        count++;
        str+=1;
    }
    return count;
}

