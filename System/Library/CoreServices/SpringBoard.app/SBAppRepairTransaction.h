/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 11:23:21 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SpringBoard/SBTransaction.h>

@class NSSet, NSMutableSet;

@interface SBAppRepairTransaction : SBTransaction {

	NSSet* _appInfos;
	NSMutableSet* _repairRequests;

}

@property (nonatomic,copy,readonly) NSSet * appInfos;              //@synthesize appInfos=_appInfos - In the implementation block
-(void)_startAppRepairs;
-(void)_completeRequest:(id)arg1 success:(char)arg2 error:(id)arg3 ;
-(id)initWithApplicationInfos:(id)arg1 ;
-(NSSet *)appInfos;
-(void)_evaluateCompletion;
-(void)_didComplete;
-(char)_canBeInterrupted;
-(void)_begin;
@end

