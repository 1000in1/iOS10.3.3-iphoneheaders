/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 11:23:24 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SpringBoard/SpringBoard-Structs.h>
#import <UIKit/UIView.h>
#import <SpringBoard/SBUIBannerView.h>
#import <SpringBoard/SBVibrantBannerView.h>

@protocol SBDefaultBannerViewSource;
@class SBUIBannerContext, UIImageView, SBDefaultBannerTextView, UIView, NSString;

@interface SBDefaultBannerView : UIView <SBUIBannerView, SBVibrantBannerView> {

	SBUIBannerContext* _context;
	id<SBDefaultBannerViewSource> _viewSource;
	UIImageView* _iconImageView;
	SBDefaultBannerTextView* _textView;
	UIImageView* _attachmentImageView;
	UIView* _secondaryContentView;

}

@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)defaultColorForElement:(int)arg1 ;
+(id)_defaultRelevanceDateColor;
-(id)bannerContext;
-(id)colorForElement:(int)arg1 ;
-(void)setColor:(id)arg1 forElement:(int)arg2 ;
-(void)setSecondaryContentView:(id)arg1 ;
-(id)_relevanceDateColor;
-(char)_showAttachmentPreview;
-(char)_hasAttachment;
-(CGRect)_attachmentImageViewFrame;
-(CGRect)_textViewFrame;
-(CGRect)_iconImageViewFrame;
-(CGRect)_secondaryContentFrame;
-(CGRect)_textViewFrameForBounds:(CGRect)arg1 ;
-(float)_secondaryContentInsetY;
-(CGRect)_secondaryContentFrameForBounds:(CGRect)arg1 ;
-(CGRect)_contentFrameForBounds:(CGRect)arg1 ;
-(CGRect)_contentFrame;
-(float)_iconInsetY;
-(float)_textInsetX;
-(void)_setRelevanceDateColor:(id)arg1 ;
-(void)setPercentPulledDown:(float)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(id)initWithContext:(id)arg1 ;
@end

