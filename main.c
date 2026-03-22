#include <stdio.h>
#include <stdlib.h>
#include "malloc.h"
#include "debug.h"

// pass argument 1 for debug


int main(int argc, char *argv[]){
    unsigned int debug = 0;
    if(argc> 1){
        debug = atoi(argv[1]);
    }
    give_info(debug);
    //You can make 
    //unsigned int debug = 1; to automaticly use it without argument


    //your code goes here:
    int *ptr = malloc(3*sizeof(int));
    int *ptr_second = malloc(100);

    free(ptr);
    // to here



    
    print_report();

    return 0;
}


