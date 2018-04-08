template <typename T> T& Vector<T>::operator[] (Rank r) const //重载下标操作符
{
	return _elem[r];
} // assert: 0 <= r < _size#pragma once


template <typename T> Vector<T>& Vector<T>::operator= (Vector<T> const& V) { //重载
	if (_elem) delete[] _elem; //释放原有内容
	copyFrom(V._elem, 0, V.size()); //整体复制
	return *this; //返回当前对象的引用，以便链式赋值
}

//
////重载下标操作符
//template <typename T>
//T& Vector<T>::operator[](Rank r) const { //为什么要加const，为什么返回值要是引用
//	return _elem[r];
//}
//
////重载赋值操作符
//template <typename T>
//Vector<T>& Vector<T>::operator=(Vector<T> const &v) {
//	if (_elem)
//		delete[] _elem;//释放原有内容
//	copyFrom(V._elem, 0, v.size());//整体复制
//
//	reteurn *this;//返回当前对象的引用，以便链式赋值
//}
