/*this is comment*/
#include <stdio.h>

int main(){
    int x;
    x=0;

    while(x == 0) {
        printf("Do you want to quit? Press non-zero digit\n");
        scanf("%d", &x);
    }
    return 0;
}