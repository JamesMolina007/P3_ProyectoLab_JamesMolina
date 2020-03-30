#include <ncurses.h>

int main(void)
{
    int i = 0;

    initscr();

    scrollok(stdscr,TRUE);

    while(1)
    {
        printw("%d - lots and lots of lines flowing down the terminal\n", i);
        ++i;
        refresh();
        getch();
    }

    endwin();
    return 0;
}