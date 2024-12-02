#include "litedb.h"

int main() {
    const char *filename = "data/litedb.txt";

    printf("Writing records...\n");
    write_record(filename, "Alice,25,Engineer");
    write_record(filename, "Bob,30,Doctor");

    printf("\nReading records...\n");
    read_records(filename);

    return 0;
}
