/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 4:29:19 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/PreferenceBundles/SecondaryCloudCallingSettingsBundle.bundle/SecondaryCloudCallingSettingsBundle
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIViewController.h>

@class PHSettingsAboutView, NSString;

@interface PHSettingsGenericAboutViewController : UIViewController {

	PHSettingsAboutView* _aboutView;
	NSString* _bodyText;

}

@property (nonatomic,retain) PHSettingsAboutView * aboutView;              //@synthesize aboutView=_aboutView - In the implementation block
@property (nonatomic,retain) NSString * bodyText;                          //@synthesize bodyText=_bodyText - In the implementation block
-(PHSettingsAboutView *)aboutView;
-(void)setAboutView:(PHSettingsAboutView *)arg1 ;
-(id)initWithTitle:(id)arg1 bodyText:(id)arg2 ;
-(void)loadView;
-(void)setBodyText:(NSString *)arg1 ;
-(NSString *)bodyText;
-(void)done:(id)arg1 ;
@end

