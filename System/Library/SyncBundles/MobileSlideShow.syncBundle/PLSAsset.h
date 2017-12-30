/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 6:40:12 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/SyncBundles/MobileSlideShow.syncBundle/MobileSlideShow
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MobileSlideShow/PLSItem.h>

@class NSNumber, NSString, NSArray, PLSAssetProperties;

@interface PLSAsset : PLSItem {

	NSNumber* _rating;
	NSNumber* _isFlagged;
	NSString* _caption;
	NSArray* _adjustments;
	NSString* _eventUUID;
	NSNumber* _longitude;
	NSNumber* _latitude;
	NSNumber* _exposureDate;
	NSNumber* _modificationDate;
	NSString* _originalFileName;
	char _isVideo;
	char _hasVideoComplement;
	NSArray* _facesInfo;
	PLSAssetProperties* _properties;

}

@property (nonatomic,retain) NSNumber * rating;                            //@synthesize rating=_rating - In the implementation block
@property (nonatomic,retain) NSNumber * isFlagged;                         //@synthesize isFlagged=_isFlagged - In the implementation block
@property (assign,nonatomic) char isVideo;                                 //@synthesize isVideo=_isVideo - In the implementation block
@property (assign,nonatomic) char hasVideoComplement;                      //@synthesize hasVideoComplement=_hasVideoComplement - In the implementation block
@property (nonatomic,retain) NSString * caption;                           //@synthesize caption=_caption - In the implementation block
@property (nonatomic,retain) NSString * eventUUID;                         //@synthesize eventUUID=_eventUUID - In the implementation block
@property (nonatomic,retain) NSArray * adjustments;                        //@synthesize adjustments=_adjustments - In the implementation block
@property (nonatomic,retain) NSNumber * exposureDate;                      //@synthesize exposureDate=_exposureDate - In the implementation block
@property (nonatomic,retain) NSNumber * modificationDate;                  //@synthesize modificationDate=_modificationDate - In the implementation block
@property (nonatomic,retain) NSNumber * longitude;                         //@synthesize longitude=_longitude - In the implementation block
@property (nonatomic,retain) NSNumber * latitude;                          //@synthesize latitude=_latitude - In the implementation block
@property (nonatomic,retain) NSString * originalFileName;                  //@synthesize originalFileName=_originalFileName - In the implementation block
@property (nonatomic,retain) NSArray * facesInfo;                          //@synthesize facesInfo=_facesInfo - In the implementation block
@property (nonatomic,retain) PLSAssetProperties * properties;              //@synthesize properties=_properties - In the implementation block
+(id)asset;
+(id)assetWithUUID:(id)arg1 ;
-(id)_itemType;
-(id)initFromPropertyList:(id)arg1 ;
-(void)setEventUUID:(NSString *)arg1 ;
-(void)setIsFlagged:(NSNumber *)arg1 ;
-(void)setExposureDate:(NSNumber *)arg1 ;
-(NSNumber *)isFlagged;
-(NSNumber *)exposureDate;
-(id)getFacesArray;
-(id)propertyList;
-(id)init;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)dealloc;
-(id)description;
-(id)initWithUUID:(id)arg1 ;
-(void)setProperties:(PLSAssetProperties *)arg1 ;
-(PLSAssetProperties *)properties;
-(char)isVideo;
-(NSString *)caption;
-(NSNumber *)rating;
-(void)setRating:(NSNumber *)arg1 ;
-(void)setLatitude:(NSNumber *)arg1 ;
-(void)setLongitude:(NSNumber *)arg1 ;
-(void)setCaption:(NSString *)arg1 ;
-(NSString *)eventUUID;
-(char)hasVideoComplement;
-(NSString *)originalFileName;
-(NSArray *)facesInfo;
-(void)setFacesInfo:(NSArray *)arg1 ;
-(void)setOriginalFileName:(NSString *)arg1 ;
-(void)setHasVideoComplement:(char)arg1 ;
-(void)setAdjustments:(NSArray *)arg1 ;
-(char)isEquivalentTo:(id)arg1 ;
-(NSNumber *)modificationDate;
-(void)setIsVideo:(char)arg1 ;
-(NSNumber *)latitude;
-(NSNumber *)longitude;
-(void)setModificationDate:(NSNumber *)arg1 ;
-(NSArray *)adjustments;
@end

