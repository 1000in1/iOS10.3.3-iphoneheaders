/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 31, 2017 at 12:56:56 AM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/PrivateFrameworks/HomeSharing.framework/Support/itunescloudd
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <itunescloudd/CloudLibraryOperation.h>

@class NSString;

@interface SagaPublishPlaylistOperation : CloudLibraryOperation {

	unsigned long long _sagaID;
	NSString* _playlistGlobalID;
	NSString* _playlistShareURL;

}

@property (nonatomic,readonly) NSString * playlistGlobalID;              //@synthesize playlistGlobalID=_playlistGlobalID - In the implementation block
@property (nonatomic,readonly) NSString * playlistShareURL;              //@synthesize playlistShareURL=_playlistShareURL - In the implementation block
-(id)initWithSagaID:(unsigned long long)arg1 ;
-(NSString *)playlistShareURL;
-(void)main;
-(NSString *)playlistGlobalID;
@end

