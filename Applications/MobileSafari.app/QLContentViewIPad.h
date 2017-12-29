/*
* This header is generated by classdump-dyld 1.0
* on Friday, December 29, 2017 at 6:39:16 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /Applications/MobileSafari.app/MobileSafari
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MobileSafari/MobileSafari-Structs.h>
#import <UIKit/UIImageView.h>
#import <MobileSafari/QLContentView.h>

@class QLDocumentInfoView, UIToolbar, OpenInApplicationBarButtonItem, UIBarButtonItem, NSString;

@interface QLContentViewIPad : UIImageView <QLContentView> {

	QLDocumentInfoView* _documentInfoView;
	UIToolbar* _buttonBar;
	OpenInApplicationBarButtonItem* _defaultApplicationButtonItem;
	UIBarButtonItem* _otherApplicationsButtonItem;

}

@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithFrame:(CGRect)arg1 tabDocument:(id)arg2 quickLookBannerViewDelegate:(id)arg3 ;
-(void)_updateDefaultApplicationButtonItem:(id)arg1 multipleApplications:(char)arg2 ;
-(void)_updateOtherApplicationsButtonItem;
-(void)layoutSubviews;
-(void)updateWithQuickLookDocument:(id)arg1 ;
-(void)hideBanner;
-(void)showBanner;
@end
