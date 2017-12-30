/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 6:38:32 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/NanoPreferenceBundles/Customization/NTKCustomization.bundle/NTKCustomization
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <NTKCustomization/NTKCCFaceDetailDescriptionCell.h>

@protocol NTKCCFaceDetailExpandableDescriptionCellDelegate;
@class UIButton, NSString;

@interface NTKCCFaceDetailExpandableDescriptionCell : NTKCCFaceDetailDescriptionCell {

	char _expanded;
	char _canExpand;
	id<NTKCCFaceDetailExpandableDescriptionCellDelegate> _delegate;
	UIButton* _moreButton;
	float _laidOutWidth;
	NSString* _laidOutContentSizeCategory;

}

@property (nonatomic,retain) UIButton * moreButton;                                                             //@synthesize moreButton=_moreButton - In the implementation block
@property (assign,nonatomic) float laidOutWidth;                                                                //@synthesize laidOutWidth=_laidOutWidth - In the implementation block
@property (nonatomic,retain) NSString * laidOutContentSizeCategory;                                             //@synthesize laidOutContentSizeCategory=_laidOutContentSizeCategory - In the implementation block
@property (assign,nonatomic) char canExpand;                                                                    //@synthesize canExpand=_canExpand - In the implementation block
@property (assign,nonatomic) char expanded;                                                                     //@synthesize expanded=_expanded - In the implementation block
@property (assign,nonatomic,__weak) id<NTKCCFaceDetailExpandableDescriptionCellDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
+(id)reuseIdentifier;
-(void)_moreTapped;
-(void)_fontSizeDidChange;
-(void)setCanExpand:(char)arg1 ;
-(id)_moreButton;
-(void)setLaidOutWidth:(float)arg1 ;
-(void)setLaidOutContentSizeCategory:(NSString *)arg1 ;
-(NSString *)laidOutContentSizeCategory;
-(char)canExpand;
-(float)laidOutWidth;
-(id)init;
-(void)layoutSubviews;
-(void)setDelegate:(id<NTKCCFaceDetailExpandableDescriptionCellDelegate>)arg1 ;
-(id<NTKCCFaceDetailExpandableDescriptionCellDelegate>)delegate;
-(void)setExpanded:(char)arg1 ;
-(char)expanded;
-(void)setMoreButton:(UIButton *)arg1 ;
-(UIButton *)moreButton;
@end

