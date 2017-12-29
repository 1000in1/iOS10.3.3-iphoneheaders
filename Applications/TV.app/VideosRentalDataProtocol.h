/*
* This header is generated by classdump-dyld 1.0
* on Friday, December 29, 2017 at 6:39:43 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /Applications/TV.app/TV
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class NSDate, NSNumber, MPMediaItem, VideosDownloadMetadata;


@protocol VideosRentalDataProtocol <NSObject>
@property (readonly) NSDate * nextEventDate; 
@property (readonly) NSNumber * rentalIdentifier; 
@property (readonly) NSDate * expirationDate; 
@property (readonly) double playbackTimeRemaining; 
@property (readonly) int rentalState; 
@property (readonly) MPMediaItem * mediaItem; 
@property (readonly) int rentalType; 
@property (readonly) int assetType; 
@property (readonly) char willExpireSoon; 
@property (getter=isExpired,readonly) char expired; 
@property (getter=isPlaying) char playing; 
@property (readonly) int bagError; 
@property (nonatomic,retain) VideosDownloadMetadata * downloadMetadata; 
@property (getter=isDeferringRentalEvents,readonly) char deferringRentalEvents; 
@required
-(int)rentalState;
-(void)synchronizeLocalData;
-(void)performActionForLocalNotification;
-(void)performDeferredLocalNotifications;
-(void)resetForReason:(unsigned)arg1;
-(void)setFileProcessorInfo:(id)arg1;
-(void)setBagError:(int)arg1;
-(void)beginDeferringRentalEvents;
-(void)endDeferringRentalEvents;
-(NSDate *)nextEventDate;
-(NSNumber *)rentalIdentifier;
-(double)playbackTimeRemaining;
-(int)rentalType;
-(char)willExpireSoon;
-(int)bagError;
-(char)isDeferringRentalEvents;
-(VideosDownloadMetadata *)downloadMetadata;
-(void)setDownloadMetadata:(id)arg1;
-(char)isPlaying;
-(NSDate *)expirationDate;
-(void)setPlaying:(char)arg1;
-(MPMediaItem *)mediaItem;
-(void)setLoaded:(char)arg1;
-(int)assetType;
-(void)setFailed:(char)arg1;
-(char)isExpired;

@end
