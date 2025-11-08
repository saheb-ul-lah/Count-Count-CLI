#include <stdio.h>

// Function to print shape A
void print_A() {
    int n = 5; // Set a default size
    n = n + n;
    int i = 1, j, k, s = n / 2;
    while (i <= n) {
        j = 0;
        while (j < s) {
            printf(" ");
            j += 1;
        }
        s -= 1;
        k = 0;
        while (k < i) {
            if (k == 0 || k == i - 1 || i == n / 2) {
                printf("*");
                k += 1;
            } else {
                printf(" ");
                k += 1;
            }
        }
        printf("\n");
        i = i + 2;
    }
}

// Function to print shape B
void print_B() {
    int n = 5; // Set a default size
    int row = ((n + n) / 2) + n / 2, width = n, diff = 1, i, j;
    for (i = 1; i <= row; i++) {
        for (j = 1; j <= width; j++) {
            if (j == 1 || j == width || i == diff) {
                if (j == width && i == diff) {
                    printf(" ");
                } else {
                    printf("*");
                }
            } else {
                printf(" ");
            }
        }
        printf("\n");
        if (i == diff) {
            diff += row / 2;
        }
    }
    if (diff == row + 1) {
        for (i = 0; i < n - 1; i++) {
            printf("*");
        }
        printf("\n");
    }
}

// Function to print shape C
void print_C() {
    int n = 5; // Set a default size
    int i, j;
    for (i = 1; i <= n; i++) {
        for (j = 1; j <= n; j++) {
            if ((j > 1 && (i == 1 || i == n)) || ((i > 1 && i < n) && (j == 1))) {
                printf("*");
            } else {
                printf(" ");
            }
        }
        printf("\n");
    }
}

// Function to print shape D
void print_D() {
    int n = 5; // Set a default size
    int i, j;
    for (i = 1; i <= n; i++) {
        for (j = 1; j <= n; j++) {
            if ((j < n && (i == 1 || i == n)) || ((i > 1 && i < n) && (j == 2 || j == n))) {
                printf("*");
            } else {
                printf(" ");
            }
        }
        printf("\n");
    }
}

// Function to print shape E
void print_E() {
    int n = 5; // Set an odd size
    int i, j;
    for (i = 1; i <= n; i++) {
        for (j = 1; j <= n; j++) {
            if (i == 1 || i == (n / 2) + 1 || i == n || j == 1) {
                printf("*");
            } else {
                printf(" ");
            }
        }
        printf("\n");
    }
}

// Function to print shape F
void print_F() {
    int n = 5; // Set an odd size
    int i, j;
    for (i = 1; i <= n; i++) {
        for (j = 1; j <= n; j++) {
            if (i == 1 || i == (n / 2) + 1 || j == 1) {
                printf("*");
            } else {
                printf(" ");
            }
        }
        printf("\n");
    }
}

// Function to print shape G
void print_G() {
    int n = 5; // Set an odd size
    int i, j;
    int x = (n / 2) + 1;
    for (i = 1; i <= n; i++) {
        for (j = 1; j <= n; j++) {
            if (((i == 1 || i == n) && j > 1) || ((i > 1 && i < n) && j == 1) || (i > x && j == n) || (i == x && j > x)) {
                printf("*");
            } else {
                printf(" ");
            }
        }
        printf("\n");
    }
}

// Function to print shape H
void print_H() {
    int n = 5; // Set an odd size
    int i, j;
    for (i = 1; i <= n; i++) {
        for (j = 1; j <= n; j++) {
            if (j == 1 || j == n || i == (n / 2) + 1) {
                printf("*");
            } else {
                printf(" ");
            }
        }
        printf("\n");
    }
}

// Function to print shape I
void print_I() {
    int n = 5; // Set an odd size
    int i, j;
    for (i = 1; i <= n; i++) {
        for (j = 1; j <= n; j++) {
            if (i == 1 || i == n || j == (n / 2) + 1) {
                printf("*");
            } else {
                printf(" ");
            }
        }
        printf("\n");
    }
}

