
// text14.2View.h : Ctext142View 类的接口
//

#pragma once


class Ctext142View : public CView
{
protected: // 仅从序列化创建
	Ctext142View();
	DECLARE_DYNCREATE(Ctext142View)

// 特性
public:
	Ctext142Doc* GetDocument() const;

// 操作
public:

// 重写
public:
	virtual void OnDraw(CDC* pDC);  // 重写以绘制该视图
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:

// 实现
public:
	virtual ~Ctext142View();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// 生成的消息映射函数
protected:
	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnPopdialog();
};

#ifndef _DEBUG  // text14.2View.cpp 中的调试版本
inline Ctext142Doc* Ctext142View::GetDocument() const
   { return reinterpret_cast<Ctext142Doc*>(m_pDocument); }
#endif

