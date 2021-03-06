﻿/*********************************************************************************************
* GravityDo.h
*
* Copyright (C)    2017   [DFRobot](http://www.dfrobot.com),
* This Library is free software: you can redistribute it and/or modify
* it under the terms of the GNU General Public License as published by
* the Free Software Foundation, either version 3 of the License, or
* (at your option) any later version.
*
* Description:
*
* author  :  Jason
* version :  V1.0
* date    :  2017-04-19
*********************************************************************************************/
#pragma once
#include "WaterSensor.h"
#include "Arduino.h"

class GravityDo: public IWaterSensor
{
public:
	GravityDo();
	~GravityDo();

public:
	//初始化
	void setup();

	//更新传感器数据
	void update();

	//获取传感器数据
	double getValue();

private:
	bool sensor_string_complete;               //have we received all the data from the Atlas Scientific product

	//do的数据
	double doValue;

};

