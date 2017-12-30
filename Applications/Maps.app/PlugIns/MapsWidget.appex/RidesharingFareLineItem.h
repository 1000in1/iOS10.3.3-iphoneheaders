/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 11:24:45 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /Applications/Maps.app/PlugIns/MapsWidget.appex/MapsWidget
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MapsWidget/MapsWidget-Structs.h>
#import <Maps/ExtensionsSecondaryDetailsViewEntry.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface RidesharingFareLineItem : NSObject <ExtensionsSecondaryDetailsViewEntry, NSCopying> {

	NSString* _title;
	NSString* _details;

}

@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) NSString * title;                    //@synthesize title=_title - In the implementation block
@property (nonatomic,readonly) NSString * details;                  //@synthesize details=_details - In the implementation block
+(id)_fareItemsFromRideOption:(id)arg1 ;
-(id)_initWithTitle:(id)arg1 details:(id)arg2 ;
-(id)init;
-(char)isEqual:(id)arg1 ;
-(unsigned)hash;
-(NSString *)title;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)details;
@end

