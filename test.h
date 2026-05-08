#include <limits.h>
#include <stddef.h>
#include <stdio.h>
#include <stdlib.h>
// #include "C:\\LegacyApp\\cmocka\\include\\cmocka.h"

#ifndef TEST_H
#define TEST_H

int run_tests_main(void);

#define MAX_SIZE 100

void merge(int arr[], int left, int mid, int right);
void mergeSort(int arr[], int left, int right);

#endif	// TEST_H
