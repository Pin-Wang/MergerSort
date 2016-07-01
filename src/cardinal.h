#ifndef Cardinal_h
#define Cardinal_h
#include<iostream>
#include<vector>

typedef int EleType;
using namespace std;

class Cardinal{
private:
public:
	//得到e ，l位上的数
	int get(int e,int l);
	void cardinal_sort(EleType a[],int n);
	void print(EleType a[],int n );
};

int Cardinal::get(int e,int l){
	int c=1;
	for(int i=1;i<l;i++){
		c*=10;
	}
	return e/c%10;
}

//基数排序
void Cardinal::cardinal_sort(EleType a[],int n){
	int j=0;
	while(true){
		j++;
		bool flag=true;
		//声明二维数组
		vector<int> arr[10];
		//将第一个代表个数的值初始化为0
		for(int k=0;k<10;k++){
			arr[k].push_back(0);
		}
		//遍历数组，求各个数字的j位数字
		for(int i=0;i<n;i++){
			int digit=get(a[i],j);
			if(digit!=0){
				flag=false;
			}
			arr[digit].push_back(a[i]);
			arr[digit][0]++;
		}
		//检查是不是所有位数都已经便遍历过
		if(flag==true){
			break;
		}
		//取出二维数组中的数字到原始数组
		int p=0;
		for(int t=0;t<10;t++){
			for(int r=1;r<=arr[t][0];r++){
				a[p++]=arr[t][r];
			}
		}
	}
}

//输出数组元素
void Cardinal::print(EleType a[],int n){
	for(int i=0;i<n;i++){
		cout<<a[i]<<" ";
	}
}

#endif
