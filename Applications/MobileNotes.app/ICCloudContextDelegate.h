/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 11:24:59 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /Applications/MobileNotes.app/MobileNotes
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol ICCloudContextDelegate <NSObject>
@required
-(void)cloudContext:(id)arg1 receivedZoneNotFound:(id)arg2;
-(void)cloudContext:(id)arg1 sharedZoneWasDeleted:(id)arg2;
-(void)didFailPushingExceededStorageQuotaForContext:(id)arg1;
-(void)cloudContext:(id)arg1 userDidDeleteRecordZoneWithID:(id)arg2;
-(void)cloudContext:(id)arg1 didFetchUserRecord:(id)arg2;

@end

