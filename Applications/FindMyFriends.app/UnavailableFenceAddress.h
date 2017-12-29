/*
* This header is generated by classdump-dyld 1.0
* on Friday, December 29, 2017 at 6:38:19 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /Applications/FindMyFriends.app/FindMyFriends
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <FindMyFriends/FenceAddress.h>

@class NSString;

@interface UnavailableFenceAddress : NSObject <FenceAddress> {

	NSString* _fenceLabel;
	NSString* _addressString;

}

@property (nonatomic,retain) NSString * fenceLabel;                 //@synthesize fenceLabel=_fenceLabel - In the implementation block
@property (nonatomic,retain) NSString * addressString;              //@synthesize addressString=_addressString - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(long)fenceAddressType;
-(NSString *)fenceLabel;
-(id)labelToSaveToFence;
-(char)matchesMapSearchString:(id)arg1 ;
-(id)mapSearchTitle;
-(id)mapSearchLocationLabel;
-(id)mapSearchLocationAddress;
-(int)mapSearchLocationAddressType;
-(void)setFenceLabel:(NSString *)arg1 ;
-(void)setAddressString:(NSString *)arg1 ;
-(id)radius;
-(NSString *)addressString;
-(id)addressDictionary;
-(id)latitude;
-(id)longitude;
-(id)placemark;
@end
