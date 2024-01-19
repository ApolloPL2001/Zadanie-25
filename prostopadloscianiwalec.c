#include <stdio.h>

float cuboid_field (float a, float b, float c) {
    return (a * b * c);
    }

void cuboid_field_service () {
    float a, b, c;

    printf ("Podaj a:");
    scanf ("%f", &a);

    printf("Podaj b:");
    scanf ("%f", &b);

    printf ("Podaj c:");
    scanf ("%f", &c);

    printf("Objentosc prostokonta: %f\n", cuboid_field(a, b, c));
    }

int main () {
    cuboid_field_service();
    return(0);
    }