// Function to print shape J
void print_J() {
    int n = 5; // Set an odd size
    int i, j;
    for (i = 1; i <= n; i++) {
        for (j = 1; j <= n; j++) {
            if (i == 1 || ((i == n) && ((j > 1) && (j <= n / 2 + 1))) || j == (n / 2) + 1 || ((i == n - 1) && (j == 1))) {
                printf("*");
            } else {
                printf(" ");
            }
        }
        printf("\n");
    }
}

// Function to print shape K
void print_K() {
    int n = 5; // Set an odd size
    int i, j, s, r;
    s = n / 2 - 1; //Space
    r = n / 2 + 2;
    int m = 2;
    for (i = 1; i <= n; i++) {
        for (j = 1; j <= n / 2 + 1; j++) {
            if (j == 1 || j == s + 2 || (i == r && j == m)) {
                printf("*");
            } else {
                printf(" ");
            }
        }
        s -= 1;
        if (i >= r) {
            r += 1;
            m += 1;
        }
        printf("\n");
    }
}

// Function to print shape L
void print_L() {
    int n = 5; // Set an odd size
    int i, j;
    for (i = 1; i <= n; i++) {
        for (j = 1; j <= n; j++) {
            if (i == n || j == 1) {
                printf("*");
            } else {
                printf(" ");
            }
        }
        printf("\n");
    }
}

// Function to print shape M
void print_M() {
    int n = 5; // Set an odd size
    int i, j;
    for (i = 1; i <= n; i++) {
        for (j = 1; j <= n; j++) {
            if (j == 1 || ((i <= n / 2 + 1) && (i == j)) || ((j > n / 2 + 1) && (i == n - j + 1)) || j == n) {
                printf("*");
            } else {
                printf(" ");
            }
        }
        printf("\n");
    }
}

// Function to print shape N
void print_N() {
    int n = 5; // Set an odd size
    int i, j;
    for (i = 1; i <= n; i++) {
        for (j = 1; j <= n; j++) {
            if (j == 1 || i == j || j == n) {
                printf("*");
            } else {
                printf(" ");
            }
        }
        printf("\n");
    }
}

// Function to print shape O
void print_O() {
    int n = 5; // Set an odd size
    int i, j;
    for (i = 1; i <= n; i++) {
        for (j = 1; j <= n; j++) {
            if (((i == 1 || i == n) && ((j > 1) && (j < n))) || ((i > 1 && i < n) && (j == 1 || j == n))) {
                printf("*");
            } else {
                printf(" ");
            }
        }
        printf("\n");
    }
}

// Function to print shape P
void print_P() {
    int n = 5; // Set an odd size
    int i, j;
    for (i = 1; i <= n; i++) {
        for (j = 1; j <= n; j++) {
            if (((i == 1 || i == n / 2 + 1) && ((j > 1) && (j < n))) || ((i > 1 && i < n) && (j == 1)) || ((i > 1 && i < n / 2 + 1) && (j == n))) {
                printf("*");
            } else {
                printf(" ");
            }
        }
        printf("\n");
    }
}

// Function to print shape Q
void print_Q() {
    int a = 7; // Set a default size
    int n = a - a / 3;
    int i, j;
    for (i = 1; i <= n; i++) {
        for (j = 1; j <= n; j++) {
            if (((i == 1 || i == n) && ((j > 1) && (j < n))) || ((i > 1 && i < n) && (j == 1 || j == n)) || (i > n / 2 + 1) && (i == j)) {
                printf("*");
            } else {
                printf(" ");
            }
        }
        printf("\n");
    }
    for (i = 1; i <= a - n - 1; i++) {
        for (j = 1; j <= a; j++) {
            if (j == n + i) {
                printf("*");
            } else {
                printf(" ");
            }
        }
        printf("\n");
    }
}

// Function to print shape R
void print_R() {
    int n = 5; // Set an odd size
    int i, j;
    int x = n / 2 + 1, r = 2;
    for (i = 1; i <= n; i++) {
        for (j = 1; j <= n; j++) {
            if (((i == 1 || i == n / 2 + 1) && ((j > 1) && (j < n))) || ((i > 1 && i < n) && (j == 1)) || ((i > 1 && i < x) && (j == n)) || (i > x && j == r)) {
                printf("*");
            } else {
                printf(" ");
            }
        }
        printf("\n");
        r += 1;
    }
}

