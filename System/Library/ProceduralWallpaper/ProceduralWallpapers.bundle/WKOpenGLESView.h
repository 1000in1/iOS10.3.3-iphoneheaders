/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 6:39:27 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/ProceduralWallpaper/ProceduralWallpapers.bundle/ProceduralWallpapers
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ProceduralWallpapers/ProceduralWallpapers-Structs.h>
#import <UIKit/UIView.h>

@protocol OS_dispatch_queue;
@class EAGLContext, NSObject, CADisplayLink;

@interface WKOpenGLESView : UIView {

	char _initialized;
	EAGLContext* _context;
	unsigned _framebuffer;
	unsigned _renderbuffer;
	NSObject*<OS_dispatch_queue> displayQueue;
	CADisplayLink* displayLink;
	int frameInterval;

}

@property (assign) int frameInterval; 
+(Class)layerClass;
-(id)init;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(void)_init;
-(void)setFrameInterval:(int)arg1 ;
-(void)setAnimating:(char)arg1 ;
-(void)prepare;
-(void)setDrawableSize:(CGSize)arg1 ;
-(int)frameInterval;
-(void)drawGL:(id)arg1 ;
-(char)drawAtTime:(double)arg1 ;
@end

