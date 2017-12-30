/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 11:23:39 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/DuetKnowledgeBase/Monitors/DuetKnowledgeMonitor.bundle/DuetKnowledgeMonitor
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <DuetKnowledgeMonitor/_DKMonitor.h>

@protocol _CDContext, OS_dispatch_source;
@class NSDate, NSObject, _CDContextualKeyPath;

@interface _DKDeviceActivityLevelMonitor : _DKMonitor {

	char _enabled;
	char _initialized;
	NSDate* _lastSetActiveDate;
	id<_CDContext> _context;
	NSObject*<OS_dispatch_source> _debounceTimer;
	_CDContextualKeyPath* _lastUseDate;
	_CDContextualKeyPath* _inUseStatus;
	unsigned long _userActivityNotificationHandle;
	int _heySiriToken;
	unsigned long long _lastInUseStatus;
	unsigned long long _currentInUseStatus;

}

@property (assign,nonatomic) char enabled;                                              //@synthesize enabled=_enabled - In the implementation block
@property (assign,nonatomic) char initialized;                                          //@synthesize initialized=_initialized - In the implementation block
@property (assign,nonatomic) unsigned long long lastInUseStatus;                        //@synthesize lastInUseStatus=_lastInUseStatus - In the implementation block
@property (assign,nonatomic) unsigned long long currentInUseStatus;                     //@synthesize currentInUseStatus=_currentInUseStatus - In the implementation block
@property (nonatomic,retain) NSDate * lastSetActiveDate;                                //@synthesize lastSetActiveDate=_lastSetActiveDate - In the implementation block
@property (nonatomic,retain) id<_CDContext> context;                                    //@synthesize context=_context - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_source> debounceTimer;               //@synthesize debounceTimer=_debounceTimer - In the implementation block
@property (nonatomic,retain) _CDContextualKeyPath * lastUseDate;                        //@synthesize lastUseDate=_lastUseDate - In the implementation block
@property (nonatomic,retain) _CDContextualKeyPath * inUseStatus;                        //@synthesize inUseStatus=_inUseStatus - In the implementation block
@property (assign,nonatomic) unsigned long userActivityNotificationHandle;              //@synthesize userActivityNotificationHandle=_userActivityNotificationHandle - In the implementation block
@property (assign,nonatomic) int heySiriToken;                                          //@synthesize heySiriToken=_heySiriToken - In the implementation block
+(id)eventStream;
+(id)entitlements;
-(void)updateActivityDateAndInUseState:(unsigned long long)arg1 ;
-(void)updateActivityInUseState:(unsigned long long)arg1 ;
-(unsigned long long)currentInUseStatus;
-(void)setCurrentInUseStatus:(unsigned long long)arg1 ;
-(unsigned long long)lastInUseStatus;
-(void)setLastSetActiveDate:(NSDate *)arg1 ;
-(void)setDebounceTimer:(NSObject*<OS_dispatch_source>)arg1 ;
-(unsigned long)userActivityNotificationHandle;
-(void)setHeySiriToken:(int)arg1 ;
-(void)setLastInUseStatus:(unsigned long long)arg1 ;
-(NSDate *)lastSetActiveDate;
-(void)setUserActivityNotificationHandle:(unsigned long)arg1 ;
-(NSObject*<OS_dispatch_source>)debounceTimer;
-(int)heySiriToken;
-(void)setInUseStatus:(_CDContextualKeyPath *)arg1 ;
-(_CDContextualKeyPath *)inUseStatus;
-(void)setLastActivityDate:(id)arg1 ;
-(char)enabled;
-(void)setEnabled:(char)arg1 ;
-(void)stop;
-(id<_CDContext>)context;
-(void)start;
-(void)setContext:(id<_CDContext>)arg1 ;
-(void)synchronouslyReflectCurrentValue;
-(id)loadState;
-(char)initialized;
-(void)saveState;
-(void)handleUserActivity:(int)arg1 ;
-(void)setInitialized:(char)arg1 ;
-(void)setLastUseDate:(_CDContextualKeyPath *)arg1 ;
-(_CDContextualKeyPath *)lastUseDate;
@end

