/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 11:21:24 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIStatusBarItemView.h>

@class NSString;

@interface UIStatusBarPersonNameItemView : UIStatusBarItemView {

	NSString* _personNameString;
	float _letterSpacing;
	float _maxWidth;

}
-(id)contentsImage;
-(char)updateForNewData:(id)arg1 actions:(int)arg2 ;
-(int)legibilityStyle;
-(float)standardPadding;
-(char)_updateWithPersonName:(id)arg1 maxWidth:(float)arg2 ;
-(float)resetContentOverlap;
-(float)addContentOverlap:(float)arg1 ;
@end

