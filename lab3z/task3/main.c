#include <stdio.h>
#include <stdlib.h>

#define SIZE 64

int main()
{
    /*FILE *file=fopen("test.txt","w");
    fprintf(file, "Hello world! %d\n", 6);
    fclose(file);
    */

    char *text="4.5";
    double d=atof(text);
    printf("%f\n", d);

    /*FILE *read=fopen("test.txt", "r");
    char line[SIZE];

    while(fgets(line, SIZE, read) != NULL);
    {
        printf("LINE: %s", line);
    }
    fclose(read);
    */

    //stdin, stdout,stderr
    //fprintf(stdout,"5");

    return 0;
}
