/*
* This header is generated by classdump-dyld 1.0
* on Friday, December 29, 2017 at 6:39:35 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /Applications/Setup.app/Setup
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIViewController.h>
#import <Setup/BuddyController.h>

@protocol BuddyAppleIDSpinnerPageDelegate;
@class UIView, UILabel, UIActivityIndicatorView, NSString;

@interface BuddyAppleIDSpinnerPage : UIViewController <BuddyController> {

	UIView* _containerView;
	UILabel* _label;
	UIActivityIndicatorView* _spinner;
	NSString* _identifier;
	id<BuddyAppleIDSpinnerPageDelegate> _delegate;

}

@property (nonatomic,copy) NSString * identifier;                                              //@synthesize identifier=_identifier - In the implementation block
@property (assign,nonatomic,__weak) id<BuddyAppleIDSpinnerPageDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(char)controllerAllowsNavigatingBack;
-(char)shouldSuppressExtendedInitializationActivityIndicator;
-(id)initInExistingAccountMode:(int)arg1 identifier:(id)arg2 ;
-(void)setDelegate:(id<BuddyAppleIDSpinnerPageDelegate>)arg1 ;
-(NSString *)description;
-(id<BuddyAppleIDSpinnerPageDelegate>)delegate;
-(NSString *)identifier;
-(void)setIdentifier:(NSString *)arg1 ;
-(void)viewWillAppear:(char)arg1 ;
-(void)viewDidAppear:(char)arg1 ;
-(void)viewWillDisappear:(char)arg1 ;
-(void)viewDidDisappear:(char)arg1 ;
-(void)viewDidLayoutSubviews;
@end
