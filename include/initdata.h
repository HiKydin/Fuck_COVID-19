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
	string name;//����
	string gender;//�Ա�
	string phoneID;//�ֻ���
	string pwd;//����
}Preson;

typedef struct _Node {
	Preson peo;//������
	struct _Node* pNext;//ָ������һ����㣩
}Node;

Node *g_pHead = NULL;//ͷ���

void Checklogin();//����û��Ƿ��¼
void initData();//���ر������ݿ�

#endif