// ChartObject.cpp: implementation of the CChartObject class.
//
//////////////////////////////////////////////////////////////////////

#include "stdafx.h"
#include "ChartObject.h"

//////////////////////////////////////////////////////////////////////
// Construction/Destruction
//////////////////////////////////////////////////////////////////////

CChartObject::CChartObject()
{
	m_bVisible = TRUE;
	m_rect.left = m_rect.top = m_rect.right = m_rect.bottom;
}

CChartObject::~CChartObject()
{

}
