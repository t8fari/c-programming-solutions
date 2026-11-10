#include <stdio.h>

main()
{
    float fahr, celsius;
    int lower, upper, step;

    lower = 0;
    upper = 300;
    step = 20;

    printf("Fahrenheit to Celsius table\n");
    printf("%s %7s\n", "Fahr", "Cels");

    fahr = lower;
    while (fahr <= upper) {
        celsius = (5.0/9.0) * (fahr-32.0);
        printf("%3.0f %8.1f\n", fahr, celsius);
        fahr = fahr + 20;
    }
}