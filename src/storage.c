#include "litedb.h"

void write_record(const char *filename, const char *record) {
    FILE *file = fopen(filename, "a");
    if (!file) {
        perror("Error opening file");
        exit(EXIT_FAILURE);
    }
    fprintf(file, "%s\n", record);
    fclose(file);
}

void read_records(const char *filename) {
    FILE *file = fopen(filename, "r");
    if (!file) {
        perror("Error opening file");
        exit(EXIT_FAILURE);
    }
    char buffer[MAX_RECORD_SIZE];
    while (fgets(buffer, MAX_RECORD_SIZE, file)) {
        printf("%s", buffer);
    }
    fclose(file);
}
