/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 11:20:44 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/Frameworks/Foundation.framework/Foundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString, NSSet, NSDictionary, NSDate, NSUUID, UAUserActivity, NSURL;

@interface NSUserActivity : NSObject {

	id _internal;
	id _delegate;
	id _frameworkDelegate;

}

@property (setter=_setSubtitle:,copy) NSString * _subtitle; 
@property (setter=_setMinimalRequiredUserInfoKeys:,copy) NSSet * _minimalRequiredUserInfoKeys; 
@property (setter=_setContentType:,copy) NSString * _contentType; 
@property (setter=_setContentUserAction:,copy) NSString * _contentUserAction; 
@property (setter=_setContentAttributes:,copy) NSDictionary * _contentAttributes; 
@property (setter=_setKeywords:,copy) NSSet * _keywords; 
@property (setter=_setContentIdentifier:,copy) NSString * _contentIdentifier; 
@property (setter=_setExpirationDate:,copy) NSDate * _expirationDate; 
@property (setter=_setEligibleForUserActivityHandoff:,getter=_isEligibleForUserActivityHandoff) char _eligibleForUserActivityHandoff; 
@property (setter=_setEligibleForUserActivityIndexing:,getter=_isEligibleForUserActivityIndexing) char _eligibleForUserActivityIndexing; 
@property (setter=_setEligibleForUserActivityReminders:,getter=_isEligibleForUserActivityReminders) char _eligibleForUserActivityReminders; 
@property (setter=_setEligibleForUserActivityPublicIndexing:,getter=_isEligibleForUserActivityPublicIndexing) char _eligibleForUserActivityPublicIndexing; 
@property (copy,readonly) NSString * _teamIdentifier; 
@property (retain,readonly) NSUUID * _uniqueIdentifier; 
@property (readonly) int _suggestedActionType; 
@property (copy,readonly) NSDate * _lastActivityDate; 
@property (setter=_setOptions:,copy) NSDictionary * _options; 
@property (setter=_setFrameworkPayload:,copy) NSDictionary * _frameworkPayload; 
@property (setter=_setFrameworkDelegate:,__weak) id<NSUserActivityDelegate> _frameworkDelegate; 
@property (retain,readonly) UAUserActivity * _internalUserActivity;                                                                                                     //@synthesize internal=_internal - In the implementation block
@property (copy,readonly) NSString * activityType; 
@property (copy) NSString * title; 
@property (copy) NSDictionary * userInfo; 
@property (copy) NSSet * requiredUserInfoKeys; 
@property (assign) char needsSave; 
@property (copy) NSURL * webpageURL; 
@property (copy) NSDate * expirationDate; 
@property (copy) NSSet * keywords; 
@property (assign) char supportsContinuationStreams; 
@property (__weak) id<NSUserActivityDelegate> delegate; 
@property (getter=isEligibleForHandoff) char eligibleForHandoff; 
@property (getter=isEligibleForSearch) char eligibleForSearch; 
@property (getter=isEligibleForPublicIndexing) char eligibleForPublicIndexing; 
+(id)_userFacingErrorForLaunchServicesError:(id)arg1 userInfo:(id)arg2 ;
+(char)_supportsUserActivityAppLinks;
+(char)_currentUserActivityUUIDWithOptions:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
+(id)_fetchUserActivityWithUUID:(id)arg1 intervalToWaitForDocumentSynchronizationToComplete:(double)arg2 completionHandler:(/*^block*/id)arg3 ;
+(void)_registerUserActivityType:(id)arg1 dynamicActivityType:(id)arg2 ;
+(void)_unregisterUserActivityType:(id)arg1 dynamicActivityType:(id)arg2 ;
+(id)_currentUserActivityUUID;
+(void)_fetchUserActivityWithUUID:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(char)needsSave;
-(NSURL *)webpageURL;
-(void)setWebpageURL:(NSURL *)arg1 ;
-(id)contentUserAction;
-(void)setContentUserAction:(id)arg1 ;
-(char)supportsContinuationStreams;
-(void)setSupportsContinuationStreams:(char)arg1 ;
-(void)getContinuationStreamsWithCompletionHandler:(/*^block*/id)arg1 ;
-(NSSet *)requiredUserInfoKeys;
-(void)setRequiredUserInfoKeys:(NSSet *)arg1 ;
-(char)isEligibleForHandoff;
-(void)setEligibleForHandoff:(char)arg1 ;
-(char)isEligibleForSearch;
-(void)setEligibleForSearch:(char)arg1 ;
-(char)isEligibleForPublicIndexing;
-(void)setEligibleForPublicIndexing:(char)arg1 ;
-(id)initWithInternalUserActivity:(id)arg1 ;
-(id)contentAttributes;
-(void)setContentAttributes:(id)arg1 ;
-(id)initWithTypeIdentifier:(id)arg1 ;
-(id)webPageURL;
-(void)setWebPageURL:(id)arg1 ;
-(void)willSynchronizeActivity;
-(void)didSynchronizeActivity;
-(void)didReceiveInputStream:(id)arg1 outputStream:(id)arg2 ;
-(void)_setSubtitle:(id)arg1 ;
-(NSSet *)_minimalRequiredUserInfoKeys;
-(void)_setMinimalRequiredUserInfoKeys:(id)arg1 ;
-(NSString *)_contentType;
-(void)_setContentType:(id)arg1 ;
-(NSString *)_contentUserAction;
-(void)_setContentUserAction:(id)arg1 ;
-(NSString *)_contentIdentifier;
-(void)_setContentIdentifier:(id)arg1 ;
-(NSDictionary *)_contentAttributes;
-(void)_setContentAttributes:(id)arg1 ;
-(NSDate *)_expirationDate;
-(void)_setExpirationDate:(id)arg1 ;
-(NSSet *)_keywords;
-(void)_setKeywords:(id)arg1 ;
-(void)_addKeywordsFromArray:(id)arg1 ;
-(id)_parentUserActivity;
-(void)_setParentUserActivity:(id)arg1 ;
-(char)_isEligibleForUserActivityHandoff;
-(void)_setEligibleForUserActivityHandoff:(char)arg1 ;
-(char)_isEligibleForUserActivityIndexing;
-(void)_setEligibleForUserActivityIndexing:(char)arg1 ;
-(char)_isEligibleForUserActivityReminders;
-(void)_setEligibleForUserActivityReminders:(char)arg1 ;
-(char)_isEligibleForUserActivityPublicIndexing;
-(void)_setEligibleForUserActivityPublicIndexing:(char)arg1 ;
-(id)_initWithUserActivityStrings:(id)arg1 secondaryString:(id)arg2 optionalData:(id)arg3 ;
-(char)_createUserActivityDataWithOptions:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(char)_createUserActivityStringsWithOptions:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)_prepareUserActivityForLaunchingWithOptions:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(id)_determineMatchingApplicationBundleIdentifierWithOptions:(id)arg1 ;
-(NSString *)_teamIdentifier;
-(id)_determineMatchingApplicationBundleIdentfierWithOptions:(id)arg1 ;
-(id)_initWithTypeIdentifier:(id)arg1 suggestedActionType:(int)arg2 options:(id)arg3 ;
-(id)_initWithUserActivityType:(id)arg1 dynamicActivityType:(id)arg2 options:(id)arg3 ;
-(void)_updateUserInfoValue:(id)arg1 forKey:(id)arg2 ;
-(void)_removeUserInfoValueForKey:(id)arg1 ;
-(NSDictionary *)_frameworkPayload;
-(void)_setFrameworkPayload:(id)arg1 ;
-(void)_updateFrameworkPayloadValue:(id)arg1 forKey:(id)arg2 ;
-(void)_removeFrameworkPayloadValueForKey:(id)arg1 ;
-(int)_suggestedActionType;
-(NSDate *)_lastActivityDate;
-(void)_setLastActivityDate:(id)arg1 ;
-(void)_resignCurrent;
-(id)init;
-(void)invalidate;
-(void)setDelegate:(id<NSUserActivityDelegate>)arg1 ;
-(void)dealloc;
-(void)setTitle:(NSString *)arg1 ;
-(char)isEqual:(id)arg1 ;
-(unsigned)hash;
-(id<NSUserActivityDelegate>)delegate;
-(NSDictionary *)userInfo;
-(NSString *)title;
-(NSUUID *)_uniqueIdentifier;
-(void)becomeCurrent;
-(NSDictionary *)_options;
-(void)setUserInfo:(NSDictionary *)arg1 ;
-(NSString *)activityType;
-(id)_initWithUserActivityData:(id)arg1 ;
-(id<NSUserActivityDelegate>)_frameworkDelegate;
-(void)_setFrameworkDelegate:(id)arg1 ;
-(id)typeIdentifier;
-(id)initWithActivityType:(id)arg1 ;
-(void)setNeedsSave:(char)arg1 ;
-(void)addUserInfoEntriesFromDictionary:(id)arg1 ;
-(NSDate *)expirationDate;
-(void)setExpirationDate:(NSDate *)arg1 ;
-(void)_setOptions:(id)arg1 ;
-(UAUserActivity *)_internalUserActivity;
-(void)resignCurrent;
-(void)setContentAttributeSet:(id)arg1 ;
-(id)contentAttributeSet;
-(NSString *)_subtitle;
-(id)contentType;
-(void)setKeywords:(NSSet *)arg1 ;
-(NSSet *)keywords;
-(void)setContentType:(id)arg1 ;
@end

