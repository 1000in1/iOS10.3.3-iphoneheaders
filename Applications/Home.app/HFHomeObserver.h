/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 11:24:24 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /Applications/Home.app/Home
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol HFHomeObserver <HMHomeDelegate>
@optional
-(void)home:(id)arg1 didUpdateStateForOutgoingInvitations:(id)arg2;
-(void)home:(id)arg1 didAddResidentDevice:(id)arg2;
-(void)home:(id)arg1 didRemoveResidentDevice:(id)arg2;
-(void)home:(id)arg1 didUpdateLocation:(id)arg2;
-(void)home:(id)arg1 didUpdateAccesoryInvitationsForUser:(id)arg2;
-(void)homeDidUpdateApplicationData:(id)arg1;
-(void)home:(id)arg1 didUpdateApplicationDataForRoom:(id)arg2;
-(void)home:(id)arg1 didUpdateApplicationDataForServiceGroup:(id)arg2;
-(void)home:(id)arg1 didUpdateApplicationDataForActionSet:(id)arg2;
-(void)home:(id)arg1 didUpdateAccessControlForUser:(id)arg2;
-(void)home:(id)arg1 willReadValuesForCharacteristics:(id)arg2;
-(void)home:(id)arg1 willWriteValuesForCharacteristics:(id)arg2;
-(void)home:(id)arg1 willExecuteActionSets:(id)arg2;
-(void)home:(id)arg1 didReadValuesForCharacteristics:(id)arg2 failedCharacteristics:(id)arg3;
-(void)home:(id)arg1 didWriteValuesForCharacteristics:(id)arg2 failedCharacteristics:(id)arg3;
-(void)home:(id)arg1 didExecuteActionSets:(id)arg2 failedActionSets:(id)arg3;
-(void)homeDidUpdateWallpaper:(id)arg1;
-(void)home:(id)arg1 didUpdateWallpaperForRoom:(id)arg2;
-(void)home:(id)arg1 remoteAccessStateDidChange:(unsigned)arg2;

@end

