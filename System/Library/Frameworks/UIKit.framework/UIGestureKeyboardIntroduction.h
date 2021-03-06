/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 11:21:06 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <UIKit/UIKit-Structs.h>
@class UIKeyboardLayoutStar, UIView, UIKBKeyView, NSTimer;

@interface UIGestureKeyboardIntroduction : NSObject {

	UIKeyboardLayoutStar* m_layout;
	UIView* m_view;
	UIKBKeyView* m_firstKeyView;
	UIKBKeyView* m_secondKeyView;
	/*^block*/id m_completionBlock;
	double m_start;
	NSTimer* m_gestureKeyboardInfoTimer;
	CGPoint m_initPoint;
	char m_isInTransition;
	char m_hasPeeked;
	unsigned m_insertedTextLength;

}
-(void)insertText:(id)arg1 forKey:(id)arg2 ;
-(void)dismissGestureKeyboardIntroduction:(id)arg1 ;
-(id)initWithLayoutStar:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)showGestureKeyboardIntroduction;
-(void)tryGestureKeyboardFromView:(id)arg1 withEvent:(id)arg2 ;
-(void)playGestureKeyboardIntroduction:(id)arg1 ;
-(void)dismissGestureKeyboardIntroduction;
@end

