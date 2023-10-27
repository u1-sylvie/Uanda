#include <stdio.h>

int main() {
    int x = 5, y = 7, z = 10;
    int a = 15, b = 20, c = 30;

    int result1 = ((x++) * (y--)) + ((++z) / 2);
    printf("x = %d, y = %d, z = %d, result1 = %d\n", x, y, z, result1);//x=6,y=6,z=11 but during operation we'll have (5*7)+(11/2)=40//

    x = 5;
    y = 7;
    z = 10;
    int result2 = ((++x) * (--y)) - ((z--) % 3);
    printf("x = %d, y = %d, z = %d, result2 = %d\n", x, y, z, result2);//x=6,y=6,z=9 but during operation z=10  modulus 3=1 from 10 and final answer is 35//

    a = 15;
    b = 20;
    c = 30;
    int result3 = ((a-- * b) + (--c)) / 2;
    printf("a = %d, b = %d, c = %d, result3 = %d\n", a, b, c, result3);//a=14,b=20,c=29 but during operation we'll use a=15 and the answer is 164.5=164//

    return 0;
}
