/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 11:23:24 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SpringBoard/SpringBoard-Structs.h>
#import <SpringBoardUI/SBAwayViewPluginController.h>

@class NSMutableDictionary;

@interface SBEventObserverRegistry : SBAwayViewPluginController {

	void* _provider;
	NSMutableDictionary* _observers;

}
+(id)sharedInstance;
-(void)setValue:(char)arg1 forState:(CFStringRef)arg2 ;
-(void)postEventToInterestedObservers:(CFStringRef)arg1 ;
-(void)addObserverWithToken:(unsigned long long)arg1 forEvent:(id)arg2 ;
-(void)removeObserverWithToken:(unsigned long long)arg1 forEvent:(id)arg2 ;
-(void)handleEvent:(id)arg1 token:(unsigned long long)arg2 action:(long)arg3 ;
-(id)init;
@end

