/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 31, 2017 at 12:58:04 AM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/PrivateFrameworks/iTunesStore.framework/Support/itunesstored
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSURL;

@interface ErrorHandlerResponse : NSObject {

	int _responseType;
	NSURL* _url;

}

@property (assign,nonatomic) int responseType;              //@synthesize responseType=_responseType - In the implementation block
@property (nonatomic,copy) NSURL * URL;                     //@synthesize url=_url - In the implementation block
-(void)dealloc;
-(NSURL *)URL;
-(void)setURL:(NSURL *)arg1 ;
-(int)responseType;
-(void)setResponseType:(int)arg1 ;
@end
