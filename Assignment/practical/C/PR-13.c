/*
Write a C program to create a file, write a string into it, close the file, then open the file again to read and display its contents.
*/
#include <stdio.h>

void main() {
    FILE *fp;
    char str[50];

    fp = fopen("data.txt", "w");
    fprintf(fp, " Hello  i am 1st file");
    fclose(fp);

    fp = fopen("data.txt", "r");
    fscanf(fp, "%s", str);
    printf("File Content: %s", str);
    fclose(fp);

    getch();
}
