#ifndef __BALL_H__
#define __BALL_H__

#include "cocos2d.h"
#include "GameSprite.h"

class CBall : public cocos2d::CCSprite
{
public:
	CBall(cocos2d::Layer * layer, float acceleration, Point pos);
	void Start();
	void Move(cocos2d::Point pos);
private:
	cocos2d::Vec2 m_origin;
	cocos2d::Size m_visibleSize;
	cocos2d::Sprite *m_ball;

	float m_acc;
	float m_width;
};

#endif // __BALL_H__