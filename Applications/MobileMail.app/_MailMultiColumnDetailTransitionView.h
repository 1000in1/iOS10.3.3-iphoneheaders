/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 11:24:57 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /Applications/MobileMail.app/MobileMail
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MobileMail/MobileMail-Structs.h>
#import <UIKit/UIView.h>

@class UIView;

@interface _MailMultiColumnDetailTransitionView : UIView {

	UIView* _snapshotView;
	float _startingWidth;
	float _endingWidth;
	float _widthToYDeltaRatio;
	float _xOffset;
	CGPoint _originDelta;

}

@property (nonatomic,retain) UIView * snapshotView;                 //@synthesize snapshotView=_snapshotView - In the implementation block
@property (assign,nonatomic) float startingWidth;                   //@synthesize startingWidth=_startingWidth - In the implementation block
@property (assign,nonatomic) float endingWidth;                     //@synthesize endingWidth=_endingWidth - In the implementation block
@property (assign,nonatomic) CGPoint originDelta;                   //@synthesize originDelta=_originDelta - In the implementation block
@property (assign,nonatomic) float widthToYDeltaRatio;              //@synthesize widthToYDeltaRatio=_widthToYDeltaRatio - In the implementation block
@property (assign,nonatomic) float xOffset;                         //@synthesize xOffset=_xOffset - In the implementation block
-(void)setXOffset:(float)arg1 ;
-(float)xOffset;
-(id)initWithViewToSnapshot:(id)arg1 endingWidth:(float)arg2 originDelta:(CGPoint)arg3 ;
-(void)_calculateWidthToYDeltaRatio;
-(CGPoint)originDelta;
-(float)endingWidth;
-(float)startingWidth;
-(float)widthToYDeltaRatio;
-(void)setStartingWidth:(float)arg1 ;
-(void)setEndingWidth:(float)arg1 ;
-(void)setOriginDelta:(CGPoint)arg1 ;
-(void)setWidthToYDeltaRatio:(float)arg1 ;
-(void)layoutSubviews;
-(void)dealloc;
-(UIView *)snapshotView;
-(void)setSnapshotView:(UIView *)arg1 ;
@end

