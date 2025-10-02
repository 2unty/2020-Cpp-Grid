#pragma once
#include <string>
class DrawGrid {
public:
    int Gridsize;
    int X;
    int Y;
    void cdraw() {
        int x1 = Gridsize + 1;
        int split = x1 / 2;
        bool yevennum = true;
        bool found = false;
        int xnum;
        int ynum = Gridsize / 2;
        for (int i = 0; i < x1 * 2; i++) {
            xnum = -(Gridsize / 2);
            for (int k = 0; k < x1; k++) {
                if (i == split * 2) {
                    printf("* * ");
                }
                else if (i == split * 2 + 1) {
                    printf("* * ");
                }
                else if (i == split * 2 + 2) {
                    if (xnum < 0) {
                        if (xnum < -9) {
                            printf("%d ", xnum);
                        }
                        else {
                            printf(" %d ", xnum);
                        }
                    }
                    else if (xnum == 0) {
                        printf("* * ");
                    }
                    else if (xnum > 9) {
                        printf(" %d ", xnum);
                    }
                    else {
                        printf("  %d ", xnum);
                    }
                }
                else if (k == split) {
                    printf("* * ");
                }
                else if (k == split + 1) {
                    if (yevennum) {
                        if (ynum == 0) {
                            ynum = -1;
                        }
                        printf("%d", ynum);
                        ynum--;
                        yevennum = false;
                    }
                    else if (not yevennum) {
                        yevennum = true;
                    }
                }
                else if (xnum == X + 1 and ynum == Y - 1 and not found) {
                    printf(" +  ");
                    found = true;
                }
                else {
                    printf("    ");
                }
                xnum++;
            }
            printf("\n");
        }
    }
};
