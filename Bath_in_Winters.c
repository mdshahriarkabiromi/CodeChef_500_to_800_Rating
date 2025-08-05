#include <stdio.h>

int main() {
    int T;
    scanf("%d", &T);  // Number of test cases
    
    while (T--) {
        int X, Y;
        scanf("%d %d", &X, &Y);  // Geyser capacity and bucket capacity
        
        int water_needed_per_person = 2 * Y;
        int max_people = X / water_needed_per_person;
        
        printf("%d\n", max_people);
    }
    
    return 0;
}