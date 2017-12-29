/*
* This header is generated by classdump-dyld 1.0
* on Friday, December 29, 2017 at 6:39:11 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /Applications/MobilePhone.app/MobilePhone
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIViewController.h>

@class NSString, _UIContentUnavailableView;

@interface VMContentUnavailableViewController : UIViewController {

	unsigned _contentUnavailableStyle;
	NSString* _contentUnavailableTitle;
	_UIContentUnavailableView* _contentUnavailableView;

}

@property (assign,nonatomic) unsigned contentUnavailableStyle;                                //@synthesize contentUnavailableStyle=_contentUnavailableStyle - In the implementation block
@property (nonatomic,copy) NSString * contentUnavailableTitle;                                //@synthesize contentUnavailableTitle=_contentUnavailableTitle - In the implementation block
@property (nonatomic,retain) _UIContentUnavailableView * contentUnavailableView;              //@synthesize contentUnavailableView=_contentUnavailableView - In the implementation block
-(NSString *)contentUnavailableTitle;
-(unsigned)contentUnavailableStyle;
-(void)setContentUnavailableStyle:(unsigned)arg1 ;
-(void)setContentUnavailableTitle:(NSString *)arg1 ;
-(id)init;
-(id)initWithCoder:(id)arg1 ;
-(void)loadView;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
-(id)initWithStyle:(unsigned)arg1 ;
-(_UIContentUnavailableView *)contentUnavailableView;
-(void)setContentUnavailableView:(_UIContentUnavailableView *)arg1 ;
@end
