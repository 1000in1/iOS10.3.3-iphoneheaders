/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 31, 2017 at 12:57:42 AM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/PrivateFrameworks/StoreBookkeeperClient.framework/Support/storebookkeeperd
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <storebookkeeperd/SBDDomainServiceHandler.h>
#import <libobjc.A.dylib/SBCDomainValueServiceProtocol.h>

@class SBKUniversalPlaybackPositionStore, NSString;

@interface SBDDomainValueServiceHandler : SBDDomainServiceHandler <SBCDomainValueServiceProtocol> {

	SBKUniversalPlaybackPositionStore* _cloudStore;

}

@property (nonatomic,readonly) SBKUniversalPlaybackPositionStore * cloudStore;              //@synthesize cloudStore=_cloudStore - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithDomain:(id)arg1 ;
-(SBKUniversalPlaybackPositionStore *)cloudStore;
-(oneway void)pushPlaybackPositionEntity:(id)arg1 completionBlock:(/*^block*/id)arg2 ;
-(oneway void)pullPlaybackPositionEntity:(id)arg1 completionBlock:(/*^block*/id)arg2 ;
@end

