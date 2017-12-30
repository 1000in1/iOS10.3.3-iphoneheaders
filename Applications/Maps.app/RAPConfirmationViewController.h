/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 11:24:37 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /Applications/Maps.app/Maps
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIViewController.h>

@class NSString, UIImage, UIButton, NSArray;

@interface RAPConfirmationViewController : UIViewController {

	NSString* _message;
	UIImage* _icon;
	/*^block*/id _completion;
	UIButton* _skipButton;
	NSArray* _portraitSpecificConstraints;
	NSArray* _landscapeSpecificConstraints;

}

@property (nonatomic,copy) NSString * message;                                  //@synthesize message=_message - In the implementation block
@property (nonatomic,retain) UIImage * icon;                                    //@synthesize icon=_icon - In the implementation block
@property (nonatomic,copy) id completion;                                       //@synthesize completion=_completion - In the implementation block
@property (nonatomic,retain) UIButton * skipButton;                             //@synthesize skipButton=_skipButton - In the implementation block
@property (nonatomic,copy) NSArray * portraitSpecificConstraints;               //@synthesize portraitSpecificConstraints=_portraitSpecificConstraints - In the implementation block
@property (nonatomic,copy) NSArray * landscapeSpecificConstraints;              //@synthesize landscapeSpecificConstraints=_landscapeSpecificConstraints - In the implementation block
+(id)skipButtonFont;
+(id)sendButtonFont;
+(id)presentWithMessage:(id)arg1 icon:(id)arg2 withPresentingViewController:(id)arg3 completion:(/*^block*/id)arg4 ;
+(id)presentForLocationOfInterestType:(int)arg1 withPresentingViewController:(id)arg2 completion:(/*^block*/id)arg3 ;
+(id)defaultPOIStyleAttributes;
+(id)titleFont;
+(id)messageFont;
-(id)initWithMessage:(id)arg1 icon:(id)arg2 ;
-(void)_sendButtonTapped;
-(NSArray *)portraitSpecificConstraints;
-(void)setPortraitSpecificConstraints:(NSArray *)arg1 ;
-(NSArray *)landscapeSpecificConstraints;
-(void)setLandscapeSpecificConstraints:(NSArray *)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)traitCollectionDidChange:(id)arg1 ;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
-(id)completion;
-(void)setCompletion:(id)arg1 ;
-(void)viewDidLoad;
-(void)setIcon:(UIImage *)arg1 ;
-(void)setMessage:(NSString *)arg1 ;
-(NSString *)message;
-(UIImage *)icon;
-(void)setupViews;
-(void)setSkipButton:(UIButton *)arg1 ;
-(UIButton *)skipButton;
-(void)_skipButtonTapped;
@end

