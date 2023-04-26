#ifndef _STDIO_H
#define _STDIO_H

/* Function declarations */
int getchar(void);
int putchar(int c);
int printf(const char *format, ...);
int scanf(const char *format, ...);

/* Constant definitions */
#define stdin  ((FILE *)0)
#define stdout ((FILE *)1)
#define stderr ((FILE *)2)

/* Type definitions */
typedef struct {
    // Implementation-specific members
} FILE;

#endif /* _STDIO_H */