// Function to print shape S
void print_S() {
    int n = 5; // Set an odd size
    int i, j;
    int x = n / 2 + 1;
    for (i = 1; i <= n; i++) {
        for (j = 1; j <= n; j++) {
            if ((i == 1 || i == x || i == n) && (j > 1 && j < n) || (j == 1 && (i > 1 && i < x)) || (j == n && (i > x && i < n))) {
                printf("*");
            } else {
                printf(" ");
            }
        }
        printf("\n");
    }
}

// Function to print shape T
void print_T() {
    int n = 5; // Set a default size
    int i, j;
    int x = n / 2 + 1;
    for (i = 1; i <= n; i++) {
        for (j = 1; j <= n; j++) {
            if (i == 1 || j == x) {
                printf("*");
            } else {
                printf(" ");
            }
        }
        printf("\n");
    }
}

// Function to print shape U
void print_U() {
    int n = 5; // Set a default size
    int i, j;
    for (i = 1; i <= n; i++) {
        for (j = 1; j <= n; j++) {
            if (((j == 1 || j == n) && i < n) || ((i == n) && (j > 1 && j < n))) {
                printf("*");
            } else {
                printf(" ");
            }
        }
        printf("\n");
    }
}

// Function to print shape V
void print_V() {
    int n = 5; // Set a default size
    int i, j;
    int x = n + n - 1;
    for (i = 1; i <= n; i++) {
        for (j = 1; j <= n + n; j++) {
            if (i == j || (j == x && i < n)) {
                printf("*");
            } else {
                printf(" ");
            }
        }
        printf("\n");
        x -= 1;
    }
}

// Function to print shape W
void print_W() {
    int n = 5; // Set an odd size
    int i, j;
    for (i = 1; i <= n; i++) {
        for (j = 1; j <= n; j++) {
            if (j == 1 || j == n || (i > n / 2 && i == j)) {
                printf("*");
            } else if (i > n / 2 + 1 && j == n - i + 1) {
                printf("*");
            } else {
                printf(" ");
            }
        }
        printf("\n");
    }
}

// Function to print shape X
void print_X() {
    int n = 5; // Set a default size
    int i, j;
    int x = n;
    for (i = 1; i <= n; i++) {
        for (j = 1; j <= n; j++) {
            if (i == j || (j == x)) {
                printf("*");
            } else {
                printf(" ");
            }
        }
        printf("\n");
        x -= 1;
    }
}

// Function to print shape Y
void print_Y() {
    int n = 5; // Set an odd size
    int i, j;
    for (i = 1; i <= n; i++) {
        for (j = 1; j <= n; j++) {
            if ((i > n / 2 && j == n / 2 + 1) || (i < n / 2 + 1 && i == j)) {
                printf("*");
            } else if (i < n / 2 + 1 && j == n - i + 1) {
                printf("*");
            } else {
                printf(" ");
            }
        }
        printf("\n");
    }
}

// Function to print shape Z
void print_Z() {
    int n = 5; // Set an odd size
    int i, j;
    for (i = 1; i <= n; i++) {
        for (j = 1; j <= n; j++) {
            if (i == 1 || i == n) {
                printf("*");
            } else if (j == n - i + 1) {
                printf("*");
            } else {
                printf(" ");
            }
        }
        printf("\n");
    }
}

// Function to print shape 1
void print_1() {
    int n = 5; // Set a default size
    int i, j;
    int s = n / 2 + 1;
    for (i = 1; i <= n; i++) {
        for (j = 1; j <= n; j++) {
            if (i == n || j == n / 2 + 1 || (i < n / 2 + 1 && j == s)) {
                printf("*");
            } else {
                printf(" ");
            }
        }
        printf("\n");
        s -= 1;
    }
}

// Function to print shape 2
void print_2() {
    int n = 5; // Set a default size
    int i, j;
    for (i = 1; i <= n; i++) {
        for (j = 1; j <= n; j++) {
            if ((i == 1 || i == n / 2 + 1 || i == n) && (j > 1 && j < n) || (j == 1 && i > n / 2 + 1 && i < n) || (j == n && i > 1 && i < n / 2 + 1)) {
                printf("*");
            } else {
                printf(" ");
            }
        }
        printf("\n");
    }
}

