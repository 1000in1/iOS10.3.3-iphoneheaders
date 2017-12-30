/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 11:24:17 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /Applications/FindMyiPhone.app/FindMyiPhone
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <FMCoreUI/FMViewController.h>

@class UIView, UILabel;

@interface LoadingViewController : FMViewController {

	char _preloadComplete;
	UIView* _compassContainerView;
	UILabel* _northLabel;
	UILabel* _eastLabel;
	UILabel* _southLabel;
	UILabel* _westLabel;

}

@property (assign,nonatomic) char preloadComplete;                       //@synthesize preloadComplete=_preloadComplete - In the implementation block
@property (nonatomic,retain) UIView * compassContainerView;              //@synthesize compassContainerView=_compassContainerView - In the implementation block
@property (nonatomic,retain) UILabel * northLabel;                       //@synthesize northLabel=_northLabel - In the implementation block
@property (nonatomic,retain) UILabel * eastLabel;                        //@synthesize eastLabel=_eastLabel - In the implementation block
@property (nonatomic,retain) UILabel * southLabel;                       //@synthesize southLabel=_southLabel - In the implementation block
@property (nonatomic,retain) UILabel * westLabel;                        //@synthesize westLabel=_westLabel - In the implementation block
-(UIView *)compassContainerView;
-(id)compassBodyAnimation;
-(UILabel *)northLabel;
-(id)compassLabelAnimation;
-(UILabel *)eastLabel;
-(UILabel *)southLabel;
-(UILabel *)westLabel;
-(void)startObservingSession:(id)arg1 ;
-(void)stopObservingSession:(id)arg1 ;
-(void)refreshCallbackWithKeypath:(id)arg1 account:(id)arg2 change:(id)arg3 ;
-(void)setPreloadComplete:(char)arg1 ;
-(char)preloadComplete;
-(void)loadingDone;
-(void)setCompassContainerView:(UIView *)arg1 ;
-(void)setNorthLabel:(UILabel *)arg1 ;
-(void)setEastLabel:(UILabel *)arg1 ;
-(void)setSouthLabel:(UILabel *)arg1 ;
-(void)setWestLabel:(UILabel *)arg1 ;
-(unsigned)supportedInterfaceOrientations;
-(void)viewWillAppear:(char)arg1 ;
-(void)viewDidAppear:(char)arg1 ;
@end

