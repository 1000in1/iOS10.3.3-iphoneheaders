/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 31, 2017 at 12:57:35 AM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/PrivateFrameworks/SlideshowKit.framework/Frameworks/OpusKit.framework/OpusKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <OpusKit/OpusKit-Structs.h>
#import <OpusFoundation/OFUIView.h>
#import <UIKit/UIGestureRecognizerDelegate.h>

@class OKPresentationViewAllGestureRecognizer, NSString;

@interface OKPresentationViewProxy : OFUIView <UIGestureRecognizerDelegate> {

	OKPresentationViewAllGestureRecognizer* _allGestureRecognizer;

}

@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setFrame:(CGRect)arg1 ;
-(void)dealloc;
-(void)setBounds:(CGRect)arg1 ;
-(char)gestureRecognizerShouldBegin:(id)arg1 ;
-(char)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2 ;
-(char)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2 ;
-(void)commonInit;
-(id)presentationViewController;
-(void)handleAllGesture:(id)arg1 ;
@end

