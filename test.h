#include <limits.h>
#include <stddef.h>
#include <stdio.h>
#include <stdlib.h>
// #include "C:\\LegacyApp\\cmocka\\include\\cmocka.h"

#ifndef TEST_H
#define TEST_H

int run_tests_main(void);

#define MAX_SIZE 100

struct TreeNode {
    int value;
    struct TreeNode* leftChild;
    struct TreeNode* rightChild;
};

/* Function declarations */

typedef struct {
    int items[MAX_SIZE];
    int top;
} Stack;


double add(double a, double b);
double subtract(double a, double b);
double multiply(double a, double b);
double divide(double a, double b);
double calculate(double a, double b, char operator);
struct TreeNode* createTreeNode(int val);
struct TreeNode* insertNode(struct TreeNode* rootNode, int val);

#endif	// TEST_H
