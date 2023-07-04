// CMySocket.cpp: archivo de implementación
//

#include "pch.h"
#include "Ethernet_2.h"
#include "CMySocket.h"


// CMySocket

CMySocket::CMySocket()
{
}

CMySocket::~CMySocket()
{
}


// Funciones de miembro de CMySocket


void CMySocket::SetParent(CDialog* pWnd)
{
    // TODO: Agregar aquí el código de implementación.
     // Set the member pointer4:     
    m_pWnd = pWnd;
}


void CMySocket::OnAccept(int nErrorCode)
{
    // TODO: Agregar aquí el código de implementación.
    // Were there any errors?4:     
    if (nErrorCode == 0)        
        // No, call the dialog’s OnAccept function6:         
        ((CSockDlg*)m_pWnd)->OnAccept();
}
