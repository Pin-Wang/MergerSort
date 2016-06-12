#ifndef Insert_h
#define Insert_h
#include<iostream>

typedef int EleType;
using namespace std;

class Insert{
private:
public:
	//直接插入排序，稳定的，最好情况时间复杂度可达O(nlogn)
	void insert_direct(EleType a[],int n);
	//希尔排序，不是稳定的，时间复杂度是O(n*n), O(n^1.5),O(N	)
	void insert_hill(EleType a[],int n);
	void print(EleType a[],int n );
};

//直接插入排序
void Insert::insert_direct(EleType a[],int n){
	for(int i=1;i<n;i++){
		EleType temp=a[i];
		int j=i-1;
		while(temp<a[j]&&j>=0){
			a[j+1]=a[j];
			j--;
		}
		a[j+1]=temp;
	}
}

//希尔排序
void Insert::insert_hill(EleType a[],int n){
	//步长从长度的一半开始，一直到1
	for(int len=n/2;len>=1;len/=2){
		for(int i=len;i<n;i+=len){
			EleType temp=a[i];
			int j=i-len;
			while(temp<a[j]&&j>=0){
				a[j+len]=a[j];
				j-=len;
			}
			a[j+len]=temp;
		}
	}
}

//输出数组元素
void Insert::print(EleType a[],int n){
	for(int i=0;i<n;i++){
		cout<<a[i]<<" ";
	}
}

#endif
