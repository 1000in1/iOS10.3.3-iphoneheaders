/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 11:22:33 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/AccessibilityBundles/VoiceOver.axuiservice/VoiceOver
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <VoiceOver/VoiceOver-Structs.h>
#import <UIKit/UIViewController.h>

@protocol AXUIService;
@class VOTUICursorView;

@interface VOTUICursorViewController : UIViewController {

	id<AXUIService> _axuiService;
	VOTUICursorView* _cursorView;
	CGPathRef _cursorPath;
	CGRect _cursorFrame;

}

@property (nonatomic,retain) VOTUICursorView * cursorView;              //@synthesize cursorView=_cursorView - In the implementation block
@property (assign,nonatomic) CGRect cursorFrame;                        //@synthesize cursorFrame=_cursorFrame - In the implementation block
@property (nonatomic,retain) CGPathRef cursorPath;                      //@synthesize cursorPath=_cursorPath - In the implementation block
@property (assign,nonatomic) id<AXUIService> axuiService;               //@synthesize axuiService=_axuiService - In the implementation block
@property (assign,nonatomic) char cursorHidden; 
-(void)setCursorView:(VOTUICursorView *)arg1 ;
-(VOTUICursorView *)cursorView;
-(void)setCursorPath:(CGPathRef)arg1 ;
-(void)setCursorHidden:(char)arg1 ;
-(void)setCursorFrame:(CGRect)arg1 ;
-(void)_updateCursorPath;
-(CGRect)cursorFrame;
-(CGPathRef)cursorPath;
-(id<AXUIService>)axuiService;
-(void)setAxuiService:(id<AXUIService>)arg1 ;
-(char)cursorHidden;
-(void)_updateCursorFrameAnimated:(char)arg1 ;
-(void)setCursorFrame:(CGRect)arg1 animated:(char)arg2 ;
-(id)initWithAXUIService:(id)arg1 ;
-(void)dealloc;
-(void)viewDidLoad;
@end

