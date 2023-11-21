/******************************************************************************************
 * Data Structures in C++
 * ISBN: 7-302-33064-6 & 7-302-33065-3 & 7-302-29652-2 & 7-302-26883-3
 * Junhui DENG, deng@tsinghua.edu.cn
 * Computer Science & Technology, Tsinghua University
 * Copyright (c) 2003-2023. All rights reserved.
 ******************************************************************************************/

#pragma once

/******************************************************************************************
 * 沿关键码k的试探链，找到与之匹配的桶；实践中有多种试探策略可选，这里仅以线性试探为例
 ******************************************************************************************/
template <typename K, typename V> Rank Hashtable<K, V>::probe4Hit( const K& k ) {
   for ( Rank r = hashCode( k ) % M;; r = ( r + 1 ) % M ) //按除余法确定起点，线性试探
      if ( !ht[r] && !removed->test( r ) || ht[r] && ( k == ht[r]->key ) ) //跳过懒惰删除的桶
         return r; //只要N+L < M，迟早能终止
}