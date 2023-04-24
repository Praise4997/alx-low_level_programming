#include <unistd.h>
#define MSG "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n"

int main(void)
{
    write(STDERR_FILENO, MSG, sizeof(MSG) - 1);
    return (1);
}

