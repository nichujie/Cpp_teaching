/*
 * Hello.cpp
 *
 *  Created on: 2016年9月17日
 *      Author: asus-user
 */
/*
 * Lesson 1 Cpp基本数据类型
 *	1.1 感受每个数据类型:百度or看书找到cpp所有基础类型（包括数组）
 *	1.2输出每个数据类型所占的大小：以下给出样例
 *	思考：
 *	1.3删除using namespace std;一行看看会发生什么
 *	1.4有没有发现string和其他类型的不同？想一想为什么？
 *		提示：Ssj为一个对象，注意颜色
 *
 * */
#include<iostream>
#include "Ssj.h"
using namespace std;

int main(){
	Ssj ssj;
	Ssj sj[10];	//这是什么类型的数组？
	string a;
	cout<<"int:"<<sizeof(int)<<endl;	//sizeof()函数输出一个变量所占的大小，单位：字节
	/* sizeof()具体用法：
	 * int a;int b[10];
	 *sizeof(int)  sizeof(a);  sizeof(b);
	 *括号内为变量类型，或变量名
	 *扩展：输出一下sizeof(sj)
	 * */
	return 0;
}


