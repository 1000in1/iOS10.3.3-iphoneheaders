/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 31, 2017 at 12:57:52 AM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/PrivateFrameworks/UserActivity.framework/Agents/useractivityd
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSUUID, NSString, NSDate, NSData, NSURL, NSError;

@interface UserActivityToBTLEPayload : NSObject {

	NSUUID* _uniqueIdentifier;
	NSString* _title;
	NSDate* _when;
	NSData* _userInfoPayload;
	NSURL* _webpageURL;
	NSData* _streamsData;
	NSString* _teamID;
	NSString* _activityType;
	NSUUID* _ununiqueIdentifier;
	NSError* _error;

}

@property (copy) NSUUID * uniqueIdentifier;              //@synthesize ununiqueIdentifier=_ununiqueIdentifier - In the implementation block
@property (copy) NSString * title;                       //@synthesize title=_title - In the implementation block
@property (copy) NSDate * when;                          //@synthesize when=_when - In the implementation block
@property (copy) NSData * userInfoPayload;               //@synthesize userInfoPayload=_userInfoPayload - In the implementation block
@property (copy) NSURL * webpageURL;                     //@synthesize webpageURL=_webpageURL - In the implementation block
@property (copy) NSData * streamsData;                   //@synthesize streamsData=_streamsData - In the implementation block
@property (copy) NSString * teamID;                      //@synthesize teamID=_teamID - In the implementation block
@property (copy) NSString * activityType;                //@synthesize activityType=_activityType - In the implementation block
@property (copy) NSError * error;                        //@synthesize error=_error - In the implementation block
-(NSData *)userInfoPayload;
-(id)init:(id)arg1 title:(id)arg2 date:(id)arg3 userInfoPayload:(id)arg4 teamID:(id)arg5 activityType:(id)arg6 ;
-(id)initWithNSError:(id)arg1 ;
-(id)encodeAsData;
-(void)setUserInfoPayload:(NSData *)arg1 ;
-(NSURL *)webpageURL;
-(void)setWebpageURL:(NSURL *)arg1 ;
-(NSData *)streamsData;
-(void)setStreamsData:(NSData *)arg1 ;
-(void)setTitle:(NSString *)arg1 ;
-(id)description;
-(NSString *)title;
-(id)initWithData:(id)arg1 ;
-(NSString *)activityType;
-(NSUUID *)uniqueIdentifier;
-(void)setUniqueIdentifier:(NSUUID *)arg1 ;
-(NSError *)error;
-(void)setError:(NSError *)arg1 ;
-(void)setTeamID:(NSString *)arg1 ;
-(NSString *)teamID;
-(void)setWhen:(NSDate *)arg1 ;
-(NSDate *)when;
-(void)setActivityType:(NSString *)arg1 ;
@end

