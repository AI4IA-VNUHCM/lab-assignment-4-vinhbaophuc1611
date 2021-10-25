/*
1.	Write a program to construct the Pascal triangle with the given integer n.
Ex:
______________________________________
| Input: 3                           |
| Output:                            |
| 1                                  |
| 1 1                                |
| 1 2 1                              |
| 1 3 3 1                            |
|____________________________________|
*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void Ex1(int rows){
	int i, j;
	int s, l = 1;

	for(i = 0; i < rows; i++){
        for(s = 1; s <= rows - i; s++){
            printf("");
        }
        for(j = 0; j <= i; j++){
            if(j == 0 || i == 0){
                l = 1;
            }
            else{
                l = l * (i - j + 1) / j;
            }
            printf("%d ", l);
        }
        printf("\n");
    }
}

int main(int argc, char *argv[]) {
	//testing variable, applying it to your algorithm for auto-evaluating
	int testcase = atoi(argv[1]);
	
	Ex1(testcase + 1);
	return 0;
}
