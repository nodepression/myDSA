//template <typename T> Rank Vector<T>::bubble(Rank lo, Rank hi) { //һ��ɨ�轻��
//	Rank last = lo; //���Ҳ������Գ�ʼ��Ϊ[lo - 1, lo]
//	while (++lo < hi) //�������ң���һ����������Ԫ��
//		if (_elem[lo - 1] > _elem[lo]) { //��������
//			last = lo; //�������Ҳ������λ�ü�¼����
//			swap(_elem[lo - 1], _elem[lo]); //ͨ������ʹ�ֲ�����
//		}
//	return last; //�������Ҳ�������λ��
//}




//template <typename T> bool Vector<T>::bubble(Rank lo, Rank hi) { //һ��ɨ�轻��
//	bool sorted = true; //���������־
//	while (++lo < hi) //�������ң���һ����������Ԫ��
//		if (_elem[lo - 1] > _elem[lo]) { //��������
//			sorted = false; //��ζ����δ�������򣬲���Ҫ
//			swap(_elem[lo - 1], _elem[lo]); //ͨ������ʹ�ֲ�����
//		}
//	return sorted; //���������־
//}


#include<algorithm>
template <typename T>
Rank Vector<T>::bubble(Rank lo, Rank hi) { //һ��ɨ�轻��
	Rank last = lo;//���Ҳ������Գ�ʼ��Ϊ[lo - 1, lo]

	while(++lo<hi)
	{
		if (_elem[lo - 1] > _elem[lo]) {
			last = lo;
			swap(_elem[lo - 1], _elem[lo]); //ͨ������ʹ�ֲ�����
		}
	}
	return last;//�������Ҳ�������λ��
}


//template <typename T>
//bool Vector<T>::bubble(Rank lo, Rank hi) { //һ��ɨ�轻��
//	bool sorted = true;
//	while (++lo < hi) {
//		if (_elem[lo - 1] < _elem[lo]) {
//			sorted = false;
//			swap(_elem[lo - 1], _elem[lo]);
//		}
//	}
//	return sorted;//���������־
//}