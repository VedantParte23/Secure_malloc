#include <stdio.h>
#include <stdlib.h>
#include "malloc.h"

void start_info(){
    
}

int main(){

    int *ptr = malloc(3*sizeof(int));
    int *ptr_second = malloc(100);

    free(ptr);


    print_report();

    return 0;
}


