#include <stdio.h>

in main()
{
    struct branch
    {
        char bran[10] = "Bangalore";
        int bpin = 431;
    };
    struct headoff
    {
        char head[10];
        int hpin;
    };
    struct headoff h = {"Chennai", 01};
    struct branch b;
    printf("HO-%s\n-%d", h.head, h.hpin);
    printf("BO-%s\nbpin-%d", b.bran, b.bpin);
}