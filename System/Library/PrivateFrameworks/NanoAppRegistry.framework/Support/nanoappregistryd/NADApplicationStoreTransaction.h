/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 31, 2017 at 12:57:15 AM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/PrivateFrameworks/NanoAppRegistry.framework/Support/nanoappregistryd
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <nanoappregistryd/NADApplicationStoreTransaction.h>

@protocol NADApplicationStoreTransaction <NSObject>
@required
-(void)removeApplicationWithBundleIdentifier:(id)arg1;
-(void)removeAllEntities;
-(void)insertApplication:(id)arg1;
-(void)addStandaloneGlance:(id)arg1;
-(void)setSequenceNumber:(id)arg1 UUID:(id)arg2;
-(void)rollback;
-(char)commit:(id*)arg1;

@end


@protocol OS_dispatch_queue;
@class NADApplicationStore, NSObject, NSString;

@interface NADApplicationStoreTransaction : NSObject <NADApplicationStoreTransaction> {

	char _finalized;
	NADApplicationStore* _applicationStore;
	NSObject*<OS_dispatch_queue> _commandQueue;

}

@property (assign,getter=isFinalized,nonatomic) char finalized;                        //@synthesize finalized=_finalized - In the implementation block
@property (nonatomic,readonly) NADApplicationStore * applicationStore;                 //@synthesize applicationStore=_applicationStore - In the implementation block
@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> commandQueue;              //@synthesize commandQueue=_commandQueue - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)removeApplicationWithBundleIdentifier:(id)arg1 ;
-(id)initWithApplicationStore:(id)arg1 ;
-(void)removeAllEntities;
-(void)insertApplication:(id)arg1 ;
-(void)addStandaloneGlance:(id)arg1 ;
-(void)setSequenceNumber:(id)arg1 UUID:(id)arg2 ;
-(NADApplicationStore *)applicationStore;
-(void)_flushCommandQueue;
-(void)rollback;
-(char)commit:(id*)arg1 ;
-(NSObject*<OS_dispatch_queue>)commandQueue;
-(char)isFinalized;
-(void)setFinalized:(char)arg1 ;
@end

