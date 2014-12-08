/**
* This file is auto generated by Twin Dragons Tools
* CzsHeaderspriteView.h
* ComplexExample
*
* Created by apple on Wed Sep 17 15:31:07 GMT+07:00 2014
*
**/
#ifndef __ComplexExample__CzsHeaderspriteView__
#define __ComplexExample__CzsHeaderspriteView__
#include "cocos-ext.h"
#include "cocos2d.h"
#include "Defines.h"
using namespace std;
using namespace cocos2d;
using namespace cocos2d::extension;

class CzsHeaderspriteView : public CCSprite {
public:
	static CzsHeaderspriteView* create(const char* pmBgName
								);
	virtual bool init(const char* pmBgName
					);
protected:
	virtual void addSprites();
    virtual void addLabels();
    virtual void addMenus();
    virtual void addMenuItems();
private:
	enum ElementTag {
		
	};
	void czsHeaderMenuItemCallback(CCObject *pSender);
	
	const char* mmBgName;

	//{extend_functions_declaring}
};

#endif /* defined(__ComplexExample__CzsHeaderspriteView__) */