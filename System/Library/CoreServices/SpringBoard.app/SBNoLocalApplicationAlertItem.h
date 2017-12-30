/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 11:23:23 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SpringBoardUI/SBAlertItem.h>

@class NSURL;

@interface SBNoLocalApplicationAlertItem : SBAlertItem {

	NSURL* _url;
	/*^block*/id _completion;

}

@property (nonatomic,copy,readonly) NSURL * url;                //@synthesize url=_url - In the implementation block
@property (nonatomic,copy,readonly) id completion;              //@synthesize completion=_completion - In the implementation block
-(id)initWithURL:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)_openAppStore;
-(id)init;
-(NSURL *)url;
-(id)completion;
-(char)dismissOnLock;
-(void)configure:(char)arg1 requirePasscodeForActions:(char)arg2 ;
-(void)deactivateForButton;
-(char)allowMenuButtonDismissal;
-(char)shouldShowInLockScreen;
@end

