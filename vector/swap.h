#pragma once
template <typename T>
void swap(T &a,T &b) {
	T mid = a;
	a = b;
	b = mid;
}