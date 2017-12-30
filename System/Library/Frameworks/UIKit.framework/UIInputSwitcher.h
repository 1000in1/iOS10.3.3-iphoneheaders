/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 11:21:26 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class UIDelayedAction, UIInputSwitcherView, NSString;

@interface UIInputSwitcher : NSObject {

	UIDelayedAction* m_keyHoldDelay;
	UIDelayedAction* m_showSwitcherDelay;
	UIDelayedAction* m_hideSwitcherDelay;
	int m_state;
	UIInputSwitcherView* m_switcherView;
	double m_lastGlobeKeyUpTime;
	NSString* _newMode;
	char _otherKeyPressedDuringShiftDown;
	NSString* _loadedIdentifier;

}

@property (nonatomic,copy) NSString * loadedIdentifier;                        //@synthesize loadedIdentifier=_loadedIdentifier - In the implementation block
@property (assign,nonatomic) char otherKeyPressedDuringShiftDown;              //@synthesize otherKeyPressedDuringShiftDown=_otherKeyPressedDuringShiftDown - In the implementation block
+(id)activeInstance;
+(id)sharedInstance;
-(id)init;
-(void)dealloc;
-(char)isVisible;
-(char)handleSwitchingKeyEvent:(id)arg1 ;
-(char)switchMode:(id)arg1 withHUD:(char)arg2 withDelay:(char)arg3 ;
-(char)handleSwitchCommand:(char)arg1 withHUD:(char)arg2 withDelay:(char)arg3 ;
-(void)hideSwitcher;
-(char)handleModifiersChangedEvent:(id)arg1 ;
-(void)clearShowSwitcherTimer;
-(void)clearHideSwitcherTimer;
-(void)cancelShowSwitcherTimer;
-(NSString *)loadedIdentifier;
-(void)touchHideSwitcherTimer;
-(void)handleRotate:(id)arg1 ;
-(void)showSwitcherShouldAutoHide:(char)arg1 ;
-(void)showSwitcherWithAutoHide;
-(void)showSwitcherWithoutAutoHide;
-(id)inputModeIdentifierWithNextFlag:(char)arg1 ;
-(void)setLoadedIdentifier:(NSString *)arg1 ;
-(void)touchShowSwitcherTimer;
-(char)isVisibleOrHiding;
-(void)touchKeyHoldTimer;
-(void)clearKeyHoldTimer;
-(void)setOtherKeyPressedDuringShiftDown:(char)arg1 ;
-(char)otherKeyPressedDuringShiftDown;
-(char)handleSwitchCommand:(char)arg1 ;
@end

