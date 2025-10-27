typedef enum {
    NODE_NUMBER,
    NODE_OP
} NodeType;

typedef enum {
    OP_ADD,
    OP_SUB,
    OP_MUL,
    OP_DIV
} ArithmeticOperatorType;

typedef struct AST {
    NodeType type;
    union {
        struct {
        	int value;
        } number;

        struct {
            OperatorType op;
            struct AST* left;
            struct AST* right;
        } operation;
    };
} AST;
