//template <typename T> Rank Vector<T>::bubble(Rank lo, Rank hi) { //一趟扫描交换
//	Rank last = lo; //最右侧的逆序对初始化为[lo - 1, lo]
//	while (++lo < hi) //自左向右，逐一检查各对相邻元素
//		if (_elem[lo - 1] > _elem[lo]) { //若逆序，则
//			last = lo; //更新最右侧逆序对位置记录，并
//			swap(_elem[lo - 1], _elem[lo]); //通过交换使局部有序
//		}
//	return last; //返回最右侧的逆序对位置
//}




//template <typename T> bool Vector<T>::bubble(Rank lo, Rank hi) { //一趟扫描交换
//	bool sorted = true; //整体有序标志
//	while (++lo < hi) //自左向右，逐一检查各对相邻元素
//		if (_elem[lo - 1] > _elem[lo]) { //若逆序，则
//			sorted = false; //意味着尚未整体有序，并需要
//			swap(_elem[lo - 1], _elem[lo]); //通过交换使局部有序
//		}
//	return sorted; //返回有序标志
//}


#include<algorithm>
template <typename T>
Rank Vector<T>::bubble(Rank lo, Rank hi) { //一趟扫描交换
	Rank last = lo;//最右侧的逆序对初始化为[lo - 1, lo]

	while(++lo<hi)
	{
		if (_elem[lo - 1] > _elem[lo]) {
			last = lo;
			swap(_elem[lo - 1], _elem[lo]); //通过交换使局部有序
		}
	}
	return last;//返回最右侧的逆序对位置
}


//template <typename T>
//bool Vector<T>::bubble(Rank lo, Rank hi) { //一趟扫描交换
//	bool sorted = true;
//	while (++lo < hi) {
//		if (_elem[lo - 1] < _elem[lo]) {
//			sorted = false;
//			swap(_elem[lo - 1], _elem[lo]);
//		}
//	}
//	return sorted;//返回有序标志
//}