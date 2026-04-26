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


void merge(int arr[], int left, int mid, int right);
void mergeSort(int arr[], int left, int right);
void bubbleSort(int arr[], int n);
void heapify(int arr[], int n, int i);
void heapSort(int arr[], int n);
void swap(int *a, int *b);

#endif	// TEST_H
