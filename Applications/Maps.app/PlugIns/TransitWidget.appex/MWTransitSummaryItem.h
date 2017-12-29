/*
* This header is generated by classdump-dyld 1.0
* on Friday, December 29, 2017 at 6:38:52 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /Applications/Maps.app/PlugIns/TransitWidget.appex/TransitWidget
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSCoding.h>

@class NSString, NSArray, MWUserActivityData;

@interface MWTransitSummaryItem : NSObject <NSCoding> {

	NSString* _primaryText;
	NSArray* _artworks;
	MWUserActivityData* _userActivityData;

}

@property (nonatomic,copy,readonly) NSString * primaryText;                        //@synthesize primaryText=_primaryText - In the implementation block
@property (nonatomic,copy,readonly) NSArray * artworks;                            //@synthesize artworks=_artworks - In the implementation block
@property (nonatomic,readonly) MWUserActivityData * userActivityData;              //@synthesize userActivityData=_userActivityData - In the implementation block
-(id)initWithText:(id)arg1 artworks:(id)arg2 userActivityData:(id)arg3 ;
-(char)isEqualToSummaryItem:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(char)isEqual:(id)arg1 ;
-(MWUserActivityData *)userActivityData;
-(NSArray *)artworks;
-(NSString *)primaryText;
@end
