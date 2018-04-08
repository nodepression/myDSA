#pragma once

typedef int Rank; //��
#define DEFAULT_CAPACITY  3 //Ĭ�ϵĳ�ʼ������ʵ��Ӧ���п�����Ϊ����



template <typename T> class Vector {
protected:
	Rank _size;//��ģ
	int _capacity;//����
	T* _elem; //������

	void copyFrom(T const *A, Rank lo, Rank hi);//������������A[lo, hi)
	void expand(); //�ռ䲻��ʱ����
	void shrink(); //װ�����ӹ�Сʱѹ��
	
	


public:
	// ���캯��
	Vector(int c = DEFAULT_CAPACITY, int s = 0, T v = 0) {//����Ϊc����ģΪs������Ԫ�س�ʼΪv
		_elem = new T[_capacity = c];
		for (_size = 0; _size < s; _elem[_size++] = v); // s <= c
	}
	Vector(T const *A, Rank n) {//�������帴��
		copyFrom(A, 0, n);
	}
	Vector(T const *A, Rank lo, Rank hi) { //�������帴��
		copyFrom(A, lo, hi); //���临��
	}
	Vector(Vector<T> const &v) { //�������帴��,ע���Ǹ��Ƶ����ݣ�����ķ�������Ϊ�����ݶ����񣨴��������
		copyFrom(v._elem, 0, v._size);
	}
	Vector(Vector<T> const &v, Rank lo, Rank hi) {  //�������临��
		copyFrom(v._elem, lo, hi);
	}
	// ��������
	~Vector() {
		delete[] _elem;    //�ͷ��ڲ��ռ�
	}
	// ֻ�����ʽӿ�
	Rank size() const { return _size; } //��ģ
	Rank bubble(Rank lo, Rank hi); //ɨ�轻��

	void bubbleSort(Rank lo, Rank hi); //���������㷨
	Rank max(Rank lo, Rank hi); //ѡȡ���Ԫ��
// ��д���ʽӿ�
	T& operator[] (Rank r) const; //�����±������������������������ʽ���ø�Ԫ��
	Vector<T>& operator= (Vector<T> const&); //���ظ�ֵ���������Ա�ֱ�ӿ�¡����

// ����
	void traverse(void(*) (T&)); //������ʹ�ú���ָ�룬ֻ����ֲ����޸ģ�
	template <typename VST> void traverse(VST&); //������ʹ�ú������󣬿�ȫ�����޸ģ�

};
#include "implementation.h"