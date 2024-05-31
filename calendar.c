#include "calendar.h"

void initCalendar(Calendar *calendar) {
    calendar->eventCount = 0;
}

void addEvent(Calendar *calendar, int day, int month, int year, const char *description) {
    if (calendar->eventCount < MAX_EVENTS) {
        Event *newEvent = &calendar->events[calendar->eventCount++];
        newEvent->day = day;
        newEvent->month = month;
        newEvent->year = year;
        strncpy(newEvent->description, description, EVENT_DESC_LEN - 1);
        newEvent->description[EVENT_DESC_LEN - 1] = '\0';
    } else {
        printf("Cannot add more events. Maximum limit reached.\n");
    }
}

void displayMonthlyCalendar(Calendar *calendar, int month, int year) {
    printf("Calendar for %d-%d\n", month, year);
    printf("Su Mo Tu We Th Fr Sa\n");

    struct tm firstDay = { .tm_year = year - 1900, .tm_mon = month - 1, .tm_mday = 1 };
    mktime(&firstDay);
    int dayOfWeek = firstDay.tm_wday;
    
    for (int i = 0; i < dayOfWeek; i++) {
        printf("   ");
    }

    int daysInMonth = 31;
    switch (month) {
        case 4: case 6: case 9: case 11: daysInMonth = 30; break;
        case 2:
            daysInMonth = (year % 4 == 0 && (year % 100 != 0 || year % 400 == 0)) ? 29 : 28;
            break;
    }

    for (int day = 1; day <= daysInMonth; day++) {
        printf("%2d ", day);
        if ((day + dayOfWeek) % 7 == 0 || day == daysInMonth) {
            printf("\n");
        }
    }

    for (int i = 0; i < calendar->eventCount; i++) {
        Event *event = &calendar->events[i];
        if (event->month == month && event->year == year) {
            printf("%02d-%02d-%d: %s\n", event->day, event->month, event->year, event->description);
        }
    }
}

void listEvents(Calendar *calendar) {
    if (calendar->eventCount == 0) {
        printf("No events in the calendar.\n");
    } else {
        for (int i = 0; i < calendar->eventCount; i++) {
            Event *event = &calendar->events[i];
            printf("%02d-%02d-%d: %s\n", event->day, event->month, event->year, event->description);
        }
    }
}
