/*
* This header is generated by classdump-dyld 1.0
* on Friday, December 29, 2017 at 6:29:46 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIKit-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSArray, UIColor;

@interface UISlidingBarConfiguration : NSObject <NSCopying> {

	char _leadingMayBeHidden;
	char _trailingMayBeHidden;
	char _allowMixedSideBySideAndOverlay;
	float _minimumMainWidthFraction;
	float _minimumMainWidthFractionForSecondColumn;
	float _maximumMainWidth;
	NSArray* _leadingWidths;
	NSArray* _trailingWidths;
	float _leadingBorderWidth;
	float _trailingBorderWidth;
	UIColor* _borderColor;

}

@property (assign,nonatomic) float minimumMainWidthFraction;                             //@synthesize minimumMainWidthFraction=_minimumMainWidthFraction - In the implementation block
@property (assign,nonatomic) float minimumMainWidthFractionForSecondColumn;              //@synthesize minimumMainWidthFractionForSecondColumn=_minimumMainWidthFractionForSecondColumn - In the implementation block
@property (assign,nonatomic) float maximumMainWidth;                                     //@synthesize maximumMainWidth=_maximumMainWidth - In the implementation block
@property (assign,nonatomic) char leadingMayBeHidden;                                    //@synthesize leadingMayBeHidden=_leadingMayBeHidden - In the implementation block
@property (assign,nonatomic) char trailingMayBeHidden;                                   //@synthesize trailingMayBeHidden=_trailingMayBeHidden - In the implementation block
@property (nonatomic,copy) NSArray * leadingWidths;                                      //@synthesize leadingWidths=_leadingWidths - In the implementation block
@property (nonatomic,copy) NSArray * trailingWidths;                                     //@synthesize trailingWidths=_trailingWidths - In the implementation block
@property (assign,nonatomic) float leadingBorderWidth;                                   //@synthesize leadingBorderWidth=_leadingBorderWidth - In the implementation block
@property (assign,nonatomic) float trailingBorderWidth;                                  //@synthesize trailingBorderWidth=_trailingBorderWidth - In the implementation block
@property (nonatomic,retain) UIColor * borderColor;                                      //@synthesize borderColor=_borderColor - In the implementation block
@property (assign,nonatomic) char allowMixedSideBySideAndOverlay;                        //@synthesize allowMixedSideBySideAndOverlay=_allowMixedSideBySideAndOverlay - In the implementation block
-(id)init;
-(char)isEqual:(id)arg1 ;
-(unsigned)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setBorderColor:(UIColor *)arg1 ;
-(UIColor *)borderColor;
-(void)setMinimumMainWidthFraction:(float)arg1 ;
-(void)setMinimumMainWidthFractionForSecondColumn:(float)arg1 ;
-(void)setMaximumMainWidth:(float)arg1 ;
-(void)setLeadingMayBeHidden:(char)arg1 ;
-(void)setTrailingMayBeHidden:(char)arg1 ;
-(void)setLeadingWidths:(NSArray *)arg1 ;
-(void)setTrailingWidths:(NSArray *)arg1 ;
-(void)setLeadingBorderWidth:(float)arg1 ;
-(void)setTrailingBorderWidth:(float)arg1 ;
-(void)setAllowMixedSideBySideAndOverlay:(char)arg1 ;
-(float)minimumMainWidthFraction;
-(float)minimumMainWidthFractionForSecondColumn;
-(float)maximumMainWidth;
-(char)leadingMayBeHidden;
-(char)trailingMayBeHidden;
-(NSArray *)leadingWidths;
-(NSArray *)trailingWidths;
-(float)leadingBorderWidth;
-(float)trailingBorderWidth;
-(char)allowMixedSideBySideAndOverlay;
@end
