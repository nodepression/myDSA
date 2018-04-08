template <typename T> T& Vector<T>::operator[] (Rank r) const //�����±������
{
	return _elem[r];
} // assert: 0 <= r < _size#pragma once


template <typename T> Vector<T>& Vector<T>::operator= (Vector<T> const& V) { //����
	if (_elem) delete[] _elem; //�ͷ�ԭ������
	copyFrom(V._elem, 0, V.size()); //���帴��
	return *this; //���ص�ǰ��������ã��Ա���ʽ��ֵ
}

//
////�����±������
//template <typename T>
//T& Vector<T>::operator[](Rank r) const { //ΪʲôҪ��const��Ϊʲô����ֵҪ������
//	return _elem[r];
//}
//
////���ظ�ֵ������
//template <typename T>
//Vector<T>& Vector<T>::operator=(Vector<T> const &v) {
//	if (_elem)
//		delete[] _elem;//�ͷ�ԭ������
//	copyFrom(V._elem, 0, v.size());//���帴��
//
//	reteurn *this;//���ص�ǰ��������ã��Ա���ʽ��ֵ
//}
