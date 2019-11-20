#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void func1() {
	printf("Got to func1");
	//string hi = scanf(%s);
	//printf(hi);
}

void func2 () {
   char str1[20], str2[30];

   printf("Enter name: ");
   scanf("%s", str1);

   printf("Enter your website name: ");
   scanf("%s", str2);

   printf("Entered Name: %s\n", str1);
   printf("Entered Website:%s", str2);
}



int main(int argc, char *argv[])
{
    if (argc == 4) {
        FILE *input = fopen(argv[1], "r");
        if (!input) {
            perror("File opening failed");
            return EXIT_FAILURE;
        }
        FILE *output = fopen(argv[2], "w");
        if (!output) {
            perror("File opening failed");
            return EXIT_FAILURE;
        }

        char *message = argv[3];

        int c;
        while ((c = fgetc(input)) != EOF) {
            fputc(c, output);
        }

        if (ferror(input))
            puts("I/O error when reading");
        else if (feof(input))
            puts("End of file reached successfully");

        printf("%s\n", message);

        fclose(input);
        fclose(output);

		func1();
		func2();
    }

    else {
        perror("Improper number of arguments. Provide input file, output file, and secret message.");
    }

    return 1;
}
