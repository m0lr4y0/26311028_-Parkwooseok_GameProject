#include "SceneGameBegin.h"
#include "glc2d.h"

int SceneGameBegin::Init()
{
	this->m_txPck = g2_TextureLoad("resource/texture/pngegg.png");
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
	g2_Draw2D(m_txPck, nullptr);
	return 0;
}