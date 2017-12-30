/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 31, 2017 at 12:57:52 AM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/PrivateFrameworks/UserActivity.framework/Agents/useractivityd
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol UASharedPasteboardManagerProtocol <NSObject>
@required
-(void)fetchRemotePasteboardStatus:(/*^block*/id)arg1;
-(void)clearLocalPasteboardInformation;
-(void)localPasteboardTypesDidChange:(id)arg1 forGeneration:(unsigned)arg2;
-(void)fetchRemotePasteboardTypesForProcess:(int)arg1 withCompletion:(/*^block*/id)arg2;
-(void)fetchRemotePasteboardForProcess:(int)arg1 withCompletion:(/*^block*/id)arg2;

@end
