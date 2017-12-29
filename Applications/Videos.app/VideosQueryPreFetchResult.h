/*
* This header is generated by classdump-dyld 1.0
* on Friday, December 29, 2017 at 6:39:46 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /Applications/Videos.app/Videos
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class MPMediaItem;

@interface VideosQueryPreFetchResult : NSObject {

	char _inCloud;
	unsigned _fetchOptions;
	unsigned _badgeCount;
	MPMediaItem* _representativeItem;

}

@property (assign) unsigned badgeCount;                           //@synthesize badgeCount=_badgeCount - In the implementation block
@property (assign) char inCloud;                                  //@synthesize inCloud=_inCloud - In the implementation block
@property (retain) MPMediaItem * representativeItem;              //@synthesize representativeItem=_representativeItem - In the implementation block
@property (readonly) unsigned fetchOptions;                       //@synthesize fetchOptions=_fetchOptions - In the implementation block
-(id)initWithFetchOptions:(unsigned)arg1 badgeCount:(unsigned)arg2 inCloud:(char)arg3 representativeItem:(id)arg4 ;
-(MPMediaItem *)representativeItem;
-(void)setRepresentativeItem:(MPMediaItem *)arg1 ;
-(void)setInCloud:(char)arg1 ;
-(char)inCloud;
-(void)setBadgeCount:(unsigned)arg1 ;
-(unsigned)badgeCount;
-(unsigned)fetchOptions;
@end
