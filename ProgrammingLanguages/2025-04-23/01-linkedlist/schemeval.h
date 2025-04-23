#ifndef _SCHEMEVAL
#define _SCHEMEVAL

typedef enum {
    INT_TYPE, DOUBLE_TYPE, STR_TYPE, CONS_TYPE, EMPTY_TYPE
} objectType;

typedef struct SchemeVal {
    objectType type;
    union {
        int i;
        double d;
        char *s;
        struct {
            struct SchemeVal *car;
            struct SchemeVal *cdr;
        };
    };
} SchemeVal;

#endif
