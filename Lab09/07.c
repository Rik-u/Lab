#include <stdio.h>

double findAverage(char *filename)
{
    while (fgets(line, sizeof(line), file) != NULL)
    {
        printf("Read line: %s", line);
    }
}

int main()
{
    char filename[20];
    double average;
    scanf("%s", filename);
    average = findAverage(filename);
    printf("Average score is %.4lf\n", average);
}