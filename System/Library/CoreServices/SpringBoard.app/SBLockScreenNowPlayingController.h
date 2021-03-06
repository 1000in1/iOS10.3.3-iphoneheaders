/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 11:23:23 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/_UISettingsKeyObserver.h>

@protocol SBLockScreenNowPlayingControllerDelegate;
@class SBMediaController, PCPersistentTimer, SBLockScreenSettings, NSString;

@interface SBLockScreenNowPlayingController : NSObject <_UISettingsKeyObserver> {

	SBMediaController* _mediaController;
	PCPersistentTimer* _disableTimer;
	SBLockScreenSettings* _testSettings;
	char _enabled;
	int _currentState;
	id<SBLockScreenNowPlayingControllerDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<SBLockScreenNowPlayingControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (assign,getter=isEnabled,nonatomic) char enabled;                                             //@synthesize enabled=_enabled - In the implementation block
@property (nonatomic,readonly) int currentState;                                                        //@synthesize currentState=_currentState - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithMediaController:(id)arg1 ;
-(void)_invalidateDisableTimer;
-(void)_updateNowPlayingPlugin;
-(void)_updateToState:(int)arg1 ;
-(char)_isMediaRecentlyActive;
-(void)_startDisableTimer;
-(void)_disableTimerFired;
-(char)isNowPlayingActive;
-(void)setDelegate:(id<SBLockScreenNowPlayingControllerDelegate>)arg1 ;
-(void)dealloc;
-(id<SBLockScreenNowPlayingControllerDelegate>)delegate;
-(int)currentState;
-(void)setEnabled:(char)arg1 ;
-(char)isEnabled;
-(void)settings:(id)arg1 changedValueForKey:(id)arg2 ;
-(void)_addObservers;
-(void)_removeObservers;
@end

