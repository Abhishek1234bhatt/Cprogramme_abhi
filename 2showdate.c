#include <stdio.h>
#include <time.h>

int main() {
    // Getting current time
    time_t t = time(NULL);
    struct tm tm = *localtime(&t);

    // Displaying current date
    printf("Current Date: %d-%02d-%02d\n", tm.tm_year + 1900, tm.tm_mon + 1, tm.tm_mday);

    return 0;
}
