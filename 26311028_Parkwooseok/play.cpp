#include "play.h"

#include <cstdlib>
#include <ctime>


int Play::Init()
{
    // 랜덤 초기화
    srand((unsigned int)time(NULL));

    // 윷 결과 초기화
    m_YutResult = 0;

    // Space 입력 상태
    m_SpaceDown = false;


    // 윷 이미지 불러오기

    // 1.png = 도
    m_YutTexture[0] =
        g2_TextureLoad("resource/texture/tex_Ui/1.png");

    // 2.png = 개
    m_YutTexture[1] =
        g2_TextureLoad("resource/texture/tex_Ui/2.png");

    // 3.png = 걸
    m_YutTexture[2] =
        g2_TextureLoad("resource/texture/tex_Ui/3.png");

    // 4.png = 윷
    m_YutTexture[3] =
        g2_TextureLoad("resource/texture/tex_Ui/4.png");

    // 5.png = 모
    m_YutTexture[4] =
        g2_TextureLoad("resource/texture/tex_Ui/5.png");

    // 6.png = 뒷도
    m_YutTexture[5] =
        g2_TextureLoad("resource/texture/tex_Ui/6.png");


    return 0;
}


int Play::Update()
{
    const KEYCODE* key = g2_GetKeyboard();


    // Space를 누른 순간
    if (key[VK_SPACE])
    {
        // 키를 계속 누르고 있어도 한 번만 실행
        if (!m_SpaceDown)
        {
            m_YutResult = ThrowYut();

            m_SpaceDown = true;
        }
    }
    else
    {
        // Space에서 손을 뗌
        m_SpaceDown = false;
    }


    return 0;
}


int Play::Render()
{
    // 아직 윷을 던지지 않았다면 출력하지 않음
    if (m_YutResult <= 0)
        return 0;


    // 윷 결과 출력 위치
    VEC2 position(1100.0F, 800.0F);


    // 결과에 맞는 이미지 출력
    g2_Draw2D(
        m_YutTexture[m_YutResult - 1],
        NULL,
        &position
    );


    return 0;
}


int Play::Destroy()
{
    // 텍스처 해제
    for (int i = 0; i < 6; i++)
    {
        g2_TextureRelease(m_YutTexture[i]);
    }


    return 0;
}


int Play::ThrowYut()
{
    int backCount = 0;


    // 윷 4개 던지기
    for (int i = 0; i < 4; i++)
    {
        int yut = rand() % 2;


        if (yut == 0)
        {
            backCount++;
        }
    }


    // 도
    if (backCount == 1)
        return 1;


    // 개
    if (backCount == 2)
        return 2;


    // 걸
    if (backCount == 3)
        return 3;


    // 윷
    if (backCount == 4)
        return 4;


    // 모
    if (backCount == 0)
        return 5;


    return 1;
}

