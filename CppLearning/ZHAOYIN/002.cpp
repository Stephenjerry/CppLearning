#include<iostream>
#include<algorithm>
#define MAX 1024*32

a[MAX]; 
// ����˼�룺������a���洢1��N�ĺͣ�����a[i] = 1+2+3....+n;a[j] = 1+2+3+...+j
// Ȼ�����a[j] - a[i] ==n ��i��j����Ҫ������У����У����ܰ������ֵ�����ģ�j-i)��Ӧ����� 
using namespace std;

int main(){
	
	int n;
	cin>>n;
	for(int i=0;i<MAX;i++){
		for(int j=1;j<=i;j++){
			a[i] +=j;
		}
	}
	
	int max_length = 0;
	int low = 0;
	int high = 0;
	for(int i=0;i<MAX;i++){
		for(int j=i;j<MAX;j++){
			if(a[j]-a[i]==n){
				if(max_length<(j-i)){
					low = i;
					high = j;
					max_length = (j-i);
				}
			}
		}
	}
	
	cout<<"n = "<<;
	for(int i=low;i<high;i++){
		cout<<i<<"+";
	}
	cout<<high;
	int n;
	return 0;	
} 
