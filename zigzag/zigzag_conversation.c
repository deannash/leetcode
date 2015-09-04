#include <stdio.h>
#include <string.h>
#include <stdlib.h>

debug_print(int nRows, int nCols, int map_ind[][nCols])
{
int i, j; 
for (i = 0; i < nRows; i++) {
        for (j = 0; j < nCols; j++) {
                printf("%d ", map_ind[i][j]);
        }
}
printf("\n");
}

char* convert(char* s, int nRows) {
int i, j, counter, flag, size;
size = strlen(s);
if (nRows <= 1 || size <= nRows)
	return s; 
char *ret = malloc(size * sizeof(char));
char buffer[size];
int nCols = size/(nRows-1);
if (size%nRows != 0)
	nCols++; 
int map_ind[nRows][nCols];
for (i = 0; i < nRows; i++) {
	for (j = 0; j < nCols; j++) {
		map_ind[i][j] = 0;
	}
}

counter = 1;
j = flag = 0;
while (counter <= size) {
	for (i = 0; i < nRows; i++) {
		if (flag) {
			i++;
		}
		if (i < nRows && counter <= size) {
			map_ind[i][j] = counter;
			counter++;
		}
	}
	j++;
	flag = !flag;
}
counter = 0;
for (i = 0; i < nRows; i++) {
	for (j = 0; j < nCols; j++) {
		if(map_ind[i][j] != 0) {
			int k = map_ind[i][j];
			sprintf(buffer+counter*sizeof(char), "%c", s[k-1]); 
			counter++;
		}
		
	}
	
} 
strcpy(ret, buffer);
return ret;
}
//debug_print(nRows, nCols, map_ind);
int main() {
int size = 3; 
char* string = malloc(size);
string = convert("ABC", 2);
//convert("PAYPALISHIRING", 4);
printf("%s\n", string);
return 0;
}
