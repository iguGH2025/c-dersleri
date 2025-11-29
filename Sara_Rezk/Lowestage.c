#include <stdio.h>

int main()
{

    int ages[] = {20, 22, 18, 35, 48, 26, 87, 70};

    int i;

    // Get the length of the array
    int length = sizeof(ages) / sizeof(ages[0]);

    // Create a variable and assign the first array element of ages to it
    int lowestAge = ages[0];

    // Loop through the elements of the ages array to find the lowest age
    for (i = 0; i < length; i++)
    {
        if (lowestAge > ages[i])
        {
            lowestAge = ages[i];
        }
    }
    // Print the lowest age
    printf("The lowest age is: %d", lowestAge);

    return 0;
}   