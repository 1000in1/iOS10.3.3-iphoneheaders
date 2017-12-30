/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 11:24:14 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /Applications/FindMyFriends.app/FindMyFriends
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <FindMyFriends/FenceAddress.h>

@class CLPlacemark, FMFPlacemark, NSString;

@interface TypedCustomFenceAddress : NSObject <FenceAddress> {

	CLPlacemark* _clPlacemark;
	FMFPlacemark* _placemark;

}

@property (nonatomic,retain) CLPlacemark * clPlacemark;              //@synthesize clPlacemark=_clPlacemark - In the implementation block
@property (nonatomic,retain) FMFPlacemark * placemark;               //@synthesize placemark=_placemark - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(long)fenceAddressType;
-(id)fenceLabel;
-(id)labelToSaveToFence;
-(char)matchesMapSearchString:(id)arg1 ;
-(id)mapSearchTitle;
-(id)mapSearchLocationLabel;
-(id)mapSearchLocationAddress;
-(int)mapSearchLocationAddressType;
-(void)setClPlacemark:(CLPlacemark *)arg1 ;
-(CLPlacemark *)clPlacemark;
-(id)radius;
-(id)addressString;
-(id)latitude;
-(id)longitude;
-(FMFPlacemark *)placemark;
-(void)setPlacemark:(FMFPlacemark *)arg1 ;
@end

