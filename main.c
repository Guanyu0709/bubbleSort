#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
void BubbleSort(int*);
int main(int argc, char *argv[]) {
	int number[10] = {9,2,3,1,5,4,8,7,10,6};
    int i = 0, j = 0;
    int temp = 0;
    BubbleSort(number);
    for( i = 0; i < 10; i++ ) {
        printf("%d ", number[i]);
    }
   
	return 0;
}

