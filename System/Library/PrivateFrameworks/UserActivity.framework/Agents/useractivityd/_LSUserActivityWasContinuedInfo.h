/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 31, 2017 at 12:57:52 AM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/PrivateFrameworks/UserActivity.framework/Agents/useractivityd
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString, NSError;

@interface _LSUserActivityWasContinuedInfo : NSObject {

	char _submitted;
	char _fromPairedDevice;
	char _browserFallback;
	char _cancelled;
	char _scheduledForSubmission;
	NSString* _bundleIdentifier;
	NSString* _activityType;
	unsigned _suggestedActionType;
	unsigned _payloadSize;
	NSError* _error;
	int _interactionType;
	double _transferSpeed;
	double _transferDuration;

}

@property (copy) NSString * bundleIdentifier;                             //@synthesize bundleIdentifier=_bundleIdentifier - In the implementation block
@property (copy) NSString * activityType;                                 //@synthesize activityType=_activityType - In the implementation block
@property (assign) unsigned suggestedActionType;                          //@synthesize suggestedActionType=_suggestedActionType - In the implementation block
@property (getter=isFromPairedDevice) char fromPairedDevice;              //@synthesize fromPairedDevice=_fromPairedDevice - In the implementation block
@property (getter=isBrowserFallback) char browserFallback;                //@synthesize browserFallback=_browserFallback - In the implementation block
@property (assign) unsigned payloadSize;                                  //@synthesize payloadSize=_payloadSize - In the implementation block
@property (assign) double transferSpeed;                                  //@synthesize transferSpeed=_transferSpeed - In the implementation block
@property (assign) double transferDuration;                               //@synthesize transferDuration=_transferDuration - In the implementation block
@property (copy) NSError * error;                                         //@synthesize error=_error - In the implementation block
@property (getter=isCancelled) char cancelled;                            //@synthesize cancelled=_cancelled - In the implementation block
@property (assign) int interactionType;                                   //@synthesize interactionType=_interactionType - In the implementation block
@property (assign) char scheduledForSubmission;                           //@synthesize scheduledForSubmission=_scheduledForSubmission - In the implementation block
-(void)setTransferSpeed:(double)arg1 ;
-(void)setBrowserFallback:(char)arg1 ;
-(void)setSuggestedActionType:(unsigned)arg1 ;
-(double)transferSpeed;
-(char)scheduledForSubmission;
-(void)setScheduledForSubmission:(char)arg1 ;
-(char)isBrowserFallback;
-(void)submitWasSuggestedInfo;
-(char)isFromPairedDevice;
-(void)setFromPairedDevice:(char)arg1 ;
-(unsigned)suggestedActionType;
-(void)submit;
-(id)description;
-(void)setInteractionType:(int)arg1 ;
-(NSString *)bundleIdentifier;
-(char)isCancelled;
-(void)setCancelled:(char)arg1 ;
-(int)interactionType;
-(NSString *)activityType;
-(void)setBundleIdentifier:(NSString *)arg1 ;
-(double)transferDuration;
-(void)setTransferDuration:(double)arg1 ;
-(NSError *)error;
-(void)setError:(NSError *)arg1 ;
-(void)setActivityType:(NSString *)arg1 ;
-(void)setPayloadSize:(unsigned)arg1 ;
-(unsigned)payloadSize;
@end

