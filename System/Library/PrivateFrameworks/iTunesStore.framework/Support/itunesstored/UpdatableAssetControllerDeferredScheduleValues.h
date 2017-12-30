/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 31, 2017 at 12:58:04 AM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/PrivateFrameworks/iTunesStore.framework/Support/itunesstored
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSURL, NSString;

@interface UpdatableAssetControllerDeferredScheduleValues : NSObject {

	char _scheduledInBackground;
	NSURL* _manifestURL;
	NSURL* _bundledManifestURL;
	NSString* _clientIdentifier;
	NSString* _userAgent;
	/*^block*/id _completion;

}

@property (nonatomic,retain) NSURL * manifestURL;                      //@synthesize manifestURL=_manifestURL - In the implementation block
@property (nonatomic,retain) NSURL * bundledManifestURL;               //@synthesize bundledManifestURL=_bundledManifestURL - In the implementation block
@property (nonatomic,retain) NSString * clientIdentifier;              //@synthesize clientIdentifier=_clientIdentifier - In the implementation block
@property (nonatomic,retain) NSString * userAgent;                     //@synthesize userAgent=_userAgent - In the implementation block
@property (assign,nonatomic) char scheduledInBackground;               //@synthesize scheduledInBackground=_scheduledInBackground - In the implementation block
@property (nonatomic,copy) id completion;                              //@synthesize completion=_completion - In the implementation block
-(void)setBundledManifestURL:(NSURL *)arg1 ;
-(char)scheduledInBackground;
-(void)setScheduledInBackground:(char)arg1 ;
-(NSURL *)bundledManifestURL;
-(id)completion;
-(void)setCompletion:(id)arg1 ;
-(void)setClientIdentifier:(NSString *)arg1 ;
-(NSString *)userAgent;
-(void)setUserAgent:(NSString *)arg1 ;
-(NSString *)clientIdentifier;
-(NSURL *)manifestURL;
-(void)setManifestURL:(NSURL *)arg1 ;
@end

