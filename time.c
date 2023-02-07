#include <stdio.h>
#include <time.h>
#include <unistd.h>

void clearScreen() {
    printf("\033[2J\033[1;1H");
}

int main() {
    int hour, minute, second;
    printf("Enter the current time (hh:mm:ss): ");
    scanf("%d:%d:%d", &hour, &minute, &second);

    while (1) {
        time_t rawtime;
        struct tm *timeinfo;
        time(&rawtime);
        timeinfo = localtime(&rawtime);

        if (hour == timeinfo->tm_hour && minute == timeinfo->tm_min && second == timeinfo->tm_sec) {
            break;
        }
    }

    while (1) {
        time_t rawtime;
        struct tm *timeinfo;
        time(&rawtime);
        timeinfo = localtime(&rawtime);
        clearScreen();
        printf("  _________     _________\n");
        printf(" /         \\   /         \\\n");
        printf("/   %02d:%02d   \\ /   %02d:%02d   \\\n", timeinfo->tm_hour, timeinfo->tm_min, timeinfo->tm_hour, timeinfo->tm_min);
        printf("|   .%02d.   | |   .%02d.   |\n", timeinfo->tm_sec, timeinfo->tm_sec);
        printf(" \\_________/   \\_________/\n");
        usleep(1000000);
    }

    return 0;
}
