/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 11:23:27 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SpringBoard/SpringBoard-Structs.h>
#import <UIKit/UIView.h>

@class SBIconLayoutOverrideStrategy, SBFolderView, UIView;

@interface SBFolderContainerView : UIView {

	float _statusBarHeight;
	SBIconLayoutOverrideStrategy* _iconLayoutOverrideStrategy;
	SBFolderView* _folderView;
	SBFolderContainerView* _childFolderContainerView;
	UIView* _backgroundView;

}

@property (nonatomic,readonly) SBFolderView * folderView;                                            //@synthesize folderView=_folderView - In the implementation block
@property (nonatomic,retain) SBFolderContainerView * childFolderContainerView; 
@property (nonatomic,retain) UIView * backgroundView;                                                //@synthesize backgroundView=_backgroundView - In the implementation block
@property (assign,nonatomic) float statusBarHeight;                                                  //@synthesize statusBarHeight=_statusBarHeight - In the implementation block
@property (nonatomic,retain) SBIconLayoutOverrideStrategy * iconLayoutOverrideStrategy;              //@synthesize iconLayoutOverrideStrategy=_iconLayoutOverrideStrategy - In the implementation block
-(SBIconLayoutOverrideStrategy *)iconLayoutOverrideStrategy;
-(void)setChildFolderContainerView:(SBFolderContainerView *)arg1 ;
-(SBFolderView *)folderView;
-(id)initWithFolderView:(id)arg1 statusBarHeight:(float)arg2 ;
-(void)setIconLayoutOverrideStrategy:(SBIconLayoutOverrideStrategy *)arg1 ;
-(CGRect)_frameForFolderView:(id)arg1 ;
-(SBFolderContainerView *)childFolderContainerView;
-(void)layoutSubviews;
-(float)statusBarHeight;
-(void)setBackgroundView:(UIView *)arg1 ;
-(UIView *)backgroundView;
-(void)setStatusBarHeight:(float)arg1 ;
@end