// Function to print shape 3
void print_3() {
    int n = 5; // Set a default size
    int i, j;
    for (i = 1; i <= n; i++) {
        for (j = 1; j <= n; j++) {
            if ((i == 1 || i == n / 2 + 1 || i == n) && (j > 1 && j < n) || (j == n && i > n / 2 + 1 && i < n) || (j == n && i > 1 && i < n / 2 + 1)) {
                printf("*");
            } else {
                printf(" ");
            }
        }
        printf("\n");
    }
}

// Function to print shape 4
void print_4() {
    int n = 5; // Set a default size
    int i, j;
    for (i = 1; i <= n; i++) {
        for (j = 1; j <= n; j++) {
            if (i == n / 2 + 1 && (j > 1 && j < n) || (j == n && i > n / 2 + 1) || ((j == 1 || j == n) && i < n / 2 + 1)) {
                printf("*");
            } else {
                printf(" ");
            }
        }
        printf("\n");
    }
}

// Function to print shape 4 (2nd version)
void print_4_v2() {
    int n = 5; // Set a default size
    int i, j, s;
    s = n;
    for (i = 1; i <= n; i++) {
        for (j = 1; j <= n; j++) {
            if (j == s || i == n / 2 + 1 || j == n) {
                printf("*");
            } else {
                printf(" ");
            }
        }
        printf("\n");
        s -= 2;
    }
}

// Function to print shape 5
void print_5() {
    int n = 5; // Set a default size
    int i, j;
    for (i = 1; i <= n; i++) {
        for (j = 1; j <= n; j++) {
            if ((i == 1 || i == n / 2 + 1 || i == n) && (j > 1 && j < n) || (j == n && (i > n / 2 + 1 && i < n)) || (j == 1 && (i > 1 && i < n / 2 + 1))) {
                printf("*");
            } else {
                printf(" ");
            }
        }
        printf("\n");
    }
}

// Function to print shape 5 (2nd version)
void print_5_v2() {
    int n = 5; // Set a default size
    int i, j;
    for (i = 1; i <= n; i++) {
        for (j = 1; j <= n; j++) {
            if (((i == 1 || i == n / 2 + 1 || i == n) && j < n) || (j == n && (i > n / 2 + 1 && i < n)) || (j == 1 && (i > 1 && i < n / 2 + 1))) {
                printf("*");
            } else {
                printf(" ");
            }
        }
        printf("\n");
    }
}

// Function to print shape 6
void print_6() {
    int n = 5; // Set a default size
    int i, j;
    for (i = 1; i <= n; i++) {
        for (j = 1; j <= n; j++) {
            if ((i == 1 || i == n / 2 + 1 || i == n) && (j > 1 && j < n) || ((j == 1 || j == n) && (i > n / 2 + 1 && i < n)) || (j == 1 && (i > 1 && i < n / 2 + 1))) {
                printf("*");
            } else {
                printf(" ");
            }
        }
        printf("\n");
    }
}

// Function to print shape 6 (2nd version)
void print_6_v2() {
    int n = 5; // Set a default size
    int i, j;
    for (i = 1; i <= n; i++) {
        for (j = 1; j <= n; j++) {
            if ((i == 1 || i == n / 2 + 1 || i == n) && (j > 1 && j < n) || (j == n && (i > n / 2 + 1 && i < n)) || (j == 1 && (i > 1 && i < n))) {
                printf("*");
            } else {
                printf(" ");
            }
        }
        printf("\n");
    }
}

// Function to print shape 7
void print_7() {
    int n = 5; // Set a default size
    int i, j;
    for (i = 1; i <= n; i++) {
        for (j = 1; j <= n; j++) {
            if ((i == 1 && j < n) || (i > 1 && j == n)) {
                printf("*");
            } else {
                printf(" ");
            }
        }
        printf("\n");
    }
}

// Function to print shape 7 (2nd version)
void print_7_v2() {
    int n = 5; // Set a default size
    int i, j, s;
    s = n;
    for (i = 1; i <= n; i++) {
        for (j = 1; j <= n; j++) {
            if (i == 1 || i == n / 2 + 1 || j == s) {
                printf("*");
            } else {
                printf(" ");
            }
        }
        printf("\n");
        s -= 1;
    }
}

