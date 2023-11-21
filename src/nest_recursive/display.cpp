/******************************************************************************************
 * Data Structures in C++
 * ISBN: 7-302-33064-6 & 7-302-33065-3 & 7-302-29652-2 & 7-302-26883-3
 * Junhui DENG, deng@tsinghua.edu.cn
 * Computer Science & Technology, Tsinghua University
 * Copyright (c) 2003-2023. All rights reserved.
 ******************************************************************************************/

#include "nest_stack/nest.h"

/******************************************************************************************
 * 显示表达式片段exp[lo, hi]，与原表达式对齐
 ******************************************************************************************/
void displaySubstring ( const char exp[], Rank lo, Rank hi ) {
   for ( Rank i = 0; i < lo; i++ ) printf ( " " );
   for ( Rank i = lo; i <= hi; i++ ) printf ( "%c", exp[i] );
   printf ( "\n" );
}

/******************************************************************************************
 * 显示表达式扫描进度
 ******************************************************************************************/
void displayProgress ( const char exp[], Rank i, Stack<char> S ) {
// 表达式
   system ( "cls" );
   printf ( "\n%s\n", exp );
   for ( Rank j = 0; j < i; j++ )   printf ( "-" );
   printf ( "^\n\n\n" );
// 栈
   print ( S ); getchar();
}