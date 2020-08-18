
/*
@Reference: 
https://www.sanfoundry.com/c-program-list-files-directory/

Diana Aviles

This program reads the structure of a directory

The library dirent: https://pubs.opengroup.org/onlinepubs/007908799/xsh/dirent.h.html
                    http://programacion.e-recursos.net/doc/FPU6-Directorios.pdf

*/

#include <dirent.h>
#include <stdio.h>
 
int main(void)
{
    DIR *d;
    struct dirent *dir;
    d = opendir(".");
    if (d)
    {
        while ((dir = readdir(d)) != NULL)
        {
            printf("%s\n", dir->d_name);
        }
        closedir(d);
    }
    return(0);
}