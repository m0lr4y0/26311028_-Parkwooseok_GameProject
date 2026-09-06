#include "SceneGameBegin.h"
#include "glc2d.h"
#include "CApplication.h"
int SceneGameBegin::Init()
{
	this->m_txPck = g2_TextureLoad("resource/texture/pngegg.png");
	
	this->m_txbg = g2_TextureLoad("resource/texture/tex_Ui/Map_Ui.png");

	this->m_txyoot = g2_TextureLoad("resource/texture/tex_Ui/y.png");
	//this->m_txTitle = g2_TextureLoad("resource/texture/tex_Ui/_Ui.png");
	
	//this->m_fntMessage = g2_TextureLoad("resource/texture/tex_Ui/Map_Ui.png");

	return 0;


}

int SceneGameBegin::Destroy()
{
	return 0;
}

int SceneGameBegin::Update()
{
	return 0;
}

int SceneGameBegin::Render()
{
	//auto winsize = g_app.GetWinSize();
	//auto bgTexW = (float)g2_TextureWidth(m_txbg);
	//auto bgTexH = (float)g2_TextureHeight(m_txbg);
	//VEC2 bgScale{ winSize.cx / bgTexW, winSize.cy / bgTexH };

	//g2_Draw2D(m_txPck, nullptr);
	//g2_Draw2D(m_txbg, nullptr);
	{
		VEC2 posTitle{ 100.0F, 0.0 };
		g2_Draw2D(m_txbg, nullptr, &posTitle);
	}
	{
		VEC2 posTitle{ 100.0F, 700.0 };
		g2_Draw2D(m_txyoot, nullptr, &posTitle);
	}
	
	//RECT rc{ 200, 100,800,600 };
	//g2_fontDrawText(m_fntMessage, rc, );



	return 0;
}

