/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 11:25:30 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /Applications/Setup.app/Setup
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Setup/Setup-Structs.h>
#import <UIKit/UIView.h>

@class UIProgressView, UILabel;

@interface RestoreProgressView : UIView {

	UIProgressView* _restoreProgressBar;
	UILabel* _titleLabel;
	UILabel* _timeRemainingLabel;

}
-(void)setTimeRemainingEstimateString:(id)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(void)willMoveToSuperview:(id)arg1 ;
-(void)setProgress:(float)arg1 ;
@end

