#pragma once
#include<iostream>
#include<vector>
#include<set>
#include<map>
#include<list>
#include<string>
#include<algorithm>

using namespace std;

class Person{
public:
	Person(string str1, string str2):firstname(str1),lastname(str2) {}
	string firstname;
	string lastname;
	bool operator<(const Person&p) const;
	friend ostream& operator<<(ostream&out, const Person & p);
};

class PersonSortCriterion {
public:
	bool operator() (const Person&p1, const Person&p2) const {
		return p1.firstname < p2.firstname ||
			(p1.firstname == p2.firstname&&p1.lastname < p2.lastname);
	}
};

class UseVector {
public:
private:
};

class RT_CMP {
public:
	enum cmp_mode { normal, reverse };
private:
	cmp_mode mode;
public:
	RT_CMP(cmp_mode m = normal) :mode(m) {

	}

	template<class T>
	bool operator()(const T&t1, const T&t2) const {
		return mode == normal ? t1<t2
			: t1>t2;
	}

	bool operator==(const RT_CMP&rc) const {
		return mode == rc.mode;
	}
};

class UseSet {
public:
private:
};
// ��������������set��multiset��ʹ�÷���
void use_multiset();

// չʾset�Ĳ��Һ���������
void use_search_set();

// ��������������map��multimap��ʹ�÷���
void use_multimap();

// �������������Թ���ʽ����������׼���
void compare_map();

// �����Ƕ�RT_CMP�Ĳ��Ժ���
void use_RTCMP();


class IntSequence {
private:
	int value;
public:
	IntSequence(int initialValue) :value(initialValue) {

	}

	int operator()() {
		return ++value;
	}
};

// ʹ�ú������������
void use_function_object();


class MeanValue {
private:
	long num;
	long sum;

public:
	MeanValue() :num(0), sum(0) {};

	void operator()(int elem) {
		++num;
		sum += elem;
	}

	double value() {
		return static_cast<double>(sum) / static_cast<double>(num);
	}
};

// ʹ��for_each�㷨������
void use_for_each();