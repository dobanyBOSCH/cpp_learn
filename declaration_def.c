#include <stdio.h>

// ===== Variable Declarations =====
extern int globalCount;   // Declaration: "globalCount exists somewhere"

// ===== Function Declarations =====
void printCount(void);    // Declaration: function exists somewhere

// ===== Variable Definition =====
int globalCount = 10;     // Definition: actually allocates and initializes, (all definitions are declarations too)

// ===== Function Definition =====
void printCount(void) {   // Definition: provides the function body
    printf("globalCount = %d\n", globalCount);
}

int main(void) {
    printf("Before: ");
    printCount();

    globalCount += 5;  // Modify the variable

    printf("After: ");
    printCount();

    return 0;
}
