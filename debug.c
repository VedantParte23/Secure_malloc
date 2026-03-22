#include <stdio.h>
#include <stdlib.h>

// These are mainly predefined macros i used form book
// a c programming a modern approach

static unsigned int main_debug = 0;

void give_info(unsigned int off)
{

    main_debug = off;

    if (main_debug)
    {
#ifdef __clang__
        printf("You are using a clang compilter");

#elif defined __GNUC__
        printf("You are using GNU c compilter");

#elif defined _MSC_VER
        printf("You are using MS visual cpp compiler");

#endif // DEBUG

#ifdef __linux__
        printf("\n\nYour on a linux machine");

#elif defined _WIN32
        printf("\n\nYour on a windows machine");

#elif defined __APPLE__
        printf("\n\nYour on a MAC (Rich guy 😭)");

#endif

#ifdef __STDC_VERSION__

#if __STDC_VERSION__ == 199901L
        printf("\n\nThis is C99 version of c");
#elif __STDC_VERSION__ == 201112L
        printf("\n\nThis is C11 version of c");
#elif __STDC_VERSION__ == 201710L
        printf("\n\nThis is C17/18 version of c");
#elif __STDC_VERSION__ == 202311L
        printf("\n\nThis is C23 version of c");
#else
        printf("\n\nYou are using a ancient compilter please upgrade it");
#endif

#endif // DEBUG
#if (__STDC_IEC_559__ == 1)
        printf("\n\ncompiler per-forms floating-point arithmetic according to the IEC 60559 standard");
#endif

        printf("\n\nCompilted on %s at %s", __DATE__, __TIME__);
    }
}
