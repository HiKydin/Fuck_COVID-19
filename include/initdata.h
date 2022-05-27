#pragma once
#ifndef _INITDATA_H_
#define _INITDATA_H_

#include <string>
#include <stdio.h>
#include <fstream>
#include <Windows.h>

using namespace std;

static string AdminUser = "admin";
static string AdminPwd = "admin";
static int totalpreson = 0;
string path = "C:\\Library\\Project\\Fuck_COVID-19\\data\\man.txt";

typedef struct _Preson{
	string name;//姓名
	string gender;//性别
	string phoneID;//手机号
	string pwd;//密码
}Preson;

typedef struct _Node {
	Preson peo;//数据域
	struct _Node* pNext;//指针域（下一个结点）
}Node;

Node *g_pHead = NULL;//头结点

void Checklogin();//检查用户是否登录
void initData();//加载本地数据库

#endif