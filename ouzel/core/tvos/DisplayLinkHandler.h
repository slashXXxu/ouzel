// Copyright (C) 2017 Elviss Strazdins
// This file is part of the Ouzel engine.

#pragma once

#import <QuartzCore/QuartzCore.h>
#include "graphics/RenderDevice.hpp"

@interface DisplayLinkHandler: NSObject
{
    ouzel::graphics::RenderDevice* renderDevice;
    NSConditionLock* runLock;
    NSRunLoop* runLoop;
    CADisplayLink* displayLink;
    NSThread* renderThread;
    bool verticalSync;
    bool running;
}

-(id)initWithRenderDevice:(ouzel::graphics::RenderDevice*)newRenderDevice andVerticalSync:(bool)newVerticalSync;
-(void)stop;

@end
