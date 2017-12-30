/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 11:24:54 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /Applications/MobileMail.app/MobileMail
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSLock, NSMapTable;

@interface _MFMessageContentURLProtocolRegistry : NSObject {

	NSLock* _lock;
	NSMapTable* _storage;

}

@property (nonatomic,readonly) NSMapTable * storage;              //@synthesize storage=_storage - In the implementation block
+(id)sharedRegistry;
-(id)URLForLoadingContext:(id)arg1 scheme:(id)arg2 ;
-(id)loadingContextForURL:(id)arg1 ;
-(id)init;
-(void)dealloc;
-(NSMapTable *)storage;
@end

