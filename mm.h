#include <stdio.h>

extern int mm_init (void);
extern void *mm_malloc (size_t size);
extern void *mm_realloc(void *ptr, size_t size);
void mm_free (void *ptr);

static void* find_fit(size_t asize);
static void place(void *bp, size_t asize);
static void *extend_heap(size_t words);

/* 
 * Students work in teams of one or two.  Teams enter their team name, 
 * personal names and login IDs in a struct of this
 * type in their bits.c file.
 */
typedef struct {
    char *teamname;
    char *name1;
    char *name2;
    char *name3;
} team_t;

extern team_t team;