/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 31, 2017 at 12:57:53 AM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/PrivateFrameworks/UserActivity.framework/PlugIns/UASharedPasteboardiOSUI.appex/UASharedPasteboardiOSUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SpringBoardUIServices/SBSUIRemoteAlertItemContentViewController.h>

@class SFProgressAlertView;

@interface UASharedPasteboardProgressViewController : SBSUIRemoteAlertItemContentViewController {

	SFProgressAlertView* _progressView;

}

@property (nonatomic,retain) SFProgressAlertView * progressView;              //@synthesize progressView=_progressView - In the implementation block
+(void)initialize;
-(void)_configureProgressView;
-(void)loadView;
-(SFProgressAlertView *)progressView;
-(void)setProgressView:(SFProgressAlertView *)arg1 ;
@end
