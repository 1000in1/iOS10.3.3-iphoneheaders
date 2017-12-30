/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 11:25:01 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /Applications/MobileNotes.app/MobileNotes
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MobileNotes/MobileNotes-Structs.h>
#import <QuartzCore/CALayer.h>

@class UITextView;

@interface ICTextViewSplitLayer : CALayer {

	UITextView* _textView;

}

@property (assign,nonatomic,__weak) UITextView * textView;              //@synthesize textView=_textView - In the implementation block
-(void)setTextView:(UITextView *)arg1 ;
-(UITextView *)textView;
-(void)drawInContext:(CGContextRef)arg1 ;
@end

