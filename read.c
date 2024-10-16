// Write your name here

#include <stdio.h>

int main(int argc, char *argv[]) {
    FILE *file;
    char ch;
    int choice = 0, lines = 0, words = 0, chars = 0;

    // Enter 1 to count lines, words, and characters
    // Enter 2 to print the file simply
    scanf("%d", &choice);
    
    file = fopen("sample.txt", "r");


    // Write your code here
    // ...

    
    fclose(file);
    return 0;
}
