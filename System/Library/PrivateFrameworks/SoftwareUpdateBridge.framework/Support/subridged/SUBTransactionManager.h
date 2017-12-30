/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 31, 2017 at 12:57:41 AM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/PrivateFrameworks/SoftwareUpdateBridge.framework/Support/subridged
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class NSString, NSMutableArray, NSObject;

@interface SUBTransactionManager : NSObject {

	NSString* _pathState;
	NSMutableArray* _transactions;
	NSObject*<OS_dispatch_queue> _queue;

}

@property (nonatomic,retain) NSMutableArray * transactions;                   //@synthesize transactions=_transactions - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> queue;              //@synthesize queue=_queue - In the implementation block
@property (nonatomic,retain) NSString * pathState;                            //@synthesize pathState=_pathState - In the implementation block
+(id)sharedManager;
-(char)writeStateFile;
-(char)removeStateFile;
-(NSString *)pathState;
-(void)setPathState:(NSString *)arg1 ;
-(id)init;
-(NSObject*<OS_dispatch_queue>)queue;
-(void)setQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(void)setTransactions:(NSMutableArray *)arg1 ;
-(void)beginTransaction:(id)arg1 ;
-(void)endTransaction:(id)arg1 ;
-(NSMutableArray *)transactions;
@end

