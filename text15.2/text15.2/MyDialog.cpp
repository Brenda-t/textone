// MyDialog.cpp : ʵ���ļ�
//

#include "stdafx.h"
#include "text15.2.h"
#include "MyDialog.h"
#include "afxdialogex.h"


// MyDialog �Ի���

IMPLEMENT_DYNAMIC(MyDialog, CDialogEx)

MyDialog::MyDialog(CWnd* pParent /*=NULL*/)
	: CDialogEx(IDD_DIALOG1, pParent)
	, x(0)
	, y(0)
	, z(0)
{

}

MyDialog::~MyDialog()
{
}

void MyDialog::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
	DDX_Text(pDX, IDC_EDIT1, x);
	DDX_Text(pDX, IDC_EDIT2, y);
	DDX_Text(pDX, IDC_EDIT3, z);
}


BEGIN_MESSAGE_MAP(MyDialog, CDialogEx)
	ON_COMMAND(ID_PopDialog, &MyDialog::OnPopdialog)
	ON_BN_CLICKED(IDC_BUTTON1, &MyDialog::OnBnClickedButton1)
END_MESSAGE_MAP()


// MyDialog ��Ϣ��������


void MyDialog::OnPopdialog()
{
	// TODO: �ڴ�����������������

}


void MyDialog::OnBnClickedButton1()
{
	// TODO: �ڴ����ӿؼ�֪ͨ�����������
	this->UpdateData(true);  //���ݴ�ǰ̨������̨
	z = x + y;
	UpdateData(false);       //���ݴӺ�̨����ǰ̨

}