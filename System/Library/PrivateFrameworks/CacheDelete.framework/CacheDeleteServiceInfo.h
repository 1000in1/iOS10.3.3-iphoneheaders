/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 11:21:40 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/PrivateFrameworks/CacheDelete.framework/CacheDelete
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSExtensionContext;

@interface CacheDeleteServiceInfo : NSObject {

	char _doNotQuery;
	NSExtensionContext* _extensionContext;

}

@property (nonatomic,readonly) NSExtensionContext * extensionContext;              //@synthesize extensionContext=_extensionContext - In the implementation block
@property (assign) char doNotQuery;                                                //@synthesize doNotQuery=_doNotQuery - In the implementation block
+(id)serviceInfoWithExtensionContext:(id)arg1 ;
-(NSExtensionContext *)extensionContext;
-(char)doNotQuery;
-(void)setDoNotQuery:(char)arg1 ;
-(id)initWithExtensionContext:(id)arg1 ;
@end

