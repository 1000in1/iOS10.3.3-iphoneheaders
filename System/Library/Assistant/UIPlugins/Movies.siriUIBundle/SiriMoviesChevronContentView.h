/*
* This header is generated by classdump-dyld 1.0
* on Friday, December 29, 2017 at 6:36:24 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/Assistant/UIPlugins/Movies.siriUIBundle/Movies
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Movies/Movies-Structs.h>
#import <UIKit/UIView.h>

@class UILabel, UIImageView, NSArray, NSString, UIImage;

@interface SiriMoviesChevronContentView : UIView {

	UILabel* _textLabel;
	UIImageView* _trailingIconView;
	NSArray* _constraints;
	NSString* _text;
	UIImage* _trailingIcon;

}

@property (nonatomic,copy) NSString * text;                       //@synthesize text=_text - In the implementation block
@property (nonatomic,retain) UIImage * trailingIcon;              //@synthesize trailingIcon=_trailingIcon - In the implementation block
-(id)initWithFrame:(CGRect)arg1 ;
-(NSString *)text;
-(void)setText:(NSString *)arg1 ;
-(void)updateConstraints;
-(void)setTrailingIcon:(UIImage *)arg1 ;
-(UIImage *)trailingIcon;
@end
