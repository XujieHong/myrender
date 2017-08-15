#pragma once
#include "../../Base/MojingTypes.h"
#include "../../Base/MojingString.h"
namespace Baofeng
{
	namespace Mojing
	{
		typedef enum __enumScreenVerticalAlignment
		{
			SVA_BOTTOM = 0,
			SVA_CENTER = 1,
			SVA_TOP = 2
		}ScreenVerticalAlignment;
		class CDayDreamParameters
		{

		public:
			CDayDreamParameters();
			virtual ~CDayDreamParameters();

			static int UpdateDayDreamURL(const char* szDayDreamURL, char * szNewDayDreamURL, float fPPI_Scale);

			static CDayDreamParameters FromDayDreamURL(const char* szDayDreamURL);
			String GetDayDreamURL();

			CLASS_MEMBER_STR(String, m_sz, CompanyName);// ��˾��
			CLASS_MEMBER_STR(String, m_sz, ViewerName);// �۾���
			// Primary button type??
			CLASS_MEMBER(float, m_sz, ScreenToLens);// ��Ƭ���ֻ��ľ��� , �� 
			CLASS_MEMBER(float, m_sz, InterLens);// ͫ�� , �� 
			// Field-of-view angles
			CLASS_MEMBER(float, m_f, OuterFOV);
			CLASS_MEMBER(float, m_f, InnerFOV);
			CLASS_MEMBER(float, m_f, TopFOV);
			CLASS_MEMBER(float, m_f, BottomFOV);
			// Screen vertical alignment
			CLASS_MEMBER(ScreenVerticalAlignment, m_, ScreenVerticalAlignmentType);
			CLASS_MEMBER(float, m_f, ScreenVerticalAlignment);//Tray to lens-center distance (mm)
			// Distortion coefficients [K1 , K2]
			CLASS_MEMBER(float, m_f, K1);
			CLASS_MEMBER(float, m_f, K2);
		};


	}
}
