#pragma once
//template <typename T> //��������������
//void Vector<T>::bubbleSort(Rank lo, Rank hi) //assert: 0 <= lo < hi <= size
//{
//	while (lo < (hi = bubble(lo, hi)));
//} //������ɨ�轻����ֱ��ȫ��


//template <typename T>
//Rank Vector<T>::max(Rank lo, Rank hi) { //��[lo, hi]���ҳ������
//	Rank mx = hi;
//	while (lo < hi--) //����ɨ��
//		if (_elem[hi] > _elem[mx]) //���ϸ�Ƚ�
//			mx = hi; //������max�ж��ʱ��֤�������ȣ�������֤selectionSort�ȶ�
//	return mx;
//}

//��������������
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

