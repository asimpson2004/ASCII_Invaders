#include "EnemyShip.h"
#include "../../Core/Maths/Vector3.h"
#include "../../Core/Renderer/ConsoleColours.h"
#include <Windows.h>

const int ENEMY_SPRITE_WIDTH = 12;
const int ENEMY_SPRITE_HEIGHT = 8;

CHAR_INFO EnemyShipSprite0[ENEMY_SPRITE_ANIMATION_FRAMES][ENEMY_SPRITE_WIDTH * ENEMY_SPRITE_HEIGHT] =
{
	{
		{ ' ' ,BACKGROUND_BLACK },{ ' ' ,BACKGROUND_BLACK },{ ' ' ,BACKGROUND_BLACK } ,{ ' ' ,BACKGROUND_BLACK },{ ' ' ,BACKGROUND_WHITE },{ ' ' ,BACKGROUND_WHITE },{ ' ' ,BACKGROUND_WHITE },{ ' ' ,BACKGROUND_WHITE } ,{ ' ' ,BACKGROUND_BLACK },{ ' ' ,BACKGROUND_BLACK },{ ' ' ,BACKGROUND_BLACK },{ ' ' ,BACKGROUND_BLACK },
		{ ' ' ,BACKGROUND_BLACK },{ ' ' ,BACKGROUND_WHITE },{ ' ' ,BACKGROUND_WHITE } ,{ ' ' ,BACKGROUND_WHITE },{ ' ' ,BACKGROUND_WHITE },{ ' ' ,BACKGROUND_WHITE },{ ' ' ,BACKGROUND_WHITE },{ ' ' ,BACKGROUND_WHITE } ,{ ' ' ,BACKGROUND_WHITE },{ ' ' ,BACKGROUND_WHITE },{ ' ' ,BACKGROUND_WHITE },{ ' ' ,BACKGROUND_BLACK },
		{ ' ' ,BACKGROUND_WHITE },{ ' ' ,BACKGROUND_WHITE },{ ' ' ,BACKGROUND_WHITE } ,{ ' ' ,BACKGROUND_WHITE },{ ' ' ,BACKGROUND_WHITE },{ ' ' ,BACKGROUND_WHITE },{ ' ' ,BACKGROUND_WHITE },{ ' ' ,BACKGROUND_WHITE } ,{ ' ' ,BACKGROUND_WHITE },{ ' ' ,BACKGROUND_WHITE },{ ' ' ,BACKGROUND_WHITE },{ ' ' ,BACKGROUND_WHITE },
		{ ' ' ,BACKGROUND_WHITE },{ ' ' ,BACKGROUND_WHITE },{ ' ' ,BACKGROUND_WHITE } ,{ ' ' ,BACKGROUND_BLACK },{ ' ' ,BACKGROUND_BLACK },{ ' ' ,BACKGROUND_WHITE },{ ' ' ,BACKGROUND_WHITE },{ ' ' ,BACKGROUND_BLACK } ,{ ' ' ,BACKGROUND_BLACK },{ ' ' ,BACKGROUND_WHITE },{ ' ' ,BACKGROUND_WHITE },{ ' ' ,BACKGROUND_WHITE },
		{ ' ' ,BACKGROUND_WHITE },{ ' ' ,BACKGROUND_WHITE },{ ' ' ,BACKGROUND_WHITE } ,{ ' ' ,BACKGROUND_WHITE },{ ' ' ,BACKGROUND_WHITE },{ ' ' ,BACKGROUND_WHITE },{ ' ' ,BACKGROUND_WHITE },{ ' ' ,BACKGROUND_WHITE } ,{ ' ' ,BACKGROUND_WHITE },{ ' ' ,BACKGROUND_WHITE },{ ' ' ,BACKGROUND_WHITE },{ ' ' ,BACKGROUND_WHITE },
		{ ' ' ,BACKGROUND_BLACK },{ ' ' ,BACKGROUND_BLACK },{ ' ' ,BACKGROUND_WHITE } ,{ ' ' ,BACKGROUND_WHITE },{ ' ' ,BACKGROUND_WHITE },{ ' ' ,BACKGROUND_BLACK },{ ' ' ,BACKGROUND_BLACK },{ ' ' ,BACKGROUND_WHITE } ,{ ' ' ,BACKGROUND_WHITE },{ ' ' ,BACKGROUND_WHITE },{ ' ' ,BACKGROUND_BLACK },{ ' ' ,BACKGROUND_BLACK },
		{ ' ' ,BACKGROUND_BLACK },{ ' ' ,BACKGROUND_WHITE },{ ' ' ,BACKGROUND_WHITE } ,{ ' ' ,BACKGROUND_BLACK },{ ' ' ,BACKGROUND_BLACK },{ ' ' ,BACKGROUND_WHITE },{ ' ' ,BACKGROUND_WHITE },{ ' ' ,BACKGROUND_BLACK } ,{ ' ' ,BACKGROUND_BLACK },{ ' ' ,BACKGROUND_WHITE },{ ' ' ,BACKGROUND_WHITE },{ ' ' ,BACKGROUND_BLACK },
		{ ' ' ,BACKGROUND_BLACK },{ ' ' ,BACKGROUND_BLACK },{ ' ' ,BACKGROUND_WHITE } ,{ ' ' ,BACKGROUND_WHITE },{ ' ' ,BACKGROUND_BLACK },{ ' ' ,BACKGROUND_BLACK },{ ' ' ,BACKGROUND_BLACK },{ ' ' ,BACKGROUND_BLACK } ,{ ' ' ,BACKGROUND_WHITE },{ ' ' ,BACKGROUND_WHITE },{ ' ' ,BACKGROUND_BLACK },{ ' ' ,BACKGROUND_BLACK },
	},
	{
		{ ' ' ,BACKGROUND_BLACK },{ ' ' ,BACKGROUND_BLACK },{ ' ' ,BACKGROUND_BLACK } ,{ ' ' ,BACKGROUND_BLACK },{ ' ' ,BACKGROUND_WHITE },{ ' ' ,BACKGROUND_WHITE },{ ' ' ,BACKGROUND_WHITE },{ ' ' ,BACKGROUND_WHITE } ,{ ' ' ,BACKGROUND_BLACK },{ ' ' ,BACKGROUND_BLACK },{ ' ' ,BACKGROUND_BLACK },{ ' ' ,BACKGROUND_BLACK },
		{ ' ' ,BACKGROUND_BLACK },{ ' ' ,BACKGROUND_WHITE },{ ' ' ,BACKGROUND_WHITE } ,{ ' ' ,BACKGROUND_WHITE },{ ' ' ,BACKGROUND_WHITE },{ ' ' ,BACKGROUND_WHITE },{ ' ' ,BACKGROUND_WHITE },{ ' ' ,BACKGROUND_WHITE } ,{ ' ' ,BACKGROUND_WHITE },{ ' ' ,BACKGROUND_WHITE },{ ' ' ,BACKGROUND_WHITE },{ ' ' ,BACKGROUND_BLACK },
		{ ' ' ,BACKGROUND_WHITE },{ ' ' ,BACKGROUND_WHITE },{ ' ' ,BACKGROUND_WHITE } ,{ ' ' ,BACKGROUND_WHITE },{ ' ' ,BACKGROUND_WHITE },{ ' ' ,BACKGROUND_WHITE },{ ' ' ,BACKGROUND_WHITE },{ ' ' ,BACKGROUND_WHITE } ,{ ' ' ,BACKGROUND_WHITE },{ ' ' ,BACKGROUND_WHITE },{ ' ' ,BACKGROUND_WHITE },{ ' ' ,BACKGROUND_WHITE },
		{ ' ' ,BACKGROUND_WHITE },{ ' ' ,BACKGROUND_WHITE },{ ' ' ,BACKGROUND_WHITE } ,{ ' ' ,BACKGROUND_BLACK },{ ' ' ,BACKGROUND_BLACK },{ ' ' ,BACKGROUND_WHITE },{ ' ' ,BACKGROUND_WHITE },{ ' ' ,BACKGROUND_BLACK } ,{ ' ' ,BACKGROUND_BLACK },{ ' ' ,BACKGROUND_WHITE },{ ' ' ,BACKGROUND_WHITE },{ ' ' ,BACKGROUND_WHITE },
		{ ' ' ,BACKGROUND_WHITE },{ ' ' ,BACKGROUND_WHITE },{ ' ' ,BACKGROUND_WHITE } ,{ ' ' ,BACKGROUND_WHITE },{ ' ' ,BACKGROUND_WHITE },{ ' ' ,BACKGROUND_WHITE },{ ' ' ,BACKGROUND_WHITE },{ ' ' ,BACKGROUND_WHITE } ,{ ' ' ,BACKGROUND_WHITE },{ ' ' ,BACKGROUND_WHITE },{ ' ' ,BACKGROUND_WHITE },{ ' ' ,BACKGROUND_WHITE },
		{ ' ' ,BACKGROUND_BLACK },{ ' ' ,BACKGROUND_BLACK },{ ' ' ,BACKGROUND_BLACK } ,{ ' ' ,BACKGROUND_WHITE },{ ' ' ,BACKGROUND_WHITE },{ ' ' ,BACKGROUND_BLACK },{ ' ' ,BACKGROUND_BLACK },{ ' ' ,BACKGROUND_WHITE } ,{ ' ' ,BACKGROUND_WHITE },{ ' ' ,BACKGROUND_BLACK },{ ' ' ,BACKGROUND_BLACK },{ ' ' ,BACKGROUND_BLACK },
		{ ' ' ,BACKGROUND_BLACK },{ ' ' ,BACKGROUND_BLACK },{ ' ' ,BACKGROUND_WHITE } ,{ ' ' ,BACKGROUND_WHITE },{ ' ' ,BACKGROUND_BLACK },{ ' ' ,BACKGROUND_WHITE },{ ' ' ,BACKGROUND_WHITE },{ ' ' ,BACKGROUND_BLACK } ,{ ' ' ,BACKGROUND_WHITE },{ ' ' ,BACKGROUND_WHITE },{ ' ' ,BACKGROUND_BLACK },{ ' ' ,BACKGROUND_BLACK },
		{ ' ' ,BACKGROUND_WHITE },{ ' ' ,BACKGROUND_WHITE },{ ' ' ,BACKGROUND_BLACK } ,{ ' ' ,BACKGROUND_BLACK },{ ' ' ,BACKGROUND_BLACK },{ ' ' ,BACKGROUND_BLACK },{ ' ' ,BACKGROUND_BLACK },{ ' ' ,BACKGROUND_BLACK } ,{ ' ' ,BACKGROUND_BLACK },{ ' ' ,BACKGROUND_BLACK },{ ' ' ,BACKGROUND_WHITE },{ ' ' ,BACKGROUND_WHITE },
	},
	{
		{ ' ' ,BACKGROUND_BLACK },{ ' ' ,BACKGROUND_BLACK },{ ' ' ,BACKGROUND_BLACK } ,{ ' ' ,BACKGROUND_BLACK },{ ' ' ,BACKGROUND_BLACK },{ ' ' ,BACKGROUND_BLACK },{ ' ' ,BACKGROUND_BLACK },{ ' ' ,BACKGROUND_BLACK } ,{ ' ' ,BACKGROUND_BLACK },{ ' ' ,BACKGROUND_BLACK },{ ' ' ,BACKGROUND_BLACK },{ ' ' ,BACKGROUND_BLACK },
		{ ' ' ,BACKGROUND_BLACK },{ ' ' ,BACKGROUND_BLACK },{ ' ' ,BACKGROUND_YELLOW } ,{ ' ' ,BACKGROUND_BLACK },{ ' ' ,BACKGROUND_BLACK },{ ' ' ,BACKGROUND_BLACK },{ ' ' ,BACKGROUND_BLACK },{ ' ' ,BACKGROUND_BLACK } ,{ ' ' ,BACKGROUND_YELLOW },{ ' ' ,BACKGROUND_BLACK },{ ' ' ,BACKGROUND_BLACK },{ ' ' ,BACKGROUND_BLACK },
		{ ' ' ,BACKGROUND_BLACK },{ ' ' ,BACKGROUND_BLACK },{ ' ' ,BACKGROUND_BLACK } ,{ ' ' ,BACKGROUND_YELLOW },{ ' ' ,BACKGROUND_BLACK },{ ' ' ,BACKGROUND_BLACK },{ ' ' ,BACKGROUND_BLACK },{ ' ' ,BACKGROUND_YELLOW } ,{ ' ' ,BACKGROUND_BLACK },{ ' ' ,BACKGROUND_BLACK },{ ' ' ,BACKGROUND_BLACK },{ ' ' ,BACKGROUND_BLACK },
		{ ' ' ,BACKGROUND_BLACK },{ ' ' ,BACKGROUND_BLACK },{ ' ' ,BACKGROUND_BLACK } ,{ ' ' ,BACKGROUND_BLACK },{ ' ' ,BACKGROUND_YELLOW },{ ' ' ,BACKGROUND_BLACK },{ ' ' ,BACKGROUND_YELLOW },{ ' ' ,BACKGROUND_BLACK } ,{ ' ' ,BACKGROUND_BLACK },{ ' ' ,BACKGROUND_BLACK },{ ' ' ,BACKGROUND_BLACK },{ ' ' ,BACKGROUND_BLACK },
		{ ' ' ,BACKGROUND_YELLOW },{ ' ' ,BACKGROUND_YELLOW },{ ' ' ,BACKGROUND_BLACK } ,{ ' ' ,BACKGROUND_BLACK },{ ' ' ,BACKGROUND_YELLOW },{ ' ' ,BACKGROUND_BLACK },{ ' ' ,BACKGROUND_YELLOW },{ ' ' ,BACKGROUND_BLACK } ,{ ' ' ,BACKGROUND_BLACK },{ ' ' ,BACKGROUND_BLACK },{ ' ' ,BACKGROUND_YELLOW },{ ' ' ,BACKGROUND_YELLOW },
		{ ' ' ,BACKGROUND_BLACK },{ ' ' ,BACKGROUND_BLACK },{ ' ' ,BACKGROUND_BLACK } ,{ ' ' ,BACKGROUND_YELLOW },{ ' ' ,BACKGROUND_BLACK },{ ' ' ,BACKGROUND_BLACK },{ ' ' ,BACKGROUND_BLACK },{ ' ' ,BACKGROUND_YELLOW } ,{ ' ' ,BACKGROUND_BLACK },{ ' ' ,BACKGROUND_BLACK },{ ' ' ,BACKGROUND_BLACK },{ ' ' ,BACKGROUND_BLACK },
		{ ' ' ,BACKGROUND_BLACK },{ ' ' ,BACKGROUND_BLACK },{ ' ' ,BACKGROUND_YELLOW } ,{ ' ' ,BACKGROUND_BLACK },{ ' ' ,BACKGROUND_BLACK },{ ' ' ,BACKGROUND_BLACK },{ ' ' ,BACKGROUND_BLACK },{ ' ' ,BACKGROUND_BLACK } ,{ ' ' ,BACKGROUND_YELLOW },{ ' ' ,BACKGROUND_BLACK },{ ' ' ,BACKGROUND_BLACK },{ ' ' ,BACKGROUND_BLACK },
		{ ' ' ,BACKGROUND_BLACK },{ ' ' ,BACKGROUND_BLACK },{ ' ' ,BACKGROUND_BLACK } ,{ ' ' ,BACKGROUND_BLACK },{ ' ' ,BACKGROUND_BLACK },{ ' ' ,BACKGROUND_BLACK },{ ' ' ,BACKGROUND_BLACK },{ ' ' ,BACKGROUND_BLACK } ,{ ' ' ,BACKGROUND_BLACK },{ ' ' ,BACKGROUND_BLACK },{ ' ' ,BACKGROUND_BLACK },{ ' ' ,BACKGROUND_BLACK },
	},
	{
		{ ' ' ,BACKGROUND_BLACK },{ ' ' ,BACKGROUND_BLACK },{ ' ' ,BACKGROUND_BRIGHT_RED } ,{ ' ' ,BACKGROUND_BLACK },{ ' ' ,BACKGROUND_BLACK },{ ' ' ,BACKGROUND_BLACK },{ ' ' ,BACKGROUND_BLACK },{ ' ' ,BACKGROUND_BLACK } ,{ ' ' ,BACKGROUND_BRIGHT_RED },{ ' ' ,BACKGROUND_BLACK },{ ' ' ,BACKGROUND_BLACK },{ ' ' ,BACKGROUND_BLACK },
		{ ' ' ,BACKGROUND_BLACK },{ ' ' ,BACKGROUND_BLACK },{ ' ' ,BACKGROUND_BLACK } ,{ ' ' ,BACKGROUND_BRIGHT_RED },{ ' ' ,BACKGROUND_BLACK },{ ' ' ,BACKGROUND_BLACK },{ ' ' ,BACKGROUND_BLACK },{ ' ' ,BACKGROUND_BRIGHT_RED } ,{ ' ' ,BACKGROUND_BLACK },{ ' ' ,BACKGROUND_BLACK },{ ' ' ,BACKGROUND_BLACK },{ ' ' ,BACKGROUND_BLACK },
		{ ' ' ,BACKGROUND_BRIGHT_RED },{ ' ' ,BACKGROUND_BLACK },{ ' ' ,BACKGROUND_BLACK } ,{ ' ' ,BACKGROUND_BLACK },{ ' ' ,BACKGROUND_BRIGHT_RED },{ ' ' ,BACKGROUND_BLACK },{ ' ' ,BACKGROUND_BRIGHT_RED },{ ' ' ,BACKGROUND_BLACK } ,{ ' ' ,BACKGROUND_BLACK },{ ' ' ,BACKGROUND_BLACK },{ ' ' ,BACKGROUND_BLACK },{ ' ' ,BACKGROUND_BRIGHT_RED },
		{ ' ' ,BACKGROUND_BLACK },{ ' ' ,BACKGROUND_BRIGHT_RED },{ ' ' ,BACKGROUND_BLACK } ,{ ' ' ,BACKGROUND_BLACK },{ ' ' ,BACKGROUND_BLACK },{ ' ' ,BACKGROUND_BLACK },{ ' ' ,BACKGROUND_BLACK },{ ' ' ,BACKGROUND_BLACK } ,{ ' ' ,BACKGROUND_BLACK },{ ' ' ,BACKGROUND_BLACK },{ ' ' ,BACKGROUND_BRIGHT_RED },{ ' ' ,BACKGROUND_BLACK },
		{ ' ' ,BACKGROUND_BLACK },{ ' ' ,BACKGROUND_BRIGHT_RED },{ ' ' ,BACKGROUND_BLACK } ,{ ' ' ,BACKGROUND_BLACK },{ ' ' ,BACKGROUND_BLACK },{ ' ' ,BACKGROUND_BLACK },{ ' ' ,BACKGROUND_BLACK },{ ' ' ,BACKGROUND_BLACK } ,{ ' ' ,BACKGROUND_BLACK },{ ' ' ,BACKGROUND_BLACK },{ ' ' ,BACKGROUND_BRIGHT_RED },{ ' ' ,BACKGROUND_BLACK },
		{ ' ' ,BACKGROUND_BRIGHT_RED },{ ' ' ,BACKGROUND_BLACK },{ ' ' ,BACKGROUND_BLACK } ,{ ' ' ,BACKGROUND_BLACK },{ ' ' ,BACKGROUND_BRIGHT_RED },{ ' ' ,BACKGROUND_BLACK },{ ' ' ,BACKGROUND_BRIGHT_RED },{ ' ' ,BACKGROUND_BLACK } ,{ ' ' ,BACKGROUND_BLACK },{ ' ' ,BACKGROUND_BLACK },{ ' ' ,BACKGROUND_BLACK },{ ' ' ,BACKGROUND_BRIGHT_RED },
		{ ' ' ,BACKGROUND_BLACK },{ ' ' ,BACKGROUND_BLACK },{ ' ' ,BACKGROUND_BLACK } ,{ ' ' ,BACKGROUND_BRIGHT_RED },{ ' ' ,BACKGROUND_BLACK },{ ' ' ,BACKGROUND_BLACK },{ ' ' ,BACKGROUND_BLACK },{ ' ' ,BACKGROUND_BRIGHT_RED } ,{ ' ' ,BACKGROUND_BLACK },{ ' ' ,BACKGROUND_BLACK },{ ' ' ,BACKGROUND_BLACK },{ ' ' ,BACKGROUND_BLACK },
		{ ' ' ,BACKGROUND_BLACK },{ ' ' ,BACKGROUND_BLACK },{ ' ' ,BACKGROUND_BRIGHT_RED } ,{ ' ' ,BACKGROUND_BLACK },{ ' ' ,BACKGROUND_BLACK },{ ' ' ,BACKGROUND_BLACK },{ ' ' ,BACKGROUND_BLACK },{ ' ' ,BACKGROUND_BLACK } ,{ ' ' ,BACKGROUND_BRIGHT_RED },{ ' ' ,BACKGROUND_BLACK },{ ' ' ,BACKGROUND_BLACK },{ ' ' ,BACKGROUND_BLACK },
	},
};


