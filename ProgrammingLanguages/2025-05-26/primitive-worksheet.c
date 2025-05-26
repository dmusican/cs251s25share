
typedef struct SchemeVal {
    objectType type;
    union {
        ...
        struct SchemeVal *(*pf)(struct SchemeVal *);
    };
} SchemeVal;

SchemeVal *primitiveExp(SchemeVal *args) {
   // check that args has length one and car(args) is numerical
   // assume that car(args) is of type double, should check that as well

   SchemeVal *result = talloc(sizeof(SchemeVal));

   result->type = DOUBLE_TYPE;

   // Uses built-in C function exp

   result->d = exp(car(args)->d);
   return result;
}

void bind(char *name, SchemeVal *(*function)(SchemeVal *), Frame *frame) {
    // Add primitive functions to top-level bindings list
    SchemeVal *value = talloc(sizeof(SchemeVal));

    value->type = PRIMITIVE_TYPE;

    value->pf = function;

    // Your code will differ from each other some on the following;
    // it adds a binding to a frame; can leave that out here
    frame->bindings = ....;
}

void interpret(SchemeVal *tree) {

    // Make top-level bindings list
    Frame *frame = talloc(sizeof(Frame));
    frame->bindings = makeEmpty();
    frame->parent = NULL;

    bind("exp", primitiveExp, frame);

    // ...
}
