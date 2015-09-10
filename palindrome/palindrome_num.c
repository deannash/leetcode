#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <stdbool.h>
void reverse(char *s){
	int i, j;
	for(i = 0,j = strlen(s)-1;i<j;i++,j--){ 
	int c = s[i]; s[i] = s[j]; s[j] = c; 
	} 
}

void itoa(int n,char *s){ 
	int flag = 1; 
	if (n<0){ n = -n; flag = 0; } 
	int i = 0; 
	while(n != 0){ 
	s[i++] = n%10+'0'; 
	n = n/10; } 
	if(!flag) 
		s[i++] = '-'; 
		s[i] = '\0'; 
	reverse(s); 
}

bool isPalindrome(int x) {
    int head, tail;
    char buffer[256];
    itoa(x,buffer);
    head = 0;
    tail = strlen(buffer) -1;
    while(head < tail) {
    	if(buffer[head] == buffer[tail] && head <= tail)
	{
		head++;
	  	tail--;
	}
    	else 
		return false;
    }
    return true;
}

int main() {
    bool x;
    x = isPalindrome(123421);
    printf("%s\n", x ? "true" : "false");
    return 0;
}
