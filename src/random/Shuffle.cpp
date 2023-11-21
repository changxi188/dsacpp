/******************************************************************************************
 * Data Structures in C++
 * ISBN: 7-302-33064-6 & 7-302-33065-3 & 7-302-29652-2 & 7-302-26883-3
 * Junhui DENG, deng@tsinghua.edu.cn
 * Computer Science & Technology, Tsinghua University
 * Copyright (c) 2003-2023. All rights reserved.
 ******************************************************************************************/

/*DSA*/
#include <iostream>
using namespace std;
#include "Shuffle.h"

void shuffle(int A[], int n)
{                       //将A[0, n)随机打乱
    for (; 1 < n; --n)  //自后向前
        swap(A[rand() % n], A[n - 1]);
}

void shuffle(int A[], int lo, int hi)  //将A[lo, hi)随机打乱
{
    shuffle(A + lo, hi - lo);
}
