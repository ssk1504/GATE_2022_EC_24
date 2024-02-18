#include <stdio.h>
#include <math.h>

#define NUM_POINTS 1000

int main() {
    FILE *fp1, *fp2;
    fp1 = fopen("data1.txt", "w");
    fp2 = fopen("data2.txt", "w");

    if (fp1 == NULL || fp2 == NULL) {
        printf("Error opening files.\n");
        return 1;
    }

    double t, i_c, i_d;

    for (int i = 0; i < NUM_POINTS; i++) {
        t = i * 10.0 / (NUM_POINTS - 1); // Time values from 0 to 10
        i_c = 2 * sin(t + M_PI / 2); // Conduction current function
        i_d = 2 * sin(t + M_PI); // Displacement current function

        fprintf(fp1, "%.6f %.6f\n", t, i_c); // Write coordinates to data1.txt
        fprintf(fp2, "%.6f %.6f\n", t, i_d); // Write coordinates to data2.txt
    }

    fclose(fp1);
    fclose(fp2);

    printf("Data generation and saving completed.\n");

    return 0;
}

