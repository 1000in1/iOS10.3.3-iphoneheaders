/*
* This header is generated by classdump-dyld 1.0
* on Friday, December 29, 2017 at 6:39:46 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /Applications/Videos.app/Videos
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TV/VideosRentalDataBaseOperation.h>

@class NSDictionary, NSNumber, NSDate;

@interface VideosRentalDataReadBagOperation : VideosRentalDataBaseOperation {

	NSDictionary* _rentalInformation;
	char _fetchSuccess;
	NSNumber* _playbackPeriod;
	NSDate* _playbackStartDate;
	NSNumber* _rentalPeriod;
	NSDate* _rentalStartDate;

}

@property (copy) NSNumber * playbackPeriod;               //@synthesize playbackPeriod=_playbackPeriod - In the implementation block
@property (copy) NSDate * playbackStartDate;              //@synthesize playbackStartDate=_playbackStartDate - In the implementation block
@property (copy) NSNumber * rentalPeriod;                 //@synthesize rentalPeriod=_rentalPeriod - In the implementation block
@property (copy) NSDate * rentalStartDate;                //@synthesize rentalStartDate=_rentalStartDate - In the implementation block
@property (readonly) char fetchSuccess;                   //@synthesize fetchSuccess=_fetchSuccess - In the implementation block
-(id)initWithRentalData:(id)arg1 ;
-(id)_fetchRentalBagValues;
-(void)setPlaybackStartDate:(NSDate *)arg1 ;
-(void)setPlaybackPeriod:(NSNumber *)arg1 ;
-(void)setRentalStartDate:(NSDate *)arg1 ;
-(void)setRentalPeriod:(NSNumber *)arg1 ;
-(id)_newFetchRentalInformationRequest;
-(char)fetchSuccess;
-(NSNumber *)playbackPeriod;
-(NSNumber *)rentalPeriod;
-(NSDate *)rentalStartDate;
-(id)init;
-(void)main;
-(NSDate *)playbackStartDate;
@end
