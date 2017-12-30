/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 11:21:15 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class NSArray, UIView;


@protocol UIInputViewSetPlacementApplicator <NSObject>
@property (readonly) CGPoint origin; 
@property (retain,readonly) NSArray * constraints; 
@property (retain,readonly) UIView * draggableView; 
@property (readonly) UIEdgeInsets contentInsets; 
@required
+(id)applicatorForOwner:(id)arg1 withPlacement:(id)arg2;
-(void)invalidate;
-(UIEdgeInsets)contentInsets;
-(NSArray *)constraints;
-(CGPoint)origin;
-(void)prepare;
-(UIView *)draggableView;
-(char)isGesture:(id)arg1 inDraggableView:(CGPoint)arg2;
-(char)preBeginGesture:(id)arg1 shouldBegin:(char*)arg2;
-(char)allConstraintsActive;
-(void)applyChanges:(id)arg1;

@end

