/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 11:21:27 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIKit-Structs.h>
#import <UIKit/UIDynamicItem.h>

@class NSString, UIBezierPath;

@interface _UIDynamicTransformer : NSObject <UIDynamicItem> {

	CGPoint _center;
	/*^block*/id _action;

}

@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic) CGPoint center; 
@property (nonatomic,readonly) CGRect bounds; 
@property (assign,nonatomic) CGAffineTransform transform; 
@property (nonatomic,readonly) unsigned collisionBoundsType; 
@property (nonatomic,readonly) UIBezierPath * collisionBoundingPath; 
-(CGPoint)center;
-(CGRect)bounds;
-(void)setTransform:(CGAffineTransform)arg1 ;
-(CGAffineTransform)transform;
-(void)setCenter:(CGPoint)arg1 ;
-(id)initWithActionBlock:(/*^block*/id)arg1 ;
@end

