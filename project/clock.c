//Digital Clock and Alarm 

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <unistd.h>
#include <windows.h>// Include this on Windows for Beep function

// Function to display the current time
void displayClock() {
    time_t now;
    struct tm *local;
    while (1) {
        time(&now);
        local = localtime(&now);
        system("clear"); // Clears the screen for a fresh clock display
        printf("Digital Clock\n");
        printf("----------------\n");
        printf("%02d:%02d:%02d\n", local->tm_hour, local->tm_min, local->tm_sec);
        sleep(1); // Wait for 1 second before updating
    }
}

// Function to manage alarms
void manageAlarms() {
    int alarmHour, alarmMin;
    char confirm;

    printf("Set an alarm (hh mm): ");
    scanf("%d %d", &alarmHour, &alarmMin);
    printf("Alarm set for %02d:%02d\n", alarmHour, alarmMin);
    printf("Press 'q' to stop the alarm when it rings.\n");

    while (1) {
        time_t now;
        struct tm *local;

        time(&now);
        local = localtime(&now);

        if (local->tm_hour == alarmHour && local->tm_min == alarmMin) {
            // Sound effect using Beep function (on Windows)
            for (int i = 0; i < 10; i++) {
                Beep(523,500); // Frequency 523 Hz, duration 500 ms
                sleep(1);// Wait for 1 second before updating
                

            }
            printf("\aAlarm ringing! Press 'q' to stop.\n");
            scanf(" %c", &confirm);
            if (confirm == 'q') {
                printf("Alarm stopped.\n");
                break;
            }
        }
    }
}

int main() {
    int choice;

    while (1) {
        printf("1. Display Digital Clock\n");
        printf("2. Set and Manage Alarm\n");
        printf("3. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                displayClock();
                break;
            case 2:
                manageAlarms();
                break;
            case 3:
                exit(0);
            default:
                printf("Invalid choice. Try again.\n");
        }
    }

    return 0;
}