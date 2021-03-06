/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 31, 2017 at 12:57:36 AM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/PrivateFrameworks/SlideshowKit.framework/Frameworks/OpusKit.framework/OpusKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <OpusKit/OpusKit-Structs.h>
#import <OpusKit/OKActionBindingTap.h>
#import <UIKit/UIGestureRecognizerDelegate.h>

@class NSString;

@interface OKActionBindingFocusTap : OKActionBindingTap <UIGestureRecognizerDelegate> {

	unsigned _mode;
	char _focusInEnabled;
	char _focusOutEnabled;

}

@property (assign,nonatomic) unsigned mode;                         //@synthesize mode=_mode - In the implementation block
@property (assign,nonatomic) char focusInEnabled;                   //@synthesize focusInEnabled=_focusInEnabled - In the implementation block
@property (assign,nonatomic) char focusOutEnabled;                  //@synthesize focusOutEnabled=_focusOutEnabled - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)supportedSettings;
-(id)init;
-(void)dealloc;
-(char)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setMode:(unsigned)arg1 ;
-(unsigned)mode;
-(id)initWithSettings:(id)arg1 ;
-(void)handleTap:(id)arg1 ;
-(char)performAction:(id)arg1 ;
-(id)settingObjectForKey:(id)arg1 ;
-(void)loadForResponder:(id)arg1 scope:(unsigned)arg2 ;
-(char)respondsToAction:(id)arg1 isTouchCountAgnostic:(char)arg2 ;
-(char)ownsGestureRecognizer:(id)arg1 ;
-(void)setFocusInEnabled:(char)arg1 ;
-(void)setFocusOutEnabled:(char)arg1 ;
-(char)focusInEnabled;
-(char)focusOutEnabled;
-(void)unload;
@end

