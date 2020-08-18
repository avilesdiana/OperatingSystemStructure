/*
@Reference: 
http://diagramas-de-flujo.blogspot.com/2013/01/medir-tiempo-ejecucion-funcion-en-c.html

Diana Aviles

This program gets the duration time of the code.

The library time: https://www.tutorialspoint.com/c_standard_library/time_h.htm

*/


#include <stdio.h>
#include <time.h>
 
int main(int argc, char *argv[])
{
    //Clock value before calling it
    clock_t start = clock();

    
    /* Code */

    printf("Time elapsed: %f", ((double)clock() - start) / CLOCKS_PER_SEC);
 
    return 0;
}
