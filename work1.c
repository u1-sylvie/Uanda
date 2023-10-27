#include <stdio.h>

int main() {
    int a = 5, b = 3, c = 7;

    int result1 = (a > b) && (b < c);
    int result2 = (a > b) || (b > c);
    int result3 = !(a == b);

    printf("Result 1: (a > b) && (b < c) = %d\n", result1); //The result will be 1 because both (a>b) and (b<c) are true//
    printf("Result 2: (a > b) || (b > c) = %d\n", result2);//The result will be 1 because only (a>b) is true//
    printf("Result 3: !(a == b) = %d\n", result3);//The result will be 1 because a is not equal to b//

    return 0;
}
