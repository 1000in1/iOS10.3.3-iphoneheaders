/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 11:25:23 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /Applications/Podcasts.app/PlugIns/com.apple.podcasts.SpotlightIndexExtension.appex/com.apple.podcasts.SpotlightIndexExtension
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIGestureRecognizer.h>
#import <UIKit/UIGestureRecognizerDelegate.h>

@class UIView, NSMutableSet, NSString;

@interface AETouchOutsideViewGestureRecognizer : UIGestureRecognizer <UIGestureRecognizerDelegate> {

	UIView* mWatchView;
	NSMutableSet* mTargets;

}

@property (assign,nonatomic) UIView * watchView; 
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(char)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2 ;
-(void)touchesBegan:(id)arg1 withEvent:(id)arg2 ;
-(void)removeTarget:(id)arg1 action:(SEL)arg2 ;
-(void)addTarget:(id)arg1 action:(SEL)arg2 ;
-(UIView *)watchView;
-(id)initWithTarget:(id)arg1 action:(SEL)arg2 watchView:(id)arg3 ;
-(void)setWatchView:(UIView *)arg1 ;
@end

