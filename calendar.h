#ifndef CALENDAR_H
#define CALENDAR_H

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

#define MAX_EVENTS 100
#define EVENT_DESC_LEN 100

typedef struct {
    int day;
    int month;
    int year;
    char description[EVENT_DESC_LEN];
} Event;

typedef struct {
    Event events[MAX_EVENTS];
    int eventCount;
} Calendar;

void initCalendar(Calendar *calendar);
void addEvent(Calendar *calendar, int day, int month, int year, const char *description);
void displayMonthlyCalendar(Calendar *calendar, int month, int year);
void listEvents(Calendar *calendar);

#endif