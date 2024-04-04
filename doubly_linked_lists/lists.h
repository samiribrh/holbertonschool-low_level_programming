#ifndef LISTS_H_
#define LISTS_H_

typedef struct dlistint_s
{
    int n;
    struct dlistint_s *prev;
    struct dlistint_s *next;
} dlistint_t;

int _putchar(char c);
size_t print_dlistint(const dlistint_t *h);

#endif
