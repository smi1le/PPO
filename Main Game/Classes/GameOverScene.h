#ifndef __GAME_OVER_SCENE_H__
#define __GAME_OVER_SCENE_H__

#include "cocos2d.h"

class CGameOverScene : public cocos2d::Layer
{
public:
	static cocos2d::Scene* createScene();
	virtual bool init();
	CREATE_FUNC(CGameOverScene);

private:
	void GoToMenuScene(cocos2d::Ref *sender);
};

#endif // __GAME_OVER_SCENE_H__
