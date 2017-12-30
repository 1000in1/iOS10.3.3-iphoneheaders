/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 11:24:40 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /Applications/Maps.app/Maps
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Maps/Maps-Structs.h>
#import <UIKit/UIView.h>

@class NSString, NSBundle, UIView;

@interface NibView : UIView {

	char _hasInvokedDidLoad;
	NSString* _nibName;
	NSBundle* _bundle;
	UIView* _contentView;

}

@property (nonatomic,retain) UIView * contentView;              //@synthesize contentView=_contentView - In the implementation block
@property (nonatomic,readonly) NSString * nibName;              //@synthesize nibName=_nibName - In the implementation block
@property (nonatomic,readonly) NSBundle * bundle;               //@synthesize bundle=_bundle - In the implementation block
-(void)contentViewDidLoad;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setContentView:(UIView *)arg1 ;
-(UIView *)contentView;
-(id)initWithCoder:(id)arg1 ;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
-(NSString *)nibName;
-(NSBundle *)bundle;
@end

