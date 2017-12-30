/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 11:24:32 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /Applications/Maps.app/Maps
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Maps/Maps-Structs.h>
#import <UIKit/UIViewController.h>
#import <libobjc.A.dylib/NUIContainerStackViewDelegate.h>

@class CardView, NSArray, NUIContainerStackView, NSString;

@interface ButtonsContainerViewController : UIViewController <NUIContainerStackViewDelegate> {

	CardView* _cardview;
	NSArray* _floatingButtonItems;
	NUIContainerStackView* _stackView;
	char _visualEffectDisabled;
	NSString* _blurGroupName;

}

@property (nonatomic,copy) NSString * blurGroupName;                //@synthesize blurGroupName=_blurGroupName - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(NSString *)blurGroupName;
-(id)initWithFloatingButtonItems:(id)arg1 ;
-(id)initWithFloatingButtonItems:(id)arg1 visualEffectDisabled:(char)arg2 ;
-(void)setBlurGroupName:(NSString *)arg1 ;
-(void)setVisibleControls:(int)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)loadView;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
-(void)viewDidLoad;
-(CGSize)containerStackView:(id)arg1 systemLayoutSizeFittingSize:(CGSize)arg2 forArrangedSubview:(id)arg3 ;
@end

