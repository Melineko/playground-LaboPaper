#include <stdio.h>
#include <stdlib.h>
#include "paper.h"

int main()
{
    init_paper(10,10,10);
    move_right();
	repeat(5) {
        colorize();
        move_down();
    } loop;

    display_paper();

    return 0;
}

