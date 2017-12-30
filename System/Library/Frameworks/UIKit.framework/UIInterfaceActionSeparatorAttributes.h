/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 11:21:34 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIKit-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSArray, UIColor;

@interface UIInterfaceActionSeparatorAttributes : NSObject <NSCopying> {

	NSArray* _filters;
	UIColor* _backgroundColor;
	float _opacity;

}

@property (nonatomic,retain) NSArray * filters;                      //@synthesize filters=_filters - In the implementation block
@property (nonatomic,retain) UIColor * backgroundColor;              //@synthesize backgroundColor=_backgroundColor - In the implementation block
@property (assign,nonatomic) float opacity;                          //@synthesize opacity=_opacity - In the implementation block
-(id)init;
-(void)setBackgroundColor:(UIColor *)arg1 ;
-(UIColor *)backgroundColor;
-(char)isEqual:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setFilters:(NSArray *)arg1 ;
-(float)opacity;
-(void)setOpacity:(float)arg1 ;
-(NSArray *)filters;
-(id)newSeparatorView;
-(char)_hasNonClearBackgroundColor;
@end

