/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 31, 2017 at 12:57:41 AM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/PrivateFrameworks/SoftwareUpdateServices.framework/Support/softwareupdateservicesd
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSMutableSet;

@interface SUTransactionManager : NSObject {

	NSMutableSet* _openTransactions;
	NSMutableSet* _keepAliveTransactions;
	char _keepAliveClearable;

}
+(id)sharedInstance;
-(void)beginTransaction:(id)arg1 keepAlive:(char)arg2 ;
-(void)setKeepAliveClearable:(char)arg1 ;
-(char)isKeepAliveEnabled;
-(void)clearKeepAliveIfNecessary:(char)arg1 ;
-(id)openTransactions;
-(char)hasOpenTransactionForName:(id)arg1 ;
-(void)_toggleKeepAliveStatus;
-(char)_isKeepAliveEnabled:(id*)arg1 ;
-(void)_setKeepAlive:(char)arg1 ;
-(id)init;
-(void)dealloc;
-(void)beginTransaction:(id)arg1 ;
-(void)endTransaction:(id)arg1 ;
@end
