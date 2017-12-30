/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 11:21:25 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIStatusBarItemView.h>

@class UIActivityIndicatorView;

@interface UIStatusBarActivityItemView : UIStatusBarItemView {

	UIActivityIndicatorView* _activityIndicator;
	char _slowActivity;
	char _syncActivity;

}
-(void)setVisible:(char)arg1 ;
-(char)updateForNewData:(id)arg1 actions:(int)arg2 ;
-(float)updateContentsAndWidth;
-(float)shadowPadding;
-(void)_stopAnimating;
-(void)_startAnimating;
-(int)_activityIndicatorStyle;
@end

