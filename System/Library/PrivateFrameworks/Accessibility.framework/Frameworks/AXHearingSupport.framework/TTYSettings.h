/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 31, 2017 at 12:56:06 AM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/PrivateFrameworks/Accessibility.framework/Frameworks/AXHearingSupport.framework/AXHearingSupport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSLock, NSMutableSet, NSMutableDictionary, NSString;

@interface TTYSettings : NSObject {

	NSLock* _synchronizeDomainsLock;
	NSMutableSet* _registeredNotifications;
	NSMutableSet* _synchronizePreferences;
	NSMutableDictionary* _updateBlocks;

}

@property (nonatomic,retain) NSMutableSet * registeredNotifications;              //@synthesize registeredNotifications=_registeredNotifications - In the implementation block
@property (nonatomic,retain) NSMutableSet * synchronizePreferences;               //@synthesize synchronizePreferences=_synchronizePreferences - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * updateBlocks;                  //@synthesize updateBlocks=_updateBlocks - In the implementation block
@property (assign,nonatomic) char TTYHardwareEnabled; 
@property (assign,nonatomic) char TTYSoftwareEnabled; 
@property (assign,nonatomic) char incomingCallsTTY; 
@property (assign,nonatomic) char ttyShouldBeRealtime; 
@property (nonatomic,retain) NSString * preferredRelayNumber; 
@property (assign,nonatomic) int incomingTTYCallCount; 
@property (assign,nonatomic) int outgoingTTYCallCount; 
@property (assign,nonatomic) double lastCallCountReset; 
@property (assign,nonatomic) char internalOverrideTTYAvailability; 
+(id)sharedInstance;
+(void)initialize;
-(id)init;
-(void)dealloc;
-(NSMutableSet *)synchronizePreferences;
-(NSMutableDictionary *)updateBlocks;
-(void)setUpdateBlocks:(NSMutableDictionary *)arg1 ;
-(void)registerUpdateBlock:(/*^block*/id)arg1 forRetrieveSelector:(SEL)arg2 withListener:(id)arg3 ;
-(void)_setValue:(id)arg1 forPreferenceKey:(id)arg2 ;
-(id)_notificationForPreferenceKey:(id)arg1 ;
-(id)_valueForPreferenceKey:(id)arg1 ;
-(void)_registerForNotification:(id)arg1 ;
-(void)_handlePreferenceChanged:(id)arg1 ;
-(id)_preferenceKeyForSelector:(SEL)arg1 ;
-(char)ttyShouldBeRealtime;
-(char)TTYHardwareEnabled;
-(char)TTYSoftwareEnabled;
-(char)incomingCallsTTY;
-(NSString *)preferredRelayNumber;
-(char)internalOverrideTTYAvailability;
-(id)_selectorMap;
-(void)_synchronizeIfNecessary:(id)arg1 ;
-(SEL)selectorForPreferenceKey:(id)arg1 ;
-(id)notificationForSelector:(SEL)arg1 ;
-(void)setTTYHardwareEnabled:(char)arg1 ;
-(void)setTTYSoftwareEnabled:(char)arg1 ;
-(void)setIncomingCallsTTY:(char)arg1 ;
-(int)incomingTTYCallCount;
-(void)setIncomingTTYCallCount:(int)arg1 ;
-(int)outgoingTTYCallCount;
-(void)setOutgoingTTYCallCount:(int)arg1 ;
-(double)lastCallCountReset;
-(void)setLastCallCountReset:(double)arg1 ;
-(void)setTtyShouldBeRealtime:(char)arg1 ;
-(void)setPreferredRelayNumber:(NSString *)arg1 ;
-(void)setInternalOverrideTTYAvailability:(char)arg1 ;
-(void)setSynchronizePreferences:(NSMutableSet *)arg1 ;
-(void)setRegisteredNotifications:(NSMutableSet *)arg1 ;
-(NSMutableSet *)registeredNotifications;
@end

