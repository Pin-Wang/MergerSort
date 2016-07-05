#ifndef Merge_h
#define Merge_h

#include<iostream>
#include<vector>
#include<queue>

typedef int EleType;
using namespace std;

class Merger{
private:
public:
	//合并子表
	void merge(EleType a[],int l,int mid,int r);
	//归并排序是稳定的排序，时间复杂度均为O(nlog2n)
	void merge_sort(EleType a[],int l,int r);
	void print(EleType a[],int n );
};

//合并子表
	void Merger::merge(EleType a[],int l,int mid,int r){
		queue<EleType> q;
		int i=l;
		int j=mid;
		//最少有2个元素
		if(l<r){
			while(i<mid&&j<=r){
				if(a[i]<=a[j]){
					q.push(a[i]);
					i++;
				}
				else if(a[i]>a[j]){
					q.push(a[j]);
					j++;
				}
			}
			//将剩余的元素push到queue中
			while(i<mid){
				q.push(a[i++]);
			}
			while(j<=r){
				q.push(a[j++]);
			}
			//将queue中元素pop到原是数组中
			int k=l;
			while(k<=r){
				a[k++]=q.front();
				q.pop();
			}
		}
	}

//归并排序
	void Merger::merge_sort(EleType a[],int l,int r){
		//最少有2个元素
		if(l<r){
			int mid=(l+r)/2+1;
			//分解为2个表
			//cout<<l<<" "<<mid-1<<",";
			//cout<<mid<<" "<<r<<endl;
			merge_sort(a,l,mid-1);
			merge_sort(a,mid,r);

			//cout<<l<<mid<<r<<endl;
			merge(a,l,mid,r);
		}
	}


//输出数组元素
void Merger::print(EleType a[],int n){
	for(int i=0;i<n;i++){
		cout<<a[i]<<" ";
	}
}

#endif
