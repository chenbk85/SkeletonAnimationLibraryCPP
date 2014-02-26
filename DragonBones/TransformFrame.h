﻿#pragma once
#include "preDB.h"
#include "Frame.h"
namespace dragonBones
{	
	/** @private */
	class TransformFrame : public Frame
	{
	public:
		Number tweenEasing;
		int tweenRotate;
		int displayIndex;
		bool visible;
		Number zOrder;
		
		DBTransform global;
		DBTransform transform;
		Point pivot;
		ColorTransform *color;
		
		
		TransformFrame()
		{			
			tweenEasing = 0;
			tweenRotate = 0;
			displayIndex = 0;
			visible = true;
			zOrder = NaN;
			color = 0;
		}
		virtual ~TransformFrame()
		{
			dispose();
		}
		
		virtual void dispose()
		{
			if(color)
			{
				delete color;
				color = 0;
			}
			Frame::dispose();
		}
	};
	
};