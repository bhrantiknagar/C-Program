#include <stdio.h>
void circle(float r, float *area, float *perimeter);
int main() {
    float radius, area, perimeter;
    printf("Enter the radius of the circle: ");
    scanf("%f", &radius);
    circle(radius, &area, &perimeter);
    printf("Area = %.2f\n", area);
    printf("Perimeter = %.2f\n", perimeter);
    return 0;
}
void circle(float r, float *area, float *perimeter) {
    *area = 3.14f * r * r;
    *perimeter = 2 * 3.14f * r;
}
