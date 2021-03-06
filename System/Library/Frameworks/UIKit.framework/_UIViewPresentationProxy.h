/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 11:21:24 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIKit-Structs.h>
#import <UIKit/_UIViewPresentation.h>

@class UIView, NSArray, NSString;

@interface _UIViewPresentationProxy : NSObject <_UIViewPresentation> {

	NSArray* _subviews;
	_UIViewPresentationProxy* _superview;
	UIView* _view;

}

@property (assign,nonatomic) CGRect bounds; 
@property (assign,nonatomic) CGPoint position; 
@property (assign,nonatomic) CGRect frame; 
@property (nonatomic,retain) NSArray * subviews;                                //@synthesize subviews=_subviews - In the implementation block
@property (nonatomic,retain) _UIViewPresentationProxy * superview;              //@synthesize superview=_superview - In the implementation block
@property (assign,nonatomic,__weak) UIView * view;                              //@synthesize view=_view - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(_UIViewPresentationProxy *)superview;
-(void)removeFromSuperview;
-(void)addSubview:(id)arg1 ;
-(char)respondsToSelector:(SEL)arg1 ;
-(UIView *)view;
-(NSArray *)subviews;
-(void)setView:(UIView *)arg1 ;
-(id)initWithView:(id)arg1 ;
-(id)methodSignatureForSelector:(SEL)arg1 ;
-(void)forwardInvocation:(id)arg1 ;
-(void)setSubviews:(NSArray *)arg1 ;
-(void)setSuperview:(_UIViewPresentationProxy *)arg1 ;
@end

