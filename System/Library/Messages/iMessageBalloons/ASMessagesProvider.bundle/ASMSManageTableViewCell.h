/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 6:38:13 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/Messages/iMessageBalloons/ASMessagesProvider.bundle/ASMessagesProvider
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UITableViewCell.h>

@protocol ASMSManageTableViewCellToggleDelegate;
@class UISwitch, UIView, UIImage, SKUIStyledImageDataConsumer;

@interface ASMSManageTableViewCell : UITableViewCell {

	id<ASMSManageTableViewCellToggleDelegate> _toggleDelegate;
	UISwitch* _enabledSwitch;
	UIView* _isNewOrUpdatedIndicatorView;
	unsigned _roundedType;
	UIImage* _pillImage;

}

@property (nonatomic,retain) UISwitch * enabledSwitch;                                                     //@synthesize enabledSwitch=_enabledSwitch - In the implementation block
@property (nonatomic,retain) UIView * isNewOrUpdatedIndicatorView;                                         //@synthesize isNewOrUpdatedIndicatorView=_isNewOrUpdatedIndicatorView - In the implementation block
@property (nonatomic,readonly) SKUIStyledImageDataConsumer * sharedStyledImageDataConsumer; 
@property (assign,nonatomic,__weak) id<ASMSManageTableViewCellToggleDelegate> toggleDelegate;              //@synthesize toggleDelegate=_toggleDelegate - In the implementation block
@property (assign,nonatomic) unsigned roundedType;                                                         //@synthesize roundedType=_roundedType - In the implementation block
@property (nonatomic,retain) UIImage * pillImage;                                                          //@synthesize pillImage=_pillImage - In the implementation block
+(void)resetRoundedMasks;
-(UIImage *)pillImage;
-(id)roundedTopMask;
-(void)setRoundedType:(unsigned)arg1 ;
-(id<ASMSManageTableViewCellToggleDelegate>)toggleDelegate;
-(unsigned)roundedType;
-(void)setEnabledSwitch:(UISwitch *)arg1 ;
-(void)_enabledSwitchValueChanged:(id)arg1 ;
-(void)setIsNewOrUpdatedIndicatorView:(UIView *)arg1 ;
-(void)setPillImage:(UIImage *)arg1 ;
-(UIView *)isNewOrUpdatedIndicatorView;
-(void)_roundedCornersForType:(unsigned)arg1 ;
-(SKUIStyledImageDataConsumer *)sharedStyledImageDataConsumer;
-(id)roundedBottomMask;
-(id)roundedTopBottomMask;
-(void)setToggleDelegate:(id<ASMSManageTableViewCellToggleDelegate>)arg1 ;
-(void)updateRoundedTypeForIndexPath:(id)arg1 withNumberOfRowsInSection:(unsigned)arg2 ;
-(void)layoutSubviews;
-(id)initWithCoder:(id)arg1 ;
-(id)initWithStyle:(int)arg1 reuseIdentifier:(id)arg2 ;
-(void)prepareForReuse;
-(UISwitch *)enabledSwitch;
@end

