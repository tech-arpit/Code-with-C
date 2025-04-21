#include <stdio.h>

int main() {
    int a, b, c, d, e, f, g, h, i, j, k, l, m, n, o, p;

    // Input 10-digit vault configuration and three pairs of (index, rotation)
    scanf("%d %d %d %d %d %d %d %d %d %d %d %d %d %d %d %d", 
          &a, &b, &c, &d, &e, &f, &g, &h, &i, &j, &k, &l, &m, &n, &o, &p);

    // Correct the digit at position k by rotating it l times
    switch (k) {
        case 0: a = (a + l) % 10; break;
        case 1: b = (b + l) % 10; break;
        case 2: c = (c + l) % 10; break;
        case 3: d = (d + l) % 10; break;
        case 4: e = (e + l) % 10; break;
        case 5: f = (f + l) % 10; break;
        case 6: g = (g + l) % 10; break;
        case 7: h = (h + l) % 10; break;
        case 8: i = (i + l) % 10; break;
        case 9: j = (j + l) % 10; break;
    }

    // Correct the digit at position m by rotating it n times
    switch (m) {
        case 0: a = (a + n) % 10; break;
        case 1: b = (b + n) % 10; break;
        case 2: c = (c + n) % 10; break;
        case 3: d = (d + n) % 10; break;
        case 4: e = (e + n) % 10; break;
        case 5: f = (f + n) % 10; break;
        case 6: g = (g + n) % 10; break;
        case 7: h = (h + n) % 10; break;
        case 8: i = (i + n) % 10; break;
        case 9: j = (j + n) % 10; break;
    }

    // Correct the digit at position o by rotating it p times
    switch (o) {
        case 0: a = (a + p) % 10; break;
        case 1: b = (b + p) % 10; break;
        case 2: c = (c + p) % 10; break;
        case 3: d = (d + p) % 10; break;
        case 4: e = (e + p) % 10; break;
        case 5: f = (f + p) % 10; break;
        case 6: g = (g + p) % 10; break;
        case 7: h = (h + p) % 10; break;
        case 8: i = (i + p) % 10; break;
        case 9: j = (j + p) % 10; break;
    }

    // Print the corrected passcode
    printf("%d %d %d %d %d %d %d %d %d %d\n", a, b, c, d, e, f, g, h, i, j);


}
