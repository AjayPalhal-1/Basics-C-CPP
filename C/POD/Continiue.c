#include <stdio.h>

int main() {
  int j;
    for (int i = 1; i <= 10; i++)
   {
        if (i==6) {
            printf("Number = %d\n", i);

            continue;  // Skip the rest of the loop when i is 3
        }
        printf("Number: %d\n", i);
    }
    return 0;
}
