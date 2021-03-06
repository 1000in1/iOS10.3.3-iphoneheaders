/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 11:23:42 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AVFoundation/AVFoundation-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <AVFoundation/AVAsynchronousKeyValueLoading.h>

@class AVAssetTrackInternal, AVAsset;

@interface AVAssetTrack : NSObject <NSCopying, AVAsynchronousKeyValueLoading> {

	AVAssetTrackInternal* _track;

}

@property (nonatomic,__weak,readonly) AVAsset * asset; 
@property (nonatomic,readonly) int trackID; 
+(id)mediaCharacteristicsForMediaTypes;
+(id)keyPathsForValuesAffectingTimeRange;
-(SCD_Struct_AV2)vcp_endTime;
-(SCD_Struct_AV2)vcp_startTime;
-(int)vcp_orientation;
-(id)init;
-(int)layer;
-(void)dealloc;
-(char)isEqual:(id)arg1 ;
-(unsigned)hash;
-(id)description;
-(char)isEnabled;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)locale;
-(AVAsset *)asset;
-(CGSize)dimensions;
-(id)languageCode;
-(CGSize)naturalSize;
-(float)preferredVolume;
-(int)naturalTimeScale;
-(id)availableMetadataFormats;
-(id)metadataForFormat:(id)arg1 ;
-(id)_initWithAsset:(id)arg1 trackID:(int)arg2 ;
-(id)_initWithAsset:(id)arg1 trackIndex:(long)arg2 ;
-(id)_weakReference;
-(int)statusOfValueForKey:(id)arg1 ;
-(char)hasMediaCharacteristics:(id)arg1 ;
-(OpaqueFigAssetTrackRef)_figAssetTrack;
-(void)_startListeningToFigAssetTrackNotifications;
-(id)_initWithAsset:(id)arg1 trackID:(int)arg2 trackIndex:(long)arg3 ;
-(void)_stopListeningToFigAssetTrackNotifications;
-(OpaqueFigTrackReaderRef)_figTrackReader;
-(long)playabilityValidationResult;
-(char)isSelfContained;
-(long long)totalSampleDataLength;
-(SCD_Struct_AV3)mediaPresentationTimeRange;
-(SCD_Struct_AV3)mediaDecodeTimeRange;
-(char)requiresFrameReordering;
-(float)estimatedDataRate;
-(id)loudnessInfo;
-(id)segmentForTrackTime:(SCD_Struct_AV2)arg1 ;
-(SCD_Struct_AV2)samplePresentationTimeForTrackTime:(SCD_Struct_AV2)arg1 ;
-(int)alternateGroupID;
-(int)defaultAlternateGroupID;
-(int)provisionalAlternateGroupID;
-(char)isExcludedFromAutoselectionInTrackGroup;
-(id)associatedTracksOfType:(id)arg1 ;
-(id)_firstAssociatedTrackWithAssociationType:(id)arg1 ;
-(id)_trackReferences;
-(id)_assetTrackInspector;
-(char)_subtitleFormatDescriptionMatchesTextDisplayFlags:(unsigned)arg1 flagsMask:(unsigned)arg2 ;
-(SCD_Struct_AV2)minFrameDuration;
-(id)_fallbackTrack;
-(id)_followingTrackAmongTracks:(id)arg1 ;
-(id)_pairedForcedOnlySubtitlesTrack;
-(id)availableTrackAssociationTypes;
-(char)_hasMultipleEdits;
-(char)_hasScaledEdits;
-(char)_hasEmptyEdits;
-(char)_hasMultipleDistinctFormatDescriptions;
-(char)_firstFormatDescriptionIsLPCM;
-(char)hasMediaCharacteristic:(id)arg1 ;
-(char)hasProtectedContent;
-(id)mediaCharacteristics;
-(id)extendedLanguageTag;
-(id)commonMetadata;
-(id)formatDescriptions;
-(int)trackID;
-(id)segments;
-(id)mediaType;
-(id)metadata;
-(float)nominalFrameRate;
-(int)statusOfValueForKey:(id)arg1 error:(id*)arg2 ;
-(SCD_Struct_AV3)timeRange;
-(char)isPlayable;
-(void)loadValuesAsynchronouslyForKeys:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(CGAffineTransform)preferredTransform;
-(void)finalize;
@end

