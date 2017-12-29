/*
* This header is generated by classdump-dyld 1.0
* on Friday, December 29, 2017 at 6:39:01 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /Applications/MobileMail.app/MobileMail
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIToolbar.h>

@class UIView;

@interface MFFreezableToolbar : UIToolbar {

	char _backgroundFrozen;
	UIView* _frozenBarSnapshotView;

}

@property (nonatomic,retain) UIView * frozenBarSnapshotView;              //@synthesize frozenBarSnapshotView=_frozenBarSnapshotView - In the implementation block
@property (assign,nonatomic) char backgroundFrozen;                       //@synthesize backgroundFrozen=_backgroundFrozen - In the implementation block
-(void)setBackgroundFrozen:(char)arg1 ;
-(void)setFrozenBarSnapshotView:(UIView *)arg1 ;
-(UIView *)frozenBarSnapshotView;
-(char)backgroundFrozen;
@end
