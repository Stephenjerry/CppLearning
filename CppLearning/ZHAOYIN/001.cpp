#include <iostream>
#include <string>
using namespace std;

void func(float x){
    string str = "abcdefghijklmnopqrstuvwxyz";
    string strRet = "";
//�ж�������
    int flag = ; 
    x = flag?x:-x;
//nΪ���� mΪС������
    long n = (long)x;
    int m = _______��2��__________;
//�������ִ���
    while(n){
        strRet =strRet+str[n%26];
        n =;
   }
//С�����ִ���
    string str2 = "";
    if(m>0){
        while(m){
            str2 =________��5��__________;
            m =________��6��__________;
        }
        strRet = strRet + "." + str2;
    }
    strRet = (flag?"":"-") + strRet;
    cout << strRet << endl;
}
