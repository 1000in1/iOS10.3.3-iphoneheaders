/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 31, 2017 at 12:58:03 AM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/PrivateFrameworks/iTunesStore.framework/Support/itunesstored
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <iTunesStore/ISOperation.h>

@class SSAuthenticationContext, NSArray;

@interface GetAutomaticDownloadKindsOperation : ISOperation {

	SSAuthenticationContext* _authContext;
	NSArray* _enabledDownloadKinds;

}

@property (copy) SSAuthenticationContext * authenticationContext; 
@property (readonly) NSArray * enabledDownloadKinds; 
-(NSArray *)enabledDownloadKinds;
-(void)dealloc;
-(void)run;
-(SSAuthenticationContext *)authenticationContext;
-(void)setAuthenticationContext:(SSAuthenticationContext *)arg1 ;
@end

