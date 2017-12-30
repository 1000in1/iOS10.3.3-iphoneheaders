/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 11:21:16 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIKit-Structs.h>
#import <UIKit/UIColor.h>

@interface UIDeviceRGBColor : UIColor {

	float redComponent;
	float greenComponent;
	float blueComponent;
	float alphaComponent;
	CGColorRef _cachedColor;

}
-(CGColorRef)CGColor;
-(void)dealloc;
-(char)isEqual:(id)arg1 ;
-(unsigned)hash;
-(id)description;
-(id)colorWithAlphaComponent:(float)arg1 ;
-(char)getWhite:(float*)arg1 alpha:(float*)arg2 ;
-(void)set;
-(id)copyWithZone:(NSZone*)arg1 ;
-(char)getRed:(float*)arg1 green:(float*)arg2 blue:(float*)arg3 alpha:(float*)arg4 ;
-(id)initWithHue:(float)arg1 saturation:(float)arg2 brightness:(float)arg3 alpha:(float)arg4 ;
-(void)setFill;
-(id)initWithRed:(float)arg1 green:(float)arg2 blue:(float)arg3 alpha:(float)arg4 ;
-(float)alphaComponent;
-(void)setStroke;
-(char)_isDeepColor;
-(id)initWithCGColor:(CGColorRef)arg1 ;
-(id)colorSpaceName;
-(CGColorRef)_createCGColorWithAlpha:(float)arg1 ;
-(char)getHue:(float*)arg1 saturation:(float*)arg2 brightness:(float*)arg3 alpha:(float*)arg4 ;
@end

