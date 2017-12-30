/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 11:23:22 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SpringBoard/SpringBoard-Structs.h>
#import <UIKit/UIView.h>

@class SBSceneViewAppIconView, SBAppResizingBlurContainerView, UIView;

@interface SBAppResizingPlaceholderView : UIView {

	char _creatingBlur;
	SBSceneViewAppIconView* _appIconView;
	SBAppResizingBlurContainerView* _blurContainerView;
	UIView* _blurredAppSnapshotView;

}

@property (nonatomic,retain) SBAppResizingBlurContainerView * blurContainerView;              //@synthesize blurContainerView=_blurContainerView - In the implementation block
@property (nonatomic,retain) UIView * blurredAppSnapshotView;                                 //@synthesize blurredAppSnapshotView=_blurredAppSnapshotView - In the implementation block
@property (assign,getter=isCreatingBlur,nonatomic) char creatingBlur;                         //@synthesize creatingBlur=_creatingBlur - In the implementation block
@property (nonatomic,retain) SBSceneViewAppIconView * appIconView;                            //@synthesize appIconView=_appIconView - In the implementation block
-(id)initWithAppView:(id)arg1 ;
-(UIView *)blurredAppSnapshotView;
-(char)isCreatingBlur;
-(void)setCreatingBlur:(char)arg1 ;
-(SBAppResizingBlurContainerView *)blurContainerView;
-(void)setBlurredAppSnapshotView:(UIView *)arg1 ;
-(void)setBlurContainerView:(SBAppResizingBlurContainerView *)arg1 ;
-(void)generateBlurredAppSnapshotWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)setAppIconView:(SBSceneViewAppIconView *)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(id)initWithCoder:(id)arg1 ;
-(SBSceneViewAppIconView *)appIconView;
@end

