/*
 * This program allows the user to
 * input "n" numbers in the array, compared them
 * and show how many of them are unique.
 *
 * Author: Hugo Aguirre Doria
 * Date: October 15th, 2018
 */
#include <stdio.h>

int main(void) {
    //variable declaration
    int a;
    int b;
    int cnt = 0;
    int sze;


    printf("How many elements you want in the array?: \n"); //we ask the user for the size of the array
    scanf("%i", &sze);


    int arry [sze];


    for (int i=0; i<sze; i++) {
        printf("Element: \n\n"); //we ask the user for the elements
        scanf("%i", &arry[i]);
    }



    printf("The unique elements in the array is/are: ");
    for(int i = 0; i < sze; i++) {
        cnt=0;                      //search and compare for unique elements
        if(arry[i] == arry[i-1]) {
            cnt++;
        }
        for(a = 0; a < i; a++) {
            if(arry[i] == arry[a]) {
                cnt++;
            }
        }
        for(b = i+1; b < sze; b++) {
            if(arry[i] == arry[b]) {
                cnt++;
            }
        }
        if(cnt == 0) {
            printf("%i ", arry[i]);
        }
    }



    return 0;
}