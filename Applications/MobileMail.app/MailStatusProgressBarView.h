/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 11:24:53 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /Applications/MobileMail.app/MobileMail
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MobileMail/MailStatusLabelView.h>

@class UIProgressView;

@interface MailStatusProgressBarView : MailStatusLabelView {

	UIProgressView* _progressView;
	float _filler;
	int _countUsedUp;
	float _lastProgress;
	int _lastUsedCount;
	int _lastUsedTotal;

}

@property (nonatomic,retain) UIProgressView * progressView;              //@synthesize progressView=_progressView - In the implementation block
-(id)getStatusAndProgress:(float*)arg1 ;
-(void)removeFromSuperview;
-(void)dealloc;
-(void)update;
-(UIProgressView *)progressView;
-(void)setProgressView:(UIProgressView *)arg1 ;
@end

