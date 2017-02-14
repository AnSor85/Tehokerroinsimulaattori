
// TehokerroinsimulaattoriDlg.h : header file
//

#pragma once


// CTehokerroinsimulaattoriDlg dialog
class CTehokerroinsimulaattoriDlg : public CDialogEx
{
// Construction
public:
	CTehokerroinsimulaattoriDlg(CWnd* pParent = NULL);	// standard constructor

// Dialog Data
	enum { IDD = IDD_TEHOKERROINSIMULAATTORI_DIALOG };

	protected:
	virtual void DoDataExchange(CDataExchange* pDX);	// DDX/DDV support


// Implementation
protected:
	HICON m_hIcon;

	// Generated message map functions
	virtual BOOL OnInitDialog();
	afx_msg void OnSysCommand(UINT nID, LPARAM lParam);
	afx_msg void OnPaint();
	afx_msg HCURSOR OnQueryDragIcon();
	DECLARE_MESSAGE_MAP()
};
