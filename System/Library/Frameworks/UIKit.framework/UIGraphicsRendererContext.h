/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 11:21:22 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <UIKit/UIKit-Structs.h>
@class UIGraphicsRendererFormat;

@interface UIGraphicsRendererContext : NSObject {

	CGContextRef _backingContext;
	UIGraphicsRendererFormat* _format;
	char ___createsImages;

}

@property (assign,nonatomic) char __createsImages;                             //@synthesize __createsImages=___createsImages - In the implementation block
@property (nonatomic,readonly) CGContextRef CGContext; 
@property (nonatomic,readonly) UIGraphicsRendererFormat * format;              //@synthesize format=_format - In the implementation block
-(void)dealloc;
-(char)__createsImages;
-(CGContextRef)CGContext;
-(UIGraphicsRendererFormat *)format;
-(void)fillRect:(CGRect)arg1 ;
-(void)fillRect:(CGRect)arg1 blendMode:(int)arg2 ;
-(void)strokeRect:(CGRect)arg1 blendMode:(int)arg2 ;
-(id)initWithCGContext:(CGContextRef)arg1 format:(id)arg2 ;
-(void)strokeRect:(CGRect)arg1 ;
-(void)clipToRect:(CGRect)arg1 ;
-(void)set__createsImages:(char)arg1 ;
@end

