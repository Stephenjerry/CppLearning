/*
**@Author:Jason.Lee
**@Date:2018-8-19
*/
#pragma once

#include<iostream>
#include<string>
#include<fstream>
#include<vector>
#include<map>
#include<set>
#include<list>
#include<array>
#include<deque>
#include<hash_map>
#include<unordered_map>

using namespace std;

struct test0216 {
	int a;
};


class Util {
private:
	static int count;
	int id;
	string name;

public:
	Util();
	Util(string object) :name(object) { 
		cout << "object name:" << name << endl; 
	};
	Util(const Util &u);
	Util(int id, string name);
	~Util();
	inline void test_inline() {
		cout << "I am a inline function in class Util" << endl;
	}
	inline void test_inline2();
	static int test_count;
	virtual void show();
	void test_const_function();
	void test_const_function() const;
	void test_const_function(int test);
	static void get_count() {
		cout << count << endl;
	}

	void test_show_const();
	void test_show_const() const;

	Util& operator=(const Util&src); 
};

class Tool :public Util {
private:
	int function;
	string typeclass;
public:
	Tool();
	~Tool();
	virtual void show();
};

class AnotherUtil {

};

class Another {
	int a;
};

class Base {
private:
	int b;
public:
	virtual void show() {
		cout << "void Base::show();" << endl;
	};
	virtual ~Base() {
		cout << "~Base();" << endl;
	};
};

class Derived :public Base{
private:
	int d;
public:
	void show() {
		cout << "void Derived::show();" << endl;
	};
	~Derived() {
		cout << "~Derived()" << endl;
	}
};

// ��������int��Ա��һ����Ա�����Ĳ�����
class TestA {
private:
	int a;
	int b;
public:
	void show() const;
};

// ֻ��������int��Ա�����
class TestB {
private:
	int a;
	int b;
};

// ����������Ա��һ����̬��Ա�����
class TestC {
private:
	int a;
	int b;
	static int c;
public:
	static int show();
};

class TestD :public TestA {
private:
	int x;
	int y;
};

//���ܻ������ֽڶ����E��
class TestE  {
private:
	float f1;
	float f2;
	char c;
};

// ����̳нṹ��ϵ
class TestF :public TestD {

};

// ��̳�
class TestG :public TestD, TestE {

};

// ģ��

template<class T>
class testTp {
private:
	T a, b;
public:
	void add() {
		cout << a + b << endl;
	}
};