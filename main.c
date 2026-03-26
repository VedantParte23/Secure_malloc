#include <stdio.h>
#include <stdlib.h>
#include "malloc.h"
#include "debug.h"

// pass argument 1 for debug

int main(int argc, char *argv[])
{
    unsigned int debug = 0;
    if (argc > 1)
    {
        debug = atoi(argv[1]);
    }
    // gives info about envirenenet variables
    give_info(debug);
    // You can make
    // unsigned int debug = 1; to automaticly use it without argument




    // your code goes here,this vv
    // is sample code:
    int *ptr = malloc(3 * sizeof(int));
    int *ptr_second = malloc(100);

    // just freed ptr in print repost ptr_second should be seen are leaked

    free(ptr);
    // to here ^^





    // prints report on memory leaks.
    print_report();

    return 0;
}
