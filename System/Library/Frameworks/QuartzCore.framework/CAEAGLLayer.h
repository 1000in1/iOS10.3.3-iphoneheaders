/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 11:20:55 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/Frameworks/QuartzCore.framework/QuartzCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <QuartzCore/QuartzCore-Structs.h>
#import <QuartzCore/CALayer.h>
#import <libobjc.A.dylib/EAGLDrawable.h>

@class NSDictionary;

@interface CAEAGLLayer : CALayer <EAGLDrawable> {

	CAEAGLNativeWindow* _win;

}

@property (readonly) EAGLNativeWindowObject* nativeWindow; 
@property (getter=isAsynchronous) char asynchronous; 
@property (assign) char lowLatency; 
@property (assign) double inputTime; 
@property (assign) char presentsWithTransaction; 
@property (copy) NSDictionary * drawableProperties; 
+(id)defaultValueForKey:(id)arg1 ;
+(char)CA_automaticallyNotifiesObservers:(Class)arg1 ;
-(char)shouldArchiveValueForKey:(id)arg1 ;
-(char)lowLatency;
-(void)_didCommitLayer:(Transaction*)arg1 ;
-(EAGLNativeWindowObject*)nativeWindow;
-(char)_defersDidBecomeVisiblePostCommit;
-(double)inputTime;
-(void)dealloc;
-(void)setLowLatency:(char)arg1 ;
-(void)setInputTime:(double)arg1 ;
-(void)_display;
-(void)didChangeValueForKey:(id)arg1 ;
-(void)layerDidBecomeVisible:(char)arg1 ;
-(char)isAsynchronous;
-(void)setPresentsWithTransaction:(char)arg1 ;
-(char)isDrawableAvailable;
-(char)presentsWithTransaction;
-(void)discardContents;
-(void)setAsynchronous:(char)arg1 ;
-(NSDictionary *)drawableProperties;
-(void)setDrawableProperties:(NSDictionary *)arg1 ;
@end

