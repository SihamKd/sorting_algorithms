#ifndef LIST_H
#define LIST_H

typedef struct listint_s
{
const int n;
struct listint_s *prev;
struct listint_s *next;
} listint_t;


#endif /* LIST_H */
