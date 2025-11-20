 /* starfield.c
   3D flying starfield animation.
   Works on Windows / Linux / macOS.
   Compile: gcc starfield.c -o starfield -lm
   Run: ./starfield
*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>

#ifdef _WIN32
#include <windows.h>
void sleep_ms(int ms){ Sleep(ms); }
#else
#include <unistd.h>
void sleep_ms(int ms){ usleep(ms * 1000); }
#endif

#define W 100
#define H 40
#define NUM_STARS 200

typedef struct {
    float x, y, z;
} Star;

int main() {
    Star stars[NUM_STARS];
    srand(time(NULL));

    for (int i = 0; i < NUM_STARS; i++) {
        stars[i].x = (rand() % 200 - 100);
        stars[i].y = (rand() % 200 - 100);
        stars[i].z = (rand() % 100 + 1);
    }

    printf("\033[2J");   // clear screen
    printf("\033[?25l"); // hide cursor

    while (1) {
        printf("\033[H");

        char screen[W * H];
        for (int i = 0; i < W * H; i++) screen[i] = ' ';

        for (int i = 0; i < NUM_STARS; i++) {

            float k = 50.0f / stars[i].z;
            int sx = (int)(W/2 + stars[i].x * k);
            int sy = (int)(H/2 + stars[i].y * k);

            if (sx >= 0 && sx < W && sy >= 0 && sy < H) {
                int idx = sy * W + sx;
                screen[idx] = '*';
            }

            stars[i].z -= 0.6f;

            if (stars[i].z <= 1) {
                stars[i].x = (rand() % 200 - 100);
                stars[i].y = (rand() % 200 - 100);
                stars[i].z = (rand() % 100 + 50);
            }
        }

        for (int y = 0; y < H; y++) {
            for (int x = 0; x < W; x++) {
                putchar(screen[y * W + x]);
            }
            putchar('\n');
        }

        sleep_ms(30);
    }

    return 0;
}
