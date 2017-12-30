/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 11:23:18 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol SBBannerGestureHandlerDelegate;
#import <SpringBoard/SpringBoard-Structs.h>
@class SBBannerContainerViewController, SBBannerController, SBBannerContextView;

@interface SBBannerGestureHandler : NSObject {

	id<SBBannerGestureHandlerDelegate> _delegate;
	SBBannerContainerViewController* _bannerViewController;
	SBBannerController* _bannerController;

}

@property (nonatomic,readonly) SBBannerContextView * bannerView; 
@property (nonatomic,readonly) SBBannerContainerViewController * bannerViewController;              //@synthesize bannerViewController=_bannerViewController - In the implementation block
@property (nonatomic,__weak,readonly) SBBannerController * bannerController;                        //@synthesize bannerController=_bannerController - In the implementation block
@property (assign,nonatomic,__weak) id<SBBannerGestureHandlerDelegate> delegate;                    //@synthesize delegate=_delegate - In the implementation block
+(id)notificationCenterHandlerWithBannerController:(id)arg1 bannerViewController:(id)arg2 ;
+(id)pullDownHandlerWithBannerController:(id)arg1 bannerViewController:(id)arg2 ;
-(SBBannerController *)bannerController;
-(char)handleGestureType:(int)arg1 state:(int)arg2 location:(CGPoint)arg3 displacement:(float)arg4 velocity:(float)arg5 ;
-(id)initWithBannerController:(id)arg1 bannerViewController:(id)arg2 ;
-(SBBannerContainerViewController *)bannerViewController;
-(void)invalidate;
-(void)setDelegate:(id<SBBannerGestureHandlerDelegate>)arg1 ;
-(id<SBBannerGestureHandlerDelegate>)delegate;
-(SBBannerContextView *)bannerView;
@end

