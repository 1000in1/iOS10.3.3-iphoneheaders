/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 31, 2017 at 12:56:25 AM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/PrivateFrameworks/CameraUI.framework/Support/nebulad
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSMutableArray;

@interface CAMFirstUnlockProtection : NSObject {

	char _isLocked;
	NSMutableArray* _pendingBlocks;
	char _isWatchingForUnlock;

}
+(id)sharedInstance;
-(void)_performPendingBlocksAfterFirstUnlock;
-(void)performAfterFirstUnlock:(/*^block*/id)arg1 ;
-(char)checkFirstUnlock;
-(id)init;
@end

