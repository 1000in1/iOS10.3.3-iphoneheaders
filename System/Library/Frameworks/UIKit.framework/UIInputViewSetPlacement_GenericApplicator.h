/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 11:21:15 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIKit-Structs.h>
#import <UIKit/UIInputViewSetPlacementApplicator.h>

@protocol UIInputViewSetPlacementOwner;
@class NSArray, UIView, NSLayoutConstraint, NSString;

@interface UIInputViewSetPlacement_GenericApplicator : NSObject <UIInputViewSetPlacementApplicator> {

	NSLayoutConstraint* _horizontalConstraint;
	NSLayoutConstraint* _verticalConstraint;
	NSLayoutConstraint* _widthConstraint;
	id<UIInputViewSetPlacementOwner> _owner;

}

@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (readonly) CGPoint origin; 
@property (retain,readonly) NSArray * constraints; 
@property (retain,readonly) UIView * draggableView; 
@property (readonly) UIEdgeInsets contentInsets; 
+(id)applicatorForOwner:(id)arg1 withPlacement:(id)arg2 ;
-(void)invalidate;
-(char)isEqual:(id)arg1 ;
-(NSString *)description;
-(UIEdgeInsets)contentInsets;
-(NSArray *)constraints;
-(CGPoint)origin;
-(void)prepare;
-(UIView *)draggableView;
-(char)isGesture:(id)arg1 inDraggableView:(CGPoint)arg2 ;
-(char)preBeginGesture:(id)arg1 shouldBegin:(char*)arg2 ;
-(id)initForOwner:(id)arg1 withPlacement:(id)arg2 ;
-(CGRect)targetRect;
-(void)checkVerticalConstraint;
-(char)allConstraintsActive;
-(void)applyChanges:(id)arg1 ;
@end

