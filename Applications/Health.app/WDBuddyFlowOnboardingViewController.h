/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 11:24:22 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /Applications/Health.app/Health
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HealthUI/HKTitledBuddyViewController.h>
#import <Health/WDUserActivityResponder.h>

@class WDControllerManager, WDPosterImageView, AVPlayer;

@interface WDBuddyFlowOnboardingViewController : HKTitledBuddyViewController <WDUserActivityResponder> {

	WDControllerManager* _controllerManager;
	WDPosterImageView* _videoPosterImageView;
	AVPlayer* _player;

}
-(id)initWithControllerManager:(id)arg1 ;
-(void)applyChangeActivity:(id)arg1 ;
-(id)applyTransitionActivity:(id)arg1 ;
-(void)playButtonTapped:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(int)preferredStatusBarStyle;
-(id)titleString;
-(id)titleImage;
-(void)nextButtonTapped:(id)arg1 ;
-(id)subsequentViews;
-(id)bottomAnchoredButtons;
-(id)bodyString;
-(void)buttonAtIndexTapped:(int)arg1 ;
@end