CHAR_INFO EnemyShipSprite1[ENEMY_SPRITE_ANIMATION_FRAMES][ENEMY_SPRITE_WIDTH * ENEMY_SPRITE_HEIGHT] =
{
	{
		{ ' ' ,BACKGROUND_BLACK },{ ' ' ,BACKGROUND_BLACK },{ ' ' ,BACKGROUND_WHITE } ,{ ' ' ,BACKGROUND_BLACK },{ ' ' ,BACKGROUND_BLACK },{ ' ' ,BACKGROUND_BLACK },{ ' ' ,BACKGROUND_BLACK },{ ' ' ,BACKGROUND_BLACK } ,{ ' ' ,BACKGROUND_WHITE },{ ' ' ,BACKGROUND_BLACK },{ ' ' ,BACKGROUND_BLACK },{ ' ' ,BACKGROUND_BLACK },
		{ ' ' ,BACKGROUND_BLACK },{ ' ' ,BACKGROUND_BLACK },{ ' ' ,BACKGROUND_BLACK } ,{ ' ' ,BACKGROUND_WHITE },{ ' ' ,BACKGROUND_BLACK },{ ' ' ,BACKGROUND_BLACK },{ ' ' ,BACKGROUND_BLACK },{ ' ' ,BACKGROUND_WHITE } ,{ ' ' ,BACKGROUND_BLACK },{ ' ' ,BACKGROUND_BLACK },{ ' ' ,BACKGROUND_BLACK },{ ' ' ,BACKGROUND_BLACK },
		{ ' ' ,BACKGROUND_BLACK },{ ' ' ,BACKGROUND_BLACK },{ ' ' ,BACKGROUND_WHITE } ,{ ' ' ,BACKGROUND_WHITE },{ ' ' ,BACKGROUND_WHITE },{ ' ' ,BACKGROUND_WHITE },{ ' ' ,BACKGROUND_WHITE },{ ' ' ,BACKGROUND_WHITE } ,{ ' ' ,BACKGROUND_WHITE },{ ' ' ,BACKGROUND_BLACK },{ ' ' ,BACKGROUND_BLACK },{ ' ' ,BACKGROUND_BLACK },
		{ ' ' ,BACKGROUND_BLACK },{ ' ' ,BACKGROUND_WHITE },{ ' ' ,BACKGROUND_WHITE } ,{ ' ' ,BACKGROUND_BLACK },{ ' ' ,BACKGROUND_WHITE },{ ' ' ,BACKGROUND_WHITE },{ ' ' ,BACKGROUND_WHITE },{ ' ' ,BACKGROUND_BLACK } ,{ ' ' ,BACKGROUND_WHITE },{ ' ' ,BACKGROUND_WHITE },{ ' ' ,BACKGROUND_BLACK },{ ' ' ,BACKGROUND_BLACK },
		{ ' ' ,BACKGROUND_WHITE },{ ' ' ,BACKGROUND_WHITE },{ ' ' ,BACKGROUND_WHITE } ,{ ' ' ,BACKGROUND_WHITE },{ ' ' ,BACKGROUND_WHITE },{ ' ' ,BACKGROUND_WHITE },{ ' ' ,BACKGROUND_WHITE },{ ' ' ,BACKGROUND_WHITE } ,{ ' ' ,BACKGROUND_WHITE },{ ' ' ,BACKGROUND_WHITE },{ ' ' ,BACKGROUND_WHITE },{ ' ' ,BACKGROUND_BLACK },
		{ ' ' ,BACKGROUND_WHITE },{ ' ' ,BACKGROUND_BLACK },{ ' ' ,BACKGROUND_WHITE } ,{ ' ' ,BACKGROUND_WHITE },{ ' ' ,BACKGROUND_WHITE },{ ' ' ,BACKGROUND_WHITE },{ ' ' ,BACKGROUND_WHITE },{ ' ' ,BACKGROUND_WHITE } ,{ ' ' ,BACKGROUND_WHITE },{ ' ' ,BACKGROUND_BLACK },{ ' ' ,BACKGROUND_WHITE },{ ' ' ,BACKGROUND_BLACK },
		{ ' ' ,BACKGROUND_WHITE },{ ' ' ,BACKGROUND_BLACK },{ ' ' ,BACKGROUND_WHITE } ,{ ' ' ,BACKGROUND_BLACK },{ ' ' ,BACKGROUND_BLACK },{ ' ' ,BACKGROUND_BLACK },{ ' ' ,BACKGROUND_BLACK },{ ' ' ,BACKGROUND_BLACK } ,{ ' ' ,BACKGROUND_WHITE },{ ' ' ,BACKGROUND_BLACK },{ ' ' ,BACKGROUND_WHITE },{ ' ' ,BACKGROUND_BLACK },
		{ ' ' ,BACKGROUND_BLACK },{ ' ' ,BACKGROUND_BLACK },{ ' ' ,BACKGROUND_BLACK } ,{ ' ' ,BACKGROUND_WHITE },{ ' ' ,BACKGROUND_WHITE },{ ' ' ,BACKGROUND_BLACK },{ ' ' ,BACKGROUND_WHITE },{ ' ' ,BACKGROUND_WHITE } ,{ ' ' ,BACKGROUND_BLACK },{ ' ' ,BACKGROUND_BLACK },{ ' ' ,BACKGROUND_BLACK },{ ' ' ,BACKGROUND_BLACK },
	},
	{
		{ ' ' ,BACKGROUND_BLACK },{ ' ' ,BACKGROUND_BLACK },{ ' ' ,BACKGROUND_WHITE } ,{ ' ' ,BACKGROUND_BLACK },{ ' ' ,BACKGROUND_BLACK },{ ' ' ,BACKGROUND_BLACK },{ ' ' ,BACKGROUND_BLACK },{ ' ' ,BACKGROUND_BLACK } ,{ ' ' ,BACKGROUND_WHITE },{ ' ' ,BACKGROUND_BLACK },{ ' ' ,BACKGROUND_BLACK },{ ' ' ,BACKGROUND_BLACK },
		{ ' ' ,BACKGROUND_WHITE },{ ' ' ,BACKGROUND_BLACK },{ ' ' ,BACKGROUND_BLACK } ,{ ' ' ,BACKGROUND_WHITE },{ ' ' ,BACKGROUND_BLACK },{ ' ' ,BACKGROUND_BLACK },{ ' ' ,BACKGROUND_BLACK },{ ' ' ,BACKGROUND_WHITE } ,{ ' ' ,BACKGROUND_BLACK },{ ' ' ,BACKGROUND_BLACK },{ ' ' ,BACKGROUND_WHITE },{ ' ' ,BACKGROUND_BLACK },
		{ ' ' ,BACKGROUND_WHITE },{ ' ' ,BACKGROUND_BLACK },{ ' ' ,BACKGROUND_WHITE } ,{ ' ' ,BACKGROUND_WHITE },{ ' ' ,BACKGROUND_WHITE },{ ' ' ,BACKGROUND_WHITE },{ ' ' ,BACKGROUND_WHITE },{ ' ' ,BACKGROUND_WHITE } ,{ ' ' ,BACKGROUND_WHITE },{ ' ' ,BACKGROUND_BLACK },{ ' ' ,BACKGROUND_WHITE },{ ' ' ,BACKGROUND_BLACK },
		{ ' ' ,BACKGROUND_WHITE },{ ' ' ,BACKGROUND_WHITE },{ ' ' ,BACKGROUND_WHITE } ,{ ' ' ,BACKGROUND_BLACK },{ ' ' ,BACKGROUND_WHITE },{ ' ' ,BACKGROUND_WHITE },{ ' ' ,BACKGROUND_WHITE },{ ' ' ,BACKGROUND_BLACK } ,{ ' ' ,BACKGROUND_WHITE },{ ' ' ,BACKGROUND_WHITE },{ ' ' ,BACKGROUND_WHITE },{ ' ' ,BACKGROUND_BLACK },
		{ ' ' ,BACKGROUND_WHITE },{ ' ' ,BACKGROUND_WHITE },{ ' ' ,BACKGROUND_WHITE } ,{ ' ' ,BACKGROUND_WHITE },{ ' ' ,BACKGROUND_WHITE },{ ' ' ,BACKGROUND_WHITE },{ ' ' ,BACKGROUND_WHITE },{ ' ' ,BACKGROUND_WHITE } ,{ ' ' ,BACKGROUND_WHITE },{ ' ' ,BACKGROUND_WHITE },{ ' ' ,BACKGROUND_WHITE },{ ' ' ,BACKGROUND_BLACK },
		{ ' ' ,BACKGROUND_BLACK },{ ' ' ,BACKGROUND_BLACK },{ ' ' ,BACKGROUND_WHITE } ,{ ' ' ,BACKGROUND_WHITE },{ ' ' ,BACKGROUND_WHITE },{ ' ' ,BACKGROUND_WHITE },{ ' ' ,BACKGROUND_WHITE },{ ' ' ,BACKGROUND_WHITE } ,{ ' ' ,BACKGROUND_WHITE },{ ' ' ,BACKGROUND_BLACK },{ ' ' ,BACKGROUND_BLACK },{ ' ' ,BACKGROUND_BLACK },
		{ ' ' ,BACKGROUND_BLACK },{ ' ' ,BACKGROUND_BLACK },{ ' ' ,BACKGROUND_WHITE } ,{ ' ' ,BACKGROUND_BLACK },{ ' ' ,BACKGROUND_BLACK },{ ' ' ,BACKGROUND_BLACK },{ ' ' ,BACKGROUND_BLACK },{ ' ' ,BACKGROUND_BLACK } ,{ ' ' ,BACKGROUND_WHITE },{ ' ' ,BACKGROUND_BLACK },{ ' ' ,BACKGROUND_BLACK },{ ' ' ,BACKGROUND_BLACK },
		{ ' ' ,BACKGROUND_BLACK },{ ' ' ,BACKGROUND_WHITE },{ ' ' ,BACKGROUND_BLACK } ,{ ' ' ,BACKGROUND_BLACK },{ ' ' ,BACKGROUND_BLACK },{ ' ' ,BACKGROUND_BLACK },{ ' ' ,BACKGROUND_BLACK },{ ' ' ,BACKGROUND_BLACK } ,{ ' ' ,BACKGROUND_BLACK },{ ' ' ,BACKGROUND_WHITE },{ ' ' ,BACKGROUND_BLACK },{ ' ' ,BACKGROUND_BLACK },
	},
	{
		{ ' ' ,BACKGROUND_BLACK },{ ' ' ,BACKGROUND_BLACK },{ ' ' ,BACKGROUND_BLACK } ,{ ' ' ,BACKGROUND_BLACK },{ ' ' ,BACKGROUND_BLACK },{ ' ' ,BACKGROUND_BLACK },{ ' ' ,BACKGROUND_BLACK },{ ' ' ,BACKGROUND_BLACK } ,{ ' ' ,BACKGROUND_BLACK },{ ' ' ,BACKGROUND_BLACK },{ ' ' ,BACKGROUND_BLACK },{ ' ' ,BACKGROUND_BLACK },
		{ ' ' ,BACKGROUND_BLACK },{ ' ' ,BACKGROUND_BLACK },{ ' ' ,BACKGROUND_YELLOW } ,{ ' ' ,BACKGROUND_BLACK },{ ' ' ,BACKGROUND_BLACK },{ ' ' ,BACKGROUND_BLACK },{ ' ' ,BACKGROUND_BLACK },{ ' ' ,BACKGROUND_BLACK } ,{ ' ' ,BACKGROUND_YELLOW },{ ' ' ,BACKGROUND_BLACK },{ ' ' ,BACKGROUND_BLACK },{ ' ' ,BACKGROUND_BLACK },
		{ ' ' ,BACKGROUND_BLACK },{ ' ' ,BACKGROUND_BLACK },{ ' ' ,BACKGROUND_BLACK } ,{ ' ' ,BACKGROUND_YELLOW },{ ' ' ,BACKGROUND_BLACK },{ ' ' ,BACKGROUND_BLACK },{ ' ' ,BACKGROUND_BLACK },{ ' ' ,BACKGROUND_YELLOW } ,{ ' ' ,BACKGROUND_BLACK },{ ' ' ,BACKGROUND_BLACK },{ ' ' ,BACKGROUND_BLACK },{ ' ' ,BACKGROUND_BLACK },
		{ ' ' ,BACKGROUND_BLACK },{ ' ' ,BACKGROUND_BLACK },{ ' ' ,BACKGROUND_BLACK } ,{ ' ' ,BACKGROUND_BLACK },{ ' ' ,BACKGROUND_YELLOW },{ ' ' ,BACKGROUND_BLACK },{ ' ' ,BACKGROUND_YELLOW },{ ' ' ,BACKGROUND_BLACK } ,{ ' ' ,BACKGROUND_BLACK },{ ' ' ,BACKGROUND_BLACK },{ ' ' ,BACKGROUND_BLACK },{ ' ' ,BACKGROUND_BLACK },
		{ ' ' ,BACKGROUND_YELLOW },{ ' ' ,BACKGROUND_YELLOW },{ ' ' ,BACKGROUND_BLACK } ,{ ' ' ,BACKGROUND_BLACK },{ ' ' ,BACKGROUND_YELLOW },{ ' ' ,BACKGROUND_BLACK },{ ' ' ,BACKGROUND_YELLOW },{ ' ' ,BACKGROUND_BLACK } ,{ ' ' ,BACKGROUND_BLACK },{ ' ' ,BACKGROUND_BLACK },{ ' ' ,BACKGROUND_YELLOW },{ ' ' ,BACKGROUND_YELLOW },
		{ ' ' ,BACKGROUND_BLACK },{ ' ' ,BACKGROUND_BLACK },{ ' ' ,BACKGROUND_BLACK } ,{ ' ' ,BACKGROUND_YELLOW },{ ' ' ,BACKGROUND_BLACK },{ ' ' ,BACKGROUND_BLACK },{ ' ' ,BACKGROUND_BLACK },{ ' ' ,BACKGROUND_YELLOW } ,{ ' ' ,BACKGROUND_BLACK },{ ' ' ,BACKGROUND_BLACK },{ ' ' ,BACKGROUND_BLACK },{ ' ' ,BACKGROUND_BLACK },
		{ ' ' ,BACKGROUND_BLACK },{ ' ' ,BACKGROUND_BLACK },{ ' ' ,BACKGROUND_YELLOW } ,{ ' ' ,BACKGROUND_BLACK },{ ' ' ,BACKGROUND_BLACK },{ ' ' ,BACKGROUND_BLACK },{ ' ' ,BACKGROUND_BLACK },{ ' ' ,BACKGROUND_BLACK } ,{ ' ' ,BACKGROUND_YELLOW },{ ' ' ,BACKGROUND_BLACK },{ ' ' ,BACKGROUND_BLACK },{ ' ' ,BACKGROUND_BLACK },
		{ ' ' ,BACKGROUND_BLACK },{ ' ' ,BACKGROUND_BLACK },{ ' ' ,BACKGROUND_BLACK } ,{ ' ' ,BACKGROUND_BLACK },{ ' ' ,BACKGROUND_BLACK },{ ' ' ,BACKGROUND_BLACK },{ ' ' ,BACKGROUND_BLACK },{ ' ' ,BACKGROUND_BLACK } ,{ ' ' ,BACKGROUND_BLACK },{ ' ' ,BACKGROUND_BLACK },{ ' ' ,BACKGROUND_BLACK },{ ' ' ,BACKGROUND_BLACK },
	},
	{
		{ ' ' ,BACKGROUND_BLACK },{ ' ' ,BACKGROUND_BLACK },{ ' ' ,BACKGROUND_BRIGHT_RED } ,{ ' ' ,BACKGROUND_BLACK },{ ' ' ,BACKGROUND_BLACK },{ ' ' ,BACKGROUND_BLACK },{ ' ' ,BACKGROUND_BLACK },{ ' ' ,BACKGROUND_BLACK } ,{ ' ' ,BACKGROUND_BRIGHT_RED },{ ' ' ,BACKGROUND_BLACK },{ ' ' ,BACKGROUND_BLACK },{ ' ' ,BACKGROUND_BLACK },
		{ ' ' ,BACKGROUND_BLACK },{ ' ' ,BACKGROUND_BLACK },{ ' ' ,BACKGROUND_BLACK } ,{ ' ' ,BACKGROUND_BRIGHT_RED },{ ' ' ,BACKGROUND_BLACK },{ ' ' ,BACKGROUND_BLACK },{ ' ' ,BACKGROUND_BLACK },{ ' ' ,BACKGROUND_BRIGHT_RED } ,{ ' ' ,BACKGROUND_BLACK },{ ' ' ,BACKGROUND_BLACK },{ ' ' ,BACKGROUND_BLACK },{ ' ' ,BACKGROUND_BLACK },
		{ ' ' ,BACKGROUND_BRIGHT_RED },{ ' ' ,BACKGROUND_BLACK },{ ' ' ,BACKGROUND_BLACK } ,{ ' ' ,BACKGROUND_BLACK },{ ' ' ,BACKGROUND_BRIGHT_RED },{ ' ' ,BACKGROUND_BLACK },{ ' ' ,BACKGROUND_BRIGHT_RED },{ ' ' ,BACKGROUND_BLACK } ,{ ' ' ,BACKGROUND_BLACK },{ ' ' ,BACKGROUND_BLACK },{ ' ' ,BACKGROUND_BLACK },{ ' ' ,BACKGROUND_BRIGHT_RED },
		{ ' ' ,BACKGROUND_BLACK },{ ' ' ,BACKGROUND_BRIGHT_RED },{ ' ' ,BACKGROUND_BLACK } ,{ ' ' ,BACKGROUND_BLACK },{ ' ' ,BACKGROUND_BLACK },{ ' ' ,BACKGROUND_BLACK },{ ' ' ,BACKGROUND_BLACK },{ ' ' ,BACKGROUND_BLACK } ,{ ' ' ,BACKGROUND_BLACK },{ ' ' ,BACKGROUND_BLACK },{ ' ' ,BACKGROUND_BRIGHT_RED },{ ' ' ,BACKGROUND_BLACK },
		{ ' ' ,BACKGROUND_BLACK },{ ' ' ,BACKGROUND_BRIGHT_RED },{ ' ' ,BACKGROUND_BLACK } ,{ ' ' ,BACKGROUND_BLACK },{ ' ' ,BACKGROUND_BLACK },{ ' ' ,BACKGROUND_BLACK },{ ' ' ,BACKGROUND_BLACK },{ ' ' ,BACKGROUND_BLACK } ,{ ' ' ,BACKGROUND_BLACK },{ ' ' ,BACKGROUND_BLACK },{ ' ' ,BACKGROUND_BRIGHT_RED },{ ' ' ,BACKGROUND_BLACK },
		{ ' ' ,BACKGROUND_BRIGHT_RED },{ ' ' ,BACKGROUND_BLACK },{ ' ' ,BACKGROUND_BLACK } ,{ ' ' ,BACKGROUND_BLACK },{ ' ' ,BACKGROUND_BRIGHT_RED },{ ' ' ,BACKGROUND_BLACK },{ ' ' ,BACKGROUND_BRIGHT_RED },{ ' ' ,BACKGROUND_BLACK } ,{ ' ' ,BACKGROUND_BLACK },{ ' ' ,BACKGROUND_BLACK },{ ' ' ,BACKGROUND_BLACK },{ ' ' ,BACKGROUND_BRIGHT_RED },
		{ ' ' ,BACKGROUND_BLACK },{ ' ' ,BACKGROUND_BLACK },{ ' ' ,BACKGROUND_BLACK } ,{ ' ' ,BACKGROUND_BRIGHT_RED },{ ' ' ,BACKGROUND_BLACK },{ ' ' ,BACKGROUND_BLACK },{ ' ' ,BACKGROUND_BLACK },{ ' ' ,BACKGROUND_BRIGHT_RED } ,{ ' ' ,BACKGROUND_BLACK },{ ' ' ,BACKGROUND_BLACK },{ ' ' ,BACKGROUND_BLACK },{ ' ' ,BACKGROUND_BLACK },
		{ ' ' ,BACKGROUND_BLACK },{ ' ' ,BACKGROUND_BLACK },{ ' ' ,BACKGROUND_BRIGHT_RED } ,{ ' ' ,BACKGROUND_BLACK },{ ' ' ,BACKGROUND_BLACK },{ ' ' ,BACKGROUND_BLACK },{ ' ' ,BACKGROUND_BLACK },{ ' ' ,BACKGROUND_BLACK } ,{ ' ' ,BACKGROUND_BRIGHT_RED },{ ' ' ,BACKGROUND_BLACK },{ ' ' ,BACKGROUND_BLACK },{ ' ' ,BACKGROUND_BLACK },
	},
};


