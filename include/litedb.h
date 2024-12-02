#ifndef LITE_DB_H
#define LITE_DB_H

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_RECORD_SIZE 256

// making the function prototypes
void write_record(const char *filename, const char *record);
void read_records(const char *filename);

#endif
