# Calendar-
🔹 Features:
Add Event: Easily add events with a date and description.
Display Monthly Calendar: View the monthly calendar with events highlighted.
List Events: Quickly list all scheduled events.
User-friendly Interface: Simple menu-driven interface for easy navigation.
🔹 Technologies Used:
Programming Language: C
Development Tools: GCC, Makefile
Version Control: Git and GitHub
🔹 Challenges Overcome:
Efficiently managing memory and pointers.
Implementing a clean and user-friendly command-line interface.
Ensuring accurate date handling and event management.
🔹 Why This Project? Developing this calendar application helped me deepen my understanding of C programming and sharpen my problem-solving skills. It's a great example of my ability to build robust applications and manage complex data structures.

//Algorithm for Calendar with Events:-

Initialization:
Define constants for the months and days of the week.
Initialize variables to store the current year, month, and list of events.
Define arrays to store the number of days in each month for leap and non-leap years.
Create a structure to hold event information (date and description).
Function Definitions:

isLeapYear: Determine if a given year is a leap year.
getFirstDayOfMonth: Calculate the first day of the month using Zeller's Congruence.
printCalendar: Display the calendar for a given month and year.
addEvent: Add an event to the list.
listEvents: Display the list of events.
Main Menu:

Display options: Add Event, Display Monthly Calendar, List Events, Exit.
Loop to handle user input and perform corresponding actions.
User Interaction:Allow the user to input choices and call the respective functions.
