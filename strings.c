#include <stdio.h>

int main()
{
    char lastName[] = {'H', 'A', 'Q'};
    char firstName[] = "AMAMUL";

    printf("%s\n", lastName);

    for (int i = 0; i < 6; ++i)
    {
        printf("%c", firstName[i]);
    }

    lastName[2] = 'P';
    firstName[1] = 'N';
    printf("%s\n %s", firstName, lastName);
    return 0;
}
