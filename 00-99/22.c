#include <stdio.h>
#include <assert.h>
#include <stdlib.h>
#include <string.h>

int func(const void *lhs, const void *rhs)
{
    return strcmp((const char *)lhs, (const char *)rhs);
}

int main(void)
{
    FILE *f = fopen("./ext/names.txt", "r");
    assert(f);
    char *buf = 0;
    // get file length
    fseek(f, 0, SEEK_END);
    long len = ftell(f);
    // printf("%ld\n", len);
    rewind(f);
    // read to buffer
    buf = malloc(len);
    assert(buf);
    if (fread(buf, 1, len, f) < (unsigned long)len) return 1;
    fclose(f);
    char *names[5163];
    char **p;
    for (p = names; (*p = strsep(&buf, "\",\"")) != NULL;)
        if (**p != '\0')
            if (++p >= &names[5163])
                break;
    // printf("%s\n", names[1]);
    // free(buf);
    // sort
    qsort(names, 5163, sizeof(char *), func);
    for (int i = 0; i < 10; ++i) printf("%s\n", names[i]);
    return 0;
}
