#include "dependencies.h"

#define DEBUG(X) do { \
    cout << #X << ": "; \
    printer.print(X); \
} while(0);