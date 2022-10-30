#include <iostream>
#include "sort.h"
#define CATCH_CONFIG_MAIN
#include "catch.hpp"
using namespace std;


// TEST 1
int a_select[4] = {1,5,3,4};
int a_buble[4] = {1,5,3,4};
int a_ins[4] = {1,5,3,4};
int a_merge[4] = {1,5,3,4};
int a_quick[4] = {1,5,3,4};

int answer_1[4] = {1,3,4,5};

int* test_standard_input()
{
    sort::SortLibrary obj;
    obj.selectionSort(a_select, 4);
    obj.bubbleSort(a_buble, 4);
    obj.insertionSort(a_ins, 4);
    obj.mergeSort(a_merge, 4);
    obj.quickSort(a_quick, 4);
    return 0;
}


TEST_CASE("Oridinary input", "[ALL]")
{
    test_standard_input();
    CHECK(std::equal(std::begin(a_select), std::end(a_select), std::begin(answer_1)));
    CHECK(std::equal(std::begin(a_buble), std::end(a_buble), std::begin(answer_1)));
    CHECK(std::equal(std::begin(a_ins), std::end(a_ins), std::begin(answer_1)));
    CHECK(std::equal(std::begin(a_merge), std::end(a_merge), std::begin(answer_1)));
    CHECK(std::equal(std::begin(a_quick), std::end(a_quick), std::begin(answer_1)));
}

// TEST 2
int a_select_2[1] = {1};
int a_buble_2[1] = {1};
int a_ins_2[1] = {1};
int a_merge_2[1] = {1};
int a_quick_2[1] = {1};

int answer_2[1] = {1};

void test_length_one()
{
    sort::SortLibrary obj;
    obj.selectionSort(a_select_2, 1);
    obj.bubbleSort(a_buble_2, 1);
    obj.insertionSort(a_ins_2, 1);
    obj.mergeSort(a_merge_2, 1);
    obj.quickSort(a_quick_2, 1);
}


TEST_CASE("Array length one", "[ALL]")
{
    test_length_one();
    CHECK(std::equal(std::begin(a_select_2), std::end(a_select_2), std::begin(answer_2)));
    CHECK(std::equal(std::begin(a_buble_2), std::end(a_buble_2), std::begin(answer_2)));
    CHECK(std::equal(std::begin(a_ins_2), std::end(a_ins_2), std::begin(answer_2)));
    CHECK(std::equal(std::begin(a_merge_2), std::end(a_merge_2), std::begin(answer_2)));
    CHECK(std::equal(std::begin(a_quick_2), std::end(a_quick_2), std::begin(answer_2)));
}



// TEST 3
int a_select_3[1] = {0};
int a_buble_3[1] = {0};
int a_ins_3[1] = {0};
int a_merge_3[1] = {0};
int a_quick_3[1] = {0};

int answer_3[1] = {0};

void test_zero_inp()
{
    sort::SortLibrary obj;
    obj.selectionSort(a_select_3, 1);
    obj.bubbleSort(a_buble_3, 1);
    obj.insertionSort(a_ins_3, 1);
    obj.mergeSort(a_merge_3, 1);
    obj.quickSort(a_quick_3, 1);
}


TEST_CASE("Zero Input", "[ALL]")
{
    test_zero_inp();
    CHECK(std::equal(std::begin(a_select_3), std::end(a_select_3), std::begin(answer_3)));
    CHECK(std::equal(std::begin(a_buble_3), std::end(a_buble_3), std::begin(answer_3)));
    CHECK(std::equal(std::begin(a_ins_3), std::end(a_ins_3), std::begin(answer_3)));
    CHECK(std::equal(std::begin(a_merge_3), std::end(a_merge_3), std::begin(answer_3)));
    CHECK(std::equal(std::begin(a_quick_3), std::end(a_quick_3), std::begin(answer_3)));
}

