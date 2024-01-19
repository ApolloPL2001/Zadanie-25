#include <stdio.h>
#include <math.h>

float cyliner_voliume (float h, float r) {
    return (M_PI*r*r*h);
}

void cyliner_voliume_service () {
    float r, h;

    printf ("Podaj r:");
    scanf ("%f", &r);

    printf("Podaj h:");
    scanf ("%f", &h);

    printf("Objetosc walca: %f\n", cyliner_voliume(r, h));
}


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
    cyliner_voliume_service();
    return(0);
    }

