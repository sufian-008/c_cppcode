 #include <stdio.h>
  #include <stdlib.h>
  #include <math.h>
  int main() {
        float *x, mean = 0, median, sd, var;
        int n, i, j, temp;
        printf("Enter the no of entries:");
        scanf("%d", &n);
        x   = (float *)malloc(sizeof (float) * n);
        printf("Enter your inputs:\n");
        for (i = 0; i < n; i++)
                scanf("%f", &x[i]);
        for (i = 0; i < n; i++)
                mean = mean + x[i];
        mean = mean / n;
        for (i = 0; i < n; i++)
                var = var + pow((x[i] - mean) , 2);

        var = var / n;

        /* square root of variance is SD */
        sd  = sqrt(var);

        /* sort the given inputs to find median */
        for (i = 0; i < n - 1; i++)
                for (j = i; j < n; j++) {
                        if (x[i] > x[j]) {
                                temp = x[i];
                                x[i] = x[j];
                                x[j] = temp;
                        }
                }
        if ((n + 1) % 2 == 0) {
                median = x[((n + 1) / 2) - 1];
        } else {
                median = (x[((n + 1) / 2) - 1] + x[((n + 2) / 2) - 1]) / 2;
        }
        printf("Standard deviation: %f\n", sd);
        printf("Mean : %f\n", mean);
        printf("Median: %f\n", median);
        return 0;
  }
