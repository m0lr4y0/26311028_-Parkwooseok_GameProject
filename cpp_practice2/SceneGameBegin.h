#pragma once
class SceneGameBegin
{
public:
	int Init();
	int Update();
	int Render();
	int Destroy();

protected:
	int m_txPck = -1;
	int m_txbg = -1;
	int m_txTitle = -1;
	int m_fntMessage = -1;
	int m_txyoot = -1;

};

