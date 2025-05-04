#include <stdio.h>
#include <stdlib.h>

int requests[] = {2069, 1212, 2296, 2800, 544, 1618, 356, 1523, 4965, 3681};

int main (int argc, char *argv[]) {

    int total_cylinders = 0;

    if (argc != 2) {
        printf("Usage: %s <head> \n", argv[0]);
        return -1;
    }

    int head = atoi(argv[1]);

    if (head < 0 || head > 4999) {
        printf("Invalid head position: %d \n", head);
        return -1;
    }

    for (int i = 0; i < 10; i++) {
        total_cylinders += abs(head - requests[i]);
        head = requests[i];
    }

    printf("Total Cylinders: %d \n", total_cylinders);
    return 0;

}