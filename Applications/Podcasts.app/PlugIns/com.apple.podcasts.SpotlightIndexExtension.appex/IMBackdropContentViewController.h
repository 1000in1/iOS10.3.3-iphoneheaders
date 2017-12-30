/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 11:25:22 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /Applications/Podcasts.app/PlugIns/com.apple.podcasts.SpotlightIndexExtension.appex/com.apple.podcasts.SpotlightIndexExtension
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIViewController.h>

@class UIViewController;

@interface IMBackdropContentViewController : UIViewController {

	int _backdropViewPrivateStyle;
	UIViewController* _contentViewController;

}

@property (assign,nonatomic) int backdropViewPrivateStyle;                          //@synthesize backdropViewPrivateStyle=_backdropViewPrivateStyle - In the implementation block
@property (nonatomic,retain) UIViewController * contentViewController;              //@synthesize contentViewController=_contentViewController - In the implementation block
-(char)metricsEnabled;
-(void)dealloc;
-(void)loadView;
-(void)setContentViewController:(UIViewController *)arg1 ;
-(UIViewController *)contentViewController;
-(id)initWithContentViewController:(id)arg1 ;
-(void)setBackdropViewPrivateStyle:(int)arg1 ;
-(int)backdropViewPrivateStyle;
@end

