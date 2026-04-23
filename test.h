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


double add(double a, double b);
double subtract(double a, double b);
double multiply(double a, double b);
double divide(double a, double b);
double calculate(double a, double b, char operator);
TreeNode* createTreeNode(int val);
TreeNode* insertNode(TreeNode* rootNode, int val);
void merge(int arr[], int left, int mid, int right);
void mergeSort(int arr[], int left, int right);
void swap(int *a, int *b);
int partition(int arr[], int low, int high);
void quickSort(int arr[], int low, int high);
void bubbleSort(int arr[], int n);
void heapify(int arr[], int n, int i);
void heapSort(int arr[], int n);
void permute(char *str, int left, int right);
void insertionSort(int arr[], int n);

#endif	// TEST_H
