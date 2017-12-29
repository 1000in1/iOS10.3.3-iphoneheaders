/*
* This header is generated by classdump-dyld 1.0
* on Friday, December 29, 2017 at 6:29:43 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIKit-Structs.h>
#import <UIKit/_UILAConfigurationHistory.h>
#import <UIKit/_UIALAPropertySource.h>

@class NSString, NSSet;

@interface _UIALAConfigurationHistory : _UILAConfigurationHistory <_UIALAPropertySource> {

	char _hasEstablishedAlignmentValues;
	char _inAlignmentLayoutUpdateSection;
	unsigned _alignment;

}

@property (assign,nonatomic) char hasEstablishedAlignmentValues;                                                       //@synthesize hasEstablishedAlignmentValues=_hasEstablishedAlignmentValues - In the implementation block
@property (assign,getter=isInAlignmentLayoutUpdateSection,nonatomic) char inAlignmentLayoutUpdateSection;              //@synthesize inAlignmentLayoutUpdateSection=_inAlignmentLayoutUpdateSection - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic) int axis; 
@property (assign,nonatomic) char layoutFillsCanvas; 
@property (assign,nonatomic) char layoutUsesCanvasMarginsWhenFilling; 
@property (nonatomic,readonly) NSSet * _newlyHiddenItems; 
@property (nonatomic,readonly) NSSet * _newlyUnhiddenItems; 
@property (assign,nonatomic) unsigned alignment;                                                                       //@synthesize alignment=_alignment - In the implementation block
-(void)setAlignment:(unsigned)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(unsigned)alignment;
-(void)setHasEstablishedAlignmentValues:(char)arg1 ;
-(void)setInAlignmentLayoutUpdateSection:(char)arg1 ;
-(char)hasEstablishedAlignmentValues;
-(char)isInAlignmentLayoutUpdateSection;
@end
