/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 11:21:34 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIKeyboardCandidateView.h>
#import <UIKit/UICollectionViewDelegate.h>
#import <UIKit/UIGestureRecognizerDelegate.h>

@class UIKeyboardCandidateGridHeader, NSString;

@interface UIKeyboardCandidateView_iPhone : UIKeyboardCandidateView <UICollectionViewDelegate, UIGestureRecognizerDelegate> {

	UIKeyboardCandidateGridHeader* _header;

}

@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(float)defaultExtendedControlHeight;
-(void)dealloc;
-(void)scrollViewWillBeginDragging:(id)arg1 ;
-(char)gestureRecognizerShouldBegin:(id)arg1 ;
-(void)handleTap;
-(void)_handleKeyboardShowOrHide:(id)arg1 ;
-(char)_shouldShowHideKeyboard;
-(char)_shouldUseFullMetrics;
-(void)_setupKeyboardInteraction;
@end

