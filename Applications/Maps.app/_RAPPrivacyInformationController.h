/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 11:24:43 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /Applications/Maps.app/Maps
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIViewController.h>

@class UILabel, UISwitch, NSMutableArray;

@interface _RAPPrivacyInformationController : UIViewController {

	/*^block*/id _completion;
	UILabel* _titleLabel;
	UILabel* _subtitleLabel;
	UISwitch* _followUpSwitch;
	NSMutableArray* _portraitSpecificConstraints;
	NSMutableArray* _landscapeSpecificConstraints;

}
+(id)fontForTextStyle:(id)arg1 size:(float)arg2 ;
+(id)titleFont;
+(id)subtitleFont;
+(id)descriptionFont;
-(id)setupTitleViewsInContainer:(id)arg1 ;
-(id)setupContactViewsInContainer:(id)arg1 ;
-(void)cancelPrivacyAgreement;
-(void)acceptPrivacyAgreement;
-(id)initWithCoder:(id)arg1 ;
-(void)traitCollectionDidChange:(id)arg1 ;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
-(void)viewDidLoad;
-(id)initWithCompletion:(/*^block*/id)arg1 ;
-(void)setupViews;
@end

