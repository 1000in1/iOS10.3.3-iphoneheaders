/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 11:23:25 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class BBSystemStateProvider;

@interface SBBulletinSystemStateAdapter : NSObject {

	BBSystemStateProvider* _stateProvider;
	char _quietModeEnabled;

}
+(id)sharedInstance;
+(id)sharedInstanceIfExists;
-(void)_lockStateChanged:(id)arg1 ;
-(void)_screenDimmed:(id)arg1 ;
-(void)_lostModeStateChanged;
-(id)init;
-(void)dealloc;
@end

