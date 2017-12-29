/*
* This header is generated by classdump-dyld 1.0
* on Friday, December 29, 2017 at 6:39:42 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /Applications/TV.app/TV
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIViewController.h>

@class UITextView, UIScrollView;

@interface VideosDetailsTextViewController : UIViewController {

	UITextView* _textView;
	UIScrollView* _scrollView;

}

@property (nonatomic,retain) UIScrollView * scrollView;              //@synthesize scrollView=_scrollView - In the implementation block
@property (nonatomic,retain) UITextView * textView;                  //@synthesize textView=_textView - In the implementation block
-(UIScrollView *)scrollView;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
-(void)setScrollView:(UIScrollView *)arg1 ;
-(void)setTextView:(UITextView *)arg1 ;
-(id)contentScrollView;
-(void)viewDidLoad;
-(UITextView *)textView;
@end
