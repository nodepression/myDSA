#pragma once

//template <typename T> void Vector<T>::expand() { //向量空间不足时扩容
//	if (_size < _capacity) return; //尚未满员时，不必扩容,需要扩容的时候说明已经占满了空间
//	if (_capacity < DEFAULT_CAPACITY) _capacity = DEFAULT_CAPACITY; //不低于最小容量
//	T* oldElem = _elem;  _elem = new T[_capacity <<= 1]; //容量加倍
//	for (int i = 0; i < _size; i++)
//		_elem[i] = oldElem[i]; //复制原向量内容（T为基本类型，或已重载赋值操作符'='）
//							   /*DSA*/ //printf("\n_ELEM [%x]*%d/%d expanded and shift to [%x]*%d/%d\n", oldElem, _size, _capacity/2, _elem, _size, _capacity);
//	delete[] oldElem; //释放原空间
//}

template <typename T>
void Vector<T>::expand() { //向量空间不足时扩容
	if (_size < _capacity) //尚未满员时，不必扩容，需要扩容的时候说明已经占满了空间
		return;
	if (_capacity < DDEFAULT_CAPACITY) // 不低于最小容量
		_capacity = DDEFAULT_CAPACITY;//加return?
	T *oldElem = _elem;
	_elem = new T[_capacity <<= 1];//容量加倍

	for (int i = 0; i < _size；i++) {
		_elem[i] = oldElem[i]; //复制原向量内容（T为基本类型，或已重载赋值操作符'='）
	}

	delete[] oldElem; //释放原空间
}