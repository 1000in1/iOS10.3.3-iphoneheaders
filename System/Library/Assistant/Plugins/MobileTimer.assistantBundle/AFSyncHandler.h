/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 11:22:45 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/Assistant/Plugins/MobileTimer.assistantBundle/MobileTimer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol AFSyncHandler <NSObject>
@optional
-(id)currentSyncSnapshot;
-(void)beginSyncWithAnchor:(id)arg1 validity:(id)arg2 count:(int)arg3 forKey:(id)arg4 beginInfo:(id)arg5 configuration:(id)arg6;
-(void)beginSyncWithInfo:(id)arg1 configuration:(id)arg2;
-(void)beginSyncWithAnchor:(id)arg1 validity:(id)arg2 count:(int)arg3 forKey:(id)arg4 beginInfo:(id)arg5;
-(void)syncDidEnd;
-(id)syncSnapshotForKey:(id)arg1;
-(id)syncVerificationKeyForKey:(id)arg1;
-(void)beginSyncWithAnchor:(id)arg1 validity:(id)arg2 forKey:(id)arg3 beginInfo:(id)arg4;
-(void)getChangeAfterAnchor:(id)arg1 changeInfo:(id)arg2;

@end

