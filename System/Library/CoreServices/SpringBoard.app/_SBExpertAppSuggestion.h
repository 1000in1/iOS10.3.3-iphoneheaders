/*
* This header is generated by classdump-dyld 1.0
* on Friday, December 29, 2017 at 6:36:55 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SpringBoard/SBBestAppSuggestion.h>

@class _DECAppItem, _DECResult, NSUUID;

@interface _SBExpertAppSuggestion : SBBestAppSuggestion {

	_DECAppItem* _appSuggestion;
	_DECResult* _result;

}

@property (nonatomic,readonly) _DECAppItem * appSuggestion;              //@synthesize appSuggestion=_appSuggestion - In the implementation block
@property (nonatomic,readonly) _DECResult * result;                      //@synthesize result=_result - In the implementation block
@property (nonatomic,readonly) NSUUID * resultUUID; 
-(_DECAppItem *)appSuggestion;
-(char)isArrivedAtHomePrediction;
-(char)isArrivedAtWorkPrediction;
-(char)isLocationBasedSuggestion;
-(char)isFirstWakePrediction;
-(char)isCarPlayPrediction;
-(char)isHeadphonesPrediction;
-(char)isBluetoothPrediction;
-(id)initWithAppSuggestion:(id)arg1 result:(id)arg2 ;
-(NSUUID *)resultUUID;
-(char)isBluetoothAudioPrediction;
-(char)isLocallyGeneratedSuggestion;
-(char)isEqual:(id)arg1 ;
-(unsigned)hash;
-(id)bundleIdentifier;
-(_DECResult *)result;
-(id)originatingDeviceName;
-(char)isPrediction;
@end
