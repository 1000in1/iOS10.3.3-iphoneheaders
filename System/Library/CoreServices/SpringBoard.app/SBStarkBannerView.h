/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 11:23:28 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SpringBoard/SpringBoard-Structs.h>
#import <UIKit/UIView.h>
#import <SpringBoard/SBStarkBannerItemObserver.h>
#import <libobjc.A.dylib/SBDateLabelDelegate.h>
#import <SpringBoard/SBUIBannerView.h>

@protocol SBStarkSessionConfiguring, NCNotificationDateLabel;
@class SBUIBannerContext, SBStarkBannerItem, UIImageView, UILabel, SBUIStarkBannerViewButton, NSString;

@interface SBStarkBannerView : UIView <SBStarkBannerItemObserver, SBDateLabelDelegate, SBUIBannerView> {

	id<SBStarkSessionConfiguring> _configuration;
	SBUIBannerContext* _context;
	SBStarkBannerItem* _bannerItem;
	UIImageView* _categoryImageView;
	UILabel* _titleLabel;
	float _titleAscender;
	UILabel* _subTitleLabel;
	float _subTitleAscender;
	SBUIStarkBannerViewButton* _okButton;
	SBUIStarkBannerViewButton* _actionButton;
	UIEdgeInsets _contentInsets;
	UILabel*<NCNotificationDateLabel> _relevanceDateLabel;

}

@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)bannerContext;
-(char)shouldBorrowScreen;
-(void)starkBannerItemDidReloadDisplayProperties:(id)arg1 ;
-(id)_defaultRelevanceDateFont;
-(void)_setRelevanceDate:(id)arg1 ;
-(id)initWithConfiguration:(id)arg1 context:(id)arg2 ;
-(char)_shouldShowOKButton;
-(void)_layoutForButton:(id)arg1 contentFrame:(CGRect)arg2 ;
-(UIEdgeInsets)_categoryImageInsets;
-(UIEdgeInsets)_contentInsetsForActionType:(int)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(void)dealloc;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(char)canBecomeFirstResponder;
-(id)_titleFont;
-(void)dateLabelDidChange:(id)arg1 ;
-(char)_hasSubtitle;
@end

