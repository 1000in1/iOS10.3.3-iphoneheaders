/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 4:29:06 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/PreferenceBundles/CarKitSettings.bundle/CarKitSettings
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CarKitSettings/CRHomeScreenPersisting.h>

@class NSString, SBSApplicationCarPlayService;

@interface CRHomeScreenPersistenceManager : NSObject <CRHomeScreenPersisting> {

	NSString* _vehicleId;
	SBSApplicationCarPlayService* _carPlayService;

}

@property (nonatomic,retain) SBSApplicationCarPlayService * carPlayService;              //@synthesize carPlayService=_carPlayService - In the implementation block
@property (nonatomic,readonly) NSString * vehicleId;                                     //@synthesize vehicleId=_vehicleId - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)_iconStateDebugDescription:(id)arg1 ;
-(void)setCarPlayService:(SBSApplicationCarPlayService *)arg1 ;
-(NSString *)vehicleId;
-(SBSApplicationCarPlayService *)carPlayService;
-(void)resetIconState;
-(void)_processIconStateResponse:(id)arg1 completion:(/*^block*/id)arg2 ;
-(char)_iconImage:(id)arg1 isEqualToPlaceholderForBundleIdentifier:(id)arg2 ;
-(id)_carKitImageForBundleIdentifier:(id)arg1 ;
-(id)_iconForBundleIdentifier:(id)arg1 ;
-(id)initWithVehicleId:(id)arg1 ;
-(void)fetchIconStateWithCompletion:(/*^block*/id)arg1 ;
-(void)setIconState:(id)arg1 hiddenIcons:(id)arg2 ;
-(void)dealloc;
@end

