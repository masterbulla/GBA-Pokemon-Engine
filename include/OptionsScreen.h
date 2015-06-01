/*
 * OptionsScreen.h
 *
 *  Created on: 26 May 2015
 *      Author: Jamie
 */

#ifndef SOURCE_OPTIONSSCREEN_H_
#define SOURCE_OPTIONSSCREEN_H_

#include "GameScreen.h"

class OptionsScreen : public GameScreen
{
private:
	u32 exitContext;
	u32 menuPosition;
	u32 optionValues[6];
public:
	OptionsScreen(u32 exitContext);
	~OptionsScreen();
	void Update();
	void OnExitCallback();
	void OnEnterCallback();
	void IncrementMenuPosition() { if (menuPosition < 6) { menuPosition++; } }
	void DecrementMenuPosition()  { if (menuPosition > 0) { menuPosition--; } }
	void Save();
	void IncrementValueAt();
	void DecrementValueAt();
	u32 GetMenuPosition() const { return menuPosition; }
};

#endif /* SOURCE_OPTIONSSCREEN_H_ */