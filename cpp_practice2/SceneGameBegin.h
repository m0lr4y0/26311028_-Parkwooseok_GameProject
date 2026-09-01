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

};

