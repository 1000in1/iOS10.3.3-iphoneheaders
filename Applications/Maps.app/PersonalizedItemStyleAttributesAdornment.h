/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 11:24:42 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /Applications/Maps.app/Maps
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Maps/PersonalizedItemAdornment.h>

@class GEOFeatureStyleAttributes;

@interface PersonalizedItemStyleAttributesAdornment : PersonalizedItemAdornment {

	GEOFeatureStyleAttributes* _styleAttributes;

}

@property (nonatomic,readonly) GEOFeatureStyleAttributes * styleAttributes;              //@synthesize styleAttributes=_styleAttributes - In the implementation block
+(id)defaultAdornment;
+(id)adornmentWithStyleAttributes:(id)arg1 ;
+(id)adornmentWithStyleAttributes:(id)arg1 additionalAttributes:(id)arg2 ;
-(id)combineAdornment:(id)arg1 ;
-(id)initWithStyleAttributes:(id)arg1 additionalAttributes:(id)arg2 ;
-(GEOFeatureStyleAttributes *)styleAttributes;
@end

