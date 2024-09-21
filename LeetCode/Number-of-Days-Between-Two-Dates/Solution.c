// Online C compiler to run C program online
#include <stdio.h>

int daysBetweenDates(char* date1, char* date2) {
    struct dateToInt {
        int yy;
        int mm;
        int dd;
    };
    struct dateToInt d1, d2;
    int month[] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    int days = 0, daysToDate1 = 0, daysToDate2 = 0, daysInMonth1 = 0,
        daysInMonth2 = 0, leaps1 = 0, leaps2 = 0, y1 = 1900, y2 = 1900;
    sscanf(date1, "%4d-%2d-%2d", &d1.yy, &d1.mm, &d1.dd);
    sscanf(date2, "%4d-%2d-%2d", &d2.yy, &d2.mm, &d2.dd);
    if (d1.yy > 2100 || d1.yy < 1971 || d2.yy > 2100 || d2.yy < 1971) {
        return -1;
    }

    while (y1 < (d1.yy)) {
        ++leaps1;
        y1 += 4;
    }
    while (y2 < (d2.yy)) {
        ++leaps2;
        y2 += 4;
    }
    for (int i = 0; i < d1.mm - 1; i++) {
        daysInMonth1 += month[i];
    }
    for (int j = 0; j < d2.mm - 1; j++) {
        daysInMonth2 += month[j];
    }

    if ((d1.yy % 4 == 0 && d1.mm > 2) && d1.yy != 2100) {
        daysInMonth1 += 1;
        // leaps1++;
    }
    if ((d2.yy % 4 == 0 && d2.mm > 2) && d2.yy != 2100) {
        daysInMonth2 += 1;
        // leaps2++;
    }

    daysToDate1 = (d1.dd) + daysInMonth1 + ((d1.yy - 1) - 1900) * 365 + leaps1;
    daysToDate2 = (d2.dd) + daysInMonth2 + ((d2.yy - 1) - 1900) * 365 + leaps2;
    days = daysToDate1 - daysToDate2;
    if (days < 0) {
        days = days * -1;
    }
    return days;
}
int main() {
    int days = 0;
    days = daysBetweenDates("2100-09-22","1991-03-12");
    printf("%d \n",days);

    return 0;
}
