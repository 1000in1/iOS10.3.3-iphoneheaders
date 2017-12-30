/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 11:24:21 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /Applications/HashtagImages.app/PlugIns/HashtagImagesExtension.appex/HashtagImagesExtension
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HashtagImagesExtension/HashtagImagesExtension-Structs.h>
#import <UIKit/UIView.h>

@class UILabel, UIButton, NSString, UIColor;

@interface STSSearchNoticeView : UIView {

	UILabel* _textLabel;
	UIButton* _continueButton;
	char _contentCentered;
	NSString* _text;
	/*^block*/id _continueButtonAction;
	UIEdgeInsets _contentInsets;

}

@property (nonatomic,copy) NSString * text;                                              //@synthesize text=_text - In the implementation block
@property (nonatomic,retain) UIColor * textColor; 
@property (assign,nonatomic) UIEdgeInsets contentInsets;                                 //@synthesize contentInsets=_contentInsets - In the implementation block
@property (assign,getter=isContentCentered,nonatomic) char contentCentered;              //@synthesize contentCentered=_contentCentered - In the implementation block
@property (nonatomic,copy) id continueButtonAction;                                      //@synthesize continueButtonAction=_continueButtonAction - In the implementation block
-(id)continueButtonAction;
-(void)setContinueButtonAction:(id)arg1 ;
-(void)setContentCentered:(char)arg1 ;
-(char)isContentCentered;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(NSString *)text;
-(void)setText:(NSString *)arg1 ;
-(void)setTextColor:(UIColor *)arg1 ;
-(UIEdgeInsets)contentInsets;
-(void)setContentInsets:(UIEdgeInsets)arg1 ;
-(UIColor *)textColor;
-(void)_continuePressed:(id)arg1 ;
@end