// Function to print shape 8
void print_8() {
    int n = 5; // Set a default size
    int i, j;
    for (i = 1; i <= n; i++) {
        for (j = 1; j <= n; j++) {
            if ((i == 1 || i == n / 2 + 1 || i == n) && (j > 1 && j < n) || ((j == 1 || j == n) && (i > n / 2 + 1 && i < n)) || ((j == 1 || j == n) && (i > 1 && i < n / 2 + 1))) {
                printf("*");
            } else {
                printf(" ");
            }
        }
        printf("\n");
    }
}

// Function to print shape 9
void print_9() {
    int n = 5; // Set a default size
    int i, j;
    for (i = 1; i <= n; i++) {
        for (j = 1; j <= n; j++) {
            if ((i == 1 || i == n / 2 + 1 || i == n) && (j > 1 && j < n) || (j == n && (i > n / 2 + 1 && i < n)) || ((j == 1 || j == n) && (i > 1 && i < n / 2 + 1))) {
                printf("*");
            } else {
                printf(" ");
            }
        }
        printf("\n");
    }
}

// Function to print shape 9 (2nd version)
void print_9_v2() {
    int n = 5; // Set a default size
    int i, j;
    for (i = 1; i <= n; i++) {
        for (j = 1; j <= n; j++) {
            if ((i == 1 || i == n / 2 + 1 || i == n) && (j > 1 && j < n) || (j == n && (i > 1 && i < n)) || (j == 1 && (i > 1 && i < n / 2 + 1))) {
                printf("*");
            } else {
                printf(" ");
            }
        }
        printf("\n");
    }
}


int main() {
    printf("--- Shape A ---\n");
    print_A();
    printf("\n--- Shape B ---\n");
    print_B();
    printf("\n--- Shape C ---\n");
    print_C();
    printf("\n--- Shape D ---\n");
    print_D();
    printf("\n--- Shape E ---\n");
    print_E();
    printf("\n--- Shape F ---\n");
    print_F();
    printf("\n--- Shape G ---\n");
    print_G();
    printf("\n--- Shape H ---\n");
    print_H();
    printf("\n--- Shape I ---\n");
    print_I();
    printf("\n--- Shape J ---\n");
    print_J();
    printf("\n--- Shape K ---\n");
    print_K();
    printf("\n--- Shape L ---\n");
    print_L();
    printf("\n--- Shape M ---\n");
    print_M();
    printf("\n--- Shape N ---\n");
    print_N();
    printf("\n--- Shape O ---\n");
    print_O();
    printf("\n--- Shape P ---\n");
    print_P();
    printf("\n--- Shape Q ---\n");
    print_Q();
    printf("\n--- Shape R ---\n");
    print_R();
    printf("\n--- Shape S ---\n");
    print_S();
    printf("\n--- Shape T ---\n");
    print_T();
    printf("\n--- Shape U ---\n");
    print_U();
    printf("\n--- Shape V ---\n");
    print_V();
    printf("\n--- Shape W ---\n");
    print_W();
    printf("\n--- Shape X ---\n");
    print_X();
    printf("\n--- Shape Y ---\n");
    print_Y();
    printf("\n--- Shape Z ---\n");
    print_Z();
    printf("\n--- Shape 1 ---\n");
    print_1();
    printf("\n--- Shape 2 ---\n");
    print_2();
    printf("\n--- Shape 3 ---\n");
    print_3();
    printf("\n--- Shape 4 ---\n");
    print_4();
    printf("\n--- Shape 4 (2nd) ---\n");
    print_4_v2();
    printf("\n--- Shape 5 ---\n");
    print_5();
    printf("\n--- Shape 5 (2nd) ---\n");
    print_5_v2();
    printf("\n--- Shape 6 ---\n");
    print_6();
    printf("\n--- Shape 6 (2nd) ---\n");
    print_6_v2();
    printf("\n--- Shape 7 ---\n");
    print_7();
    printf("\n--- Shape 7 (2nd) ---\n");
    print_7_v2();
    printf("\n--- Shape 8 ---\n");
    print_8();
    printf("\n--- Shape 9 ---\n");
    print_9();
    printf("\n--- Shape 9 (2nd) ---\n");
    print_9_v2();

    return 0;
}
