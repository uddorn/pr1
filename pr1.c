#include <stdio.h>
#include <Windows.h>

int main() {
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    double t1, t2, t3;

    printf("¬вед≥ть три значенн€: ");
    scanf("%lf %lf %lf", &t1, &t2, &t3);
    double speed = 1.0 / t1 + 1.0 / t2 + 1.0 / t3;
    double time = 1.0 / speed;
    printf("%.2lf\n", time);

    return 0;
}






