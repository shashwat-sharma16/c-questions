#include <stdio.h>

int main() {
    FILE *f1, *f2;
    char ch;

    f1 = fopen("MST.TXT", "r");   // open source file
    f2 = fopen("EST.TXT", "w");   // open destination file

    while ((ch = fgetc(f1)) != EOF) {
        fputc(ch, f2);
    }

    printf("File copied successfully.\n");

    fclose(f1);
    fclose(f2);

    return 0;
}
