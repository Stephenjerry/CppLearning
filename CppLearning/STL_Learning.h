#pragma once
#include<iostream>
#include<vector>
#include<set>
#include<map>
#include<string>

using namespace std;

class Person{
public:
	Person(string str1, string str2):firstname(str1),lastname(str2) {}
	string firstname;
	string lastname;
	friend ostream& operator<<(ostream&out, const Person & p);
};

class PersonSortCriterion {
public:
	bool operator() (const Person&p1, const Person&p2) const {
		return p1.lastname < p2.lastname ||
			(p1.lastname == p2.lastname&&p1.firstname < p2.firstname);
	}
};

class UseVector {
public:
private:
};


class UseSet {
public:
private:
};
// ��������������set��multiset��ʹ�÷���
void use_multiset();

// չʾset�Ĳ��Һ���������
void use_search_set();