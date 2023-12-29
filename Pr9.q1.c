#include <stdio.h>
 main() {
    // File pointers
    FILE *p_even, *p_odd;
    int i;

    // Open the files for writing
    p_even = fopen("even_numbers.txt", "w");
    p_odd = fopen("odd_numbers.txt", "w");

    if (p_even == NULL || p_odd == NULL) {
        printf("Error: unable to open file for writing\n");
        
    }

    // Loop through numbers 50 to 70
    for (i = 50; i <= 70; i++) {
        if (i % 2 == 0) {
            // Write even number to the even_numbers.txt file
            fprintf(p_even, "%d\n", i);
        } else {
            // Write odd number to the odd_numbers.txt file
            fprintf(p_odd, "%d\n", i);
        }
    }

    // Close the files
    fclose(p_even);
    fclose(p_odd);

    printf("Successfully wrote even and odd numbers to files\n");

}
