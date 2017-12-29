/*
* This header is generated by classdump-dyld 1.0
* on Friday, December 29, 2017 at 6:38:48 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /Applications/Maps.app/Maps
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Maps/Maps-Structs.h>
#import <UIKit/UIView.h>

@class UIView;

@interface CenteringView : UIView {

	UIView* _contentView;
	int _contentPlacement;
	/*^block*/id _testForFindingSuperviewToCenterIn;
	UIEdgeInsets _contentInset;

}

@property (nonatomic,retain) UIView * contentView;                            //@synthesize contentView=_contentView - In the implementation block
@property (assign,nonatomic) int contentPlacement;                            //@synthesize contentPlacement=_contentPlacement - In the implementation block
@property (nonatomic,copy) id testForFindingSuperviewToCenterIn;              //@synthesize testForFindingSuperviewToCenterIn=_testForFindingSuperviewToCenterIn - In the implementation block
@property (assign,nonatomic) UIEdgeInsets contentInset;                       //@synthesize contentInset=_contentInset - In the implementation block
-(void)setContentPlacement:(int)arg1 ;
-(CGRect)_centeringBounds;
-(CGRect)frameForView:(id)arg1 contentPlacement:(int)arg2 ;
-(int)contentPlacement;
-(id)testForFindingSuperviewToCenterIn;
-(void)setTestForFindingSuperviewToCenterIn:(id)arg1 ;
-(void)setContentView:(UIView *)arg1 ;
-(void)layoutSubviews;
-(UIView *)contentView;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(void)layoutMarginsDidChange;
-(void)willRemoveSubview:(id)arg1 ;
-(UIEdgeInsets)contentInset;
-(void)setContentInset:(UIEdgeInsets)arg1 ;
@end
