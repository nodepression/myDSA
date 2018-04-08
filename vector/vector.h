#pragma once

typedef int Rank; //秩
#define DEFAULT_CAPACITY  3 //默认的初始容量（实际应用中可设置为更大）



template <typename T> class Vector {
protected:
	Rank _size;//规模
	int _capacity;//容量
	T* _elem; //数据区

	void copyFrom(T const *A, Rank lo, Rank hi);//复制数组区间A[lo, hi)
	void expand(); //空间不足时扩容
	void shrink(); //装填因子过小时压缩
	
	


public:
	// 构造函数
	Vector(int c = DEFAULT_CAPACITY, int s = 0, T v = 0) {//容量为c、规模为s、所有元素初始为v
		_elem = new T[_capacity = c];
		for (_size = 0; _size < s; _elem[_size++] = v); // s <= c
	}
	Vector(T const *A, Rank n) {//数组整体复制
		copyFrom(A, 0, n);
	}
	Vector(T const *A, Rank lo, Rank hi) { //数组整体复制
		copyFrom(A, lo, hi); //区间复制
	}
	Vector(Vector<T> const &v) { //向量整体复制,注意是复制的数据（对象的方法都是为了数据而服务（大多数））
		copyFrom(v._elem, 0, v._size);
	}
	Vector(Vector<T> const &v, Rank lo, Rank hi) {  //向量区间复制
		copyFrom(v._elem, lo, hi);
	}
	// 析构函数
	~Vector() {
		delete[] _elem;    //释放内部空间
	}
	// 只读访问接口
	Rank size() const { return _size; } //规模
	Rank bubble(Rank lo, Rank hi); //扫描交换

	void bubbleSort(Rank lo, Rank hi); //起泡排序算法
	Rank max(Rank lo, Rank hi); //选取最大元素
// 可写访问接口
	T& operator[] (Rank r) const; //重载下标操作符，可以类似于数组形式引用各元素
	Vector<T>& operator= (Vector<T> const&); //重载赋值操作符，以便直接克隆向量

// 遍历
	void traverse(void(*) (T&)); //遍历（使用函数指针，只读或局部性修改）
	template <typename VST> void traverse(VST&); //遍历（使用函数对象，可全局性修改）

};
#include "implementation.h"