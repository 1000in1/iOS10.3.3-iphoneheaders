/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 11:23:46 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /Applications/Bridge.app/Bridge
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Preferences/PSSoftwareUpdateTableView.h>

@class UILabel, UIProgressView, NSTimer;

@interface COSSoftwareUpdateTableView : PSSoftwareUpdateTableView {

	char _isDisplayingRevLockBootProgressIndicator;
	UILabel* _updateCompletingLabel;
	UIProgressView* _progressBar;
	NSTimer* _progressTimer;
	double _revLockBootProgressIndicatorElapsedDuration;
	double _revLockBootProgressIndicatorTotalDuration;

}

@property (nonatomic,retain) UILabel * updateCompletingLabel;                                   //@synthesize updateCompletingLabel=_updateCompletingLabel - In the implementation block
@property (nonatomic,retain) UIProgressView * progressBar;                                      //@synthesize progressBar=_progressBar - In the implementation block
@property (nonatomic,retain) NSTimer * progressTimer;                                           //@synthesize progressTimer=_progressTimer - In the implementation block
@property (nonatomic,readonly) char isDisplayingRevLockBootProgressIndicator;                   //@synthesize isDisplayingRevLockBootProgressIndicator=_isDisplayingRevLockBootProgressIndicator - In the implementation block
@property (nonatomic,readonly) double revLockBootProgressIndicatorElapsedDuration;              //@synthesize revLockBootProgressIndicatorElapsedDuration=_revLockBootProgressIndicatorElapsedDuration - In the implementation block
@property (nonatomic,readonly) double revLockBootProgressIndicatorTotalDuration;                //@synthesize revLockBootProgressIndicatorTotalDuration=_revLockBootProgressIndicatorTotalDuration - In the implementation block
-(void)displayRevLockBootProgressIndicatorWithElapsedDuration:(double)arg1 totalDuration:(double)arg2 ;
-(void)progressTimerFired:(id)arg1 ;
-(char)isDisplayingRevLockBootProgressIndicator;
-(double)revLockBootProgressIndicatorElapsedDuration;
-(double)revLockBootProgressIndicatorTotalDuration;
-(UILabel *)updateCompletingLabel;
-(void)setUpdateCompletingLabel:(UILabel *)arg1 ;
-(NSTimer *)progressTimer;
-(void)setProgressTimer:(NSTimer *)arg1 ;
-(void)layoutSubviews;
-(void)setState:(int)arg1 ;
-(UIProgressView *)progressBar;
-(void)setProgressBar:(UIProgressView *)arg1 ;
@end

