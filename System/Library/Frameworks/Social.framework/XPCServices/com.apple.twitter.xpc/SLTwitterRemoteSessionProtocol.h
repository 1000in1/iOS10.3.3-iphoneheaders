/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 7:32:28 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/Frameworks/Social.framework/XPCServices/com.apple.twitter.xpc/com.apple.twitter
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol SLTwitterRemoteSessionProtocol
@required
-(void)setActiveAccountIdentifier:(id)arg1;
-(void)checkIn:(id)arg1;
-(void)fetchSessionInfo:(/*^block*/id)arg1;
-(void)ensureUserRecordStore;
-(void)fetchProfileImageDataForScreenName:(id)arg1 completion:(/*^block*/id)arg2;
-(void)recordsMatchingPrefixString:(id)arg1 completion:(/*^block*/id)arg2;
-(void)fetchCurrentImageLimits:(/*^block*/id)arg1;
-(void)setGeotagStatus:(id)arg1;
-(void)fetchGeotagStatus:(/*^block*/id)arg1;
-(void)sendStatus:(id)arg1 completion:(/*^block*/id)arg2;
-(void)getPermaLinkFromLastStatusUpdate:(/*^block*/id)arg1;
-(void)fetchRecordForScreenName:(id)arg1 completion:(/*^block*/id)arg2;
-(void)fetchCurrentTCoLength:(/*^block*/id)arg1;
-(void)retweetTweetWithID:(id)arg1 completion:(/*^block*/id)arg2;
-(void)sendDirectMessage:(id)arg1 toUser:(id)arg2 withScreenName:(id)arg3 completion:(/*^block*/id)arg4;
-(void)showTwitterSettingsIfNeeded:(/*^block*/id)arg1;

@end

