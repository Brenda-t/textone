
// text9Doc.h : Ctext9Doc ��Ľӿ�
//


#pragma once


class Ctext9Doc : public CDocument
{
protected: // �������л�����
	Ctext9Doc();
	DECLARE_DYNCREATE(Ctext9Doc)

// ����
public:

// ����
public:
	CArray<CRect, CRect&>  ca;   //װ��Բ������ca
// ��д
public:
	virtual BOOL OnNewDocument();
	virtual void Serialize(CArchive& ar);
#ifdef SHARED_HANDLERS
	virtual void InitializeSearchContent();
	virtual void OnDrawThumbnail(CDC& dc, LPRECT lprcBounds);
#endif // SHARED_HANDLERS

// ʵ��
public:
	virtual ~Ctext9Doc();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// ���ɵ���Ϣӳ�亯��
protected:
	DECLARE_MESSAGE_MAP()

#ifdef SHARED_HANDLERS
	// ����Ϊ�����������������������ݵ� Helper ����
	void SetSearchContent(const CString& value);
#endif // SHARED_HANDLERS
};