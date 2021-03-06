/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 31, 2017 at 12:58:04 AM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/PrivateFrameworks/iTunesStore.framework/Support/itunesstored
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <itunesstored/ApplicationWorkspaceOperation.h>

@protocol ODRiTunesStoreDaemonProtocol;
@interface ApplicationWorkspaceOnDemandResourceOperation : ApplicationWorkspaceOperation {

	int _action;
	id<ODRiTunesStoreDaemonProtocol> _ondemandd;

}

@property (assign,nonatomic) int action;                                              //@synthesize action=_action - In the implementation block
@property (nonatomic,retain) id<ODRiTunesStoreDaemonProtocol> ondemandd;              //@synthesize ondemandd=_ondemandd - In the implementation block
-(char)blocksAppInstallation;
-(void)runWithCompletionBlock:(/*^block*/id)arg1 ;
-(void)setOndemandd:(id<ODRiTunesStoreDaemonProtocol>)arg1 ;
-(void)_recordLastODRAction:(int)arg1 ;
-(char)_actionCancelBundleIdentifier:(id)arg1 error:(id*)arg2 ;
-(char)_actionPauseBundleIdentifier:(id)arg1 error:(id*)arg2 ;
-(char)_actionResumeBundleIdentifier:(id)arg1 error:(id*)arg2 ;
-(id)_actionStartDownload:(id)arg1 bundleIdentifier:(id)arg2 error:(id*)arg3 ;
-(unsigned)_appDownloadReasonForDownload:(id)arg1 proxy:(id)arg2 ;
-(id<ODRiTunesStoreDaemonProtocol>)ondemandd;
-(int)action;
-(void)setAction:(int)arg1 ;
-(id)_manifestURL;
-(id)_asset;
-(id)_download;
@end

