#include <limits.h>
#include <stddef.h>
#include <stdio.h>
#include <stdlib.h>
// #include "C:\\LegacyApp\\cmocka\\include\\cmocka.h"

#ifndef TEST_H
#define TEST_H

int run_tests_main(void);

#define MAX_SIZE 100

typedef struct TreeNode {
    int value;
    struct TreeNode* leftChild;
    struct TreeNode* rightChild;
}TreeNode ;

/* Function declarations */

typedef struct {
    int items[MAX_SIZE];
    int top;
} Stack;


double addit(double a, double b);
double subtractit(double a, double b);
double multiplyit(double a, double b);
double divideit(double a, double b);
double calculateit(double a, double b, char operator);
void merge(int arr[], int left, int mid, int right);
void mergeSort(int arr[], int left, int right);
void swap(int *a, int *b);
int partition(int arr[], int low, int high);
void quickSort(int arr[], int low, int high);

#endif	// TEST_H
