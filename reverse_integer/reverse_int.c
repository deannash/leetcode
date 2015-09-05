#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int reverse(int x) {
    char buffer[50];
    char ret_buf[50];
    int len = 0;
    sprintf(buffer, "%d", x);    
    len = strlen(buffer);
    int i;
    int j = len-1;
    i = (x>0)? 0:1;    
    if (x<0) 
 	ret_buf[0] = buffer[0];
    for (i; i<len; i++) {
	ret_buf[i] = buffer[j];
	j--;
    }      
    i = atoi(ret_buf);
    return i;    
}

int main()
{
    int r_val;
    r_val = reverse(-12345678);
    printf("%d\n", r_val);
    return 0;
}


