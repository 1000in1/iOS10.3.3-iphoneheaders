/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 6:40:01 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/SpringBoardPlugins/MapsLockScreen.lockbundle/MapsLockScreen
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIView.h>
#import <MapsLockScreen/SBUIBannerView.h>

@class SBUIBannerContext, BannerItem, NSString;

@interface BannerView : UIView <SBUIBannerView> {

	SBUIBannerContext* _bannerContext;

}

@property (nonatomic,readonly) SBUIBannerContext * bannerContext;              //@synthesize bannerContext=_bannerContext - In the implementation block
@property (nonatomic,readonly) BannerItem * bannerItem; 
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(BannerItem *)bannerItem;
-(SBUIBannerContext *)bannerContext;
-(void)updateFromGuidanceChange:(id)arg1 ;
-(void)updateFromBannerItem;
-(id)initWithContext:(id)arg1 ;
@end

