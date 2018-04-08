#pragma once
//template <typename T> //向量的起泡排序
//void Vector<T>::bubbleSort(Rank lo, Rank hi) //assert: 0 <= lo < hi <= size
//{
//	while (lo < (hi = bubble(lo, hi)));
//} //逐趟做扫描交换，直至全序


//template <typename T>
//Rank Vector<T>::max(Rank lo, Rank hi) { //在[lo, hi]内找出最大者
//	Rank mx = hi;
//	while (lo < hi--) //逆向扫描
//		if (_elem[hi] > _elem[mx]) //且严格比较
//			mx = hi; //故能在max有多个时保证后者优先，进而保证selectionSort稳定
//	return mx;
//}

//向量的起泡排序
template <typename T>
void Vector<T>::bubbleSort(Rank lo,Rank hi){
	while (lo < (hi = bubble(lo, hi)));
}


template <typename T>
Rank Vector<T>::max(Rank lo, Rank hi) {
	Rank max = hi;
	while (lo<hi--)
	{
		if (_elem[hi] > _elem[max]) {
			max = hi;
		}
	}

	return max;
}

