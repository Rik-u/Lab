#include <stdio.h>

typedef enum _DayOfWeek {MON, TUE, WED, THU, FRI, SAT, SUN}DayOfWeek;

DayOfWeek findDayOfWeek(int day, int month) {
    int DaysInMonth[] = {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    int total = 0;
    for (int i = 1; i < month; i++)
    {
        total += DaysInMonth[i];
    }
    total += day;
    int first = TUE;
    return (DayOfWeek)(first + total) % 7;
}

int main()
{
    int day, month;
    DayOfWeek dow;

    printf("Day:1 Month:1 of Year 2013 is Tuesday.\n");
    printf("Enter Day and Month: ");
    scanf("%d %d", &day, &month);
    dow = findDayOfWeek(day, month);
    printf("Day:%d Month:%d of Year 2013 is ", day, month);
    switch (dow)
    {
    case 7:
        printf("Sunday.\n");
        break;
    case 1:
        printf("Monday.\n");
        break;
    case 2:
        printf("Tuesday.\n");
        break;
    case 3:
        printf("Wednesday.\n");
        break;
    case 4:
        printf("Thursday.\n");
        break;
    case 5:
        printf("Friday.\n");
        break;
    case 6:
        printf("Saturday.\n");
        break;
    }
}