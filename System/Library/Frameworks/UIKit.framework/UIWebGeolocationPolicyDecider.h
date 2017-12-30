/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 11:21:33 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSMutableDictionary, NSMutableArray, NSMapTable;

@interface UIWebGeolocationPolicyDecider : NSObject {

	NSMutableDictionary* _sites;
	NSMutableArray* _challenges;
	NSMapTable* _activeChallenges;

}
+(void)initialize;
+(id)sharedPolicyDecider;
-(id)init;
-(void)dealloc;
-(void)alertView:(id)arg1 clickedButtonAtIndex:(int)arg2 ;
-(void)webView:(id)arg1 decidePolicyForGeolocationRequestFromOrigin:(id)arg2 frame:(id)arg3 listener:(id)arg4 ;
-(id)_siteFileInContainerDirectory:(id)arg1 creatingIntermediateDirectoriesIfNecessary:(char)arg2 ;
-(id)_siteFile;
-(void)clearCache;
-(char)_isAuthorizationDate:(id)arg1 inclusivelyBetweenDate:(id)arg2 andDate:(id)arg3 ;
-(void)_save;
-(int)_getChallengeCountFromHistoryForToken:(id)arg1 requestingURL:(id)arg2 ;
-(void)_load;
-(void)_executeNextChallenge;
-(void)_decidePolicyForGeolocationRequestFromOrigin:(id)arg1 requestingURL:(id)arg2 window:(id)arg3 listener:(id)arg4 ;
-(void)clearAllCaches;
-(void)clearAuthorizationsAddedBetween:(id)arg1 and:(id)arg2 ;
-(void)decidePolicyForGeolocationRequestFromOrigin:(id)arg1 requestingURL:(id)arg2 window:(id)arg3 listener:(id)arg4 ;
@end