const int MOVEMENT_AMMOUNT = 4;

EnemyShip::EnemyShip()
:m_bInitialised(false)
,m_AnimationTimer(0.0f)
,m_Active(true)
,m_FireRate(0)
,m_ScoreValue(0)
{
}

EnemyShip::~EnemyShip()
{
}

void EnemyShip::Initialise(Vector2& position, int fireRate, int sprite, int scoreValue, float initialTime)
{
	m_FireRate = fireRate;

	m_ScoreValue = scoreValue;

	m_AnimationTimer = initialTime;

	AnimatedSprite::Initialise(sprite == 0 ? &EnemyShipSprite0[0][0] : &EnemyShipSprite1[0][0], Vector3(ENEMY_SPRITE_WIDTH, ENEMY_SPRITE_HEIGHT, ENEMY_SPRITE_ANIMATION_FRAMES));

	Vector2 startPosition(position.x - (AnimatedSprite::GetSize().x / 2), position.y - (AnimatedSprite::GetSize().y / 2));
	SetPosition(startPosition);

	m_bInitialised = true;
}

bool EnemyShip::Update(float deltaTime)
{
	if (!m_bInitialised || !m_Active)
		return false;

	m_AnimationTimer += deltaTime;
	if (m_AnimationTimer >= 1.0f)
	{
		if (GetAnimationFrame() == 2)
		{
			m_AnimationTimer -= 0.15f;
			SetAnimationFrame(3);
		}
		else if (GetAnimationFrame() == 3)
		{
			m_Active = false;
		}
		else
		{
			m_AnimationTimer -= 1.0f;
			SetAnimationFrame(GetAnimationFrame() == 0 ? 1 : 0);
		}
		
		return ShouldFire();
	}

	return false;
}

bool EnemyShip::ShouldFire()
{
	bool shouldFire = false;
	int chance = rand() % 100;

	if (m_FireRate > chance)
	{
		shouldFire = true;
	}

	return shouldFire;
}

void EnemyShip::Render(ASCIIRenderer* pRenderer)
{
	if (!m_bInitialised || !m_Active)
		return;

	AnimatedSprite::Render(pRenderer);
}

void EnemyShip::MoveLeft()
{
	SetPosition(Vector2(GetPosition().x - MOVEMENT_AMMOUNT, GetPosition().y));
}

void EnemyShip::MoveRight()
{
	SetPosition(Vector2(GetPosition().x + MOVEMENT_AMMOUNT, GetPosition().y));
}

void EnemyShip::MoveDown()
{
	SetPosition(Vector2(GetPosition().x, GetPosition().y + MOVEMENT_AMMOUNT));
}

void EnemyShip::Explode()
{
	if (GetAnimationFrame() < 2)
	{
		m_AnimationTimer = 0.85f;
		SetAnimationFrame(2);
	}
}
