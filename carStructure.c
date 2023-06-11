#include <stdio.h>
#include <string.h>

struct Car
{
    char brand[50];
    char model[50];
    int year;
};

int main()
{
    char tempBrand[50];
    printf("Enter brand name:");
    scanf("%s", tempBrand);

    struct Car car1, car2, car3;
    strcpy(car1.model, "X5");
    car1.year = 1999;
    strcpy(car2.model, "p5");
    car2.year = 2004;
    strcpy(car3.model, "y6");
    car3.year = 1996;

    if (strcmp(tempBrand, "bmw") == 0)
    {
        strcpy(car1.brand, tempBrand);
        printf("%s %s %d\n", car1.brand, car1.model, car1.year);
    }
    else if (strcmp(tempBrand, "ford") == 0)
    {
        strcpy(car2.brand, tempBrand);
        printf("%s %s %d\n", car2.brand, car2.model, car2.year);
    }
    else if (strcmp(tempBrand, "mustang") == 0)
    {
        strcpy(car3.brand, tempBrand);
        printf("%s %s %d\n", car3.brand, car3.model, car3.year);
    }
return 0;
}