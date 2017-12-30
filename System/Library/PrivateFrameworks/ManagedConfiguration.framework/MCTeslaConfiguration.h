/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 11:20:56 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/PrivateFrameworks/ManagedConfiguration.framework/ManagedConfiguration
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSXPCConnection;

@interface MCTeslaConfiguration : NSObject {

	char _fetching;
	/*^block*/id _callback;
	NSXPCConnection* _connection;

}

@property (nonatomic,copy) id callback;                                    //@synthesize callback=_callback - In the implementation block
@property (nonatomic,retain) NSXPCConnection * connection;                 //@synthesize connection=_connection - In the implementation block
@property (assign,getter=isFetching,nonatomic) char fetching;              //@synthesize fetching=_fetching - In the implementation block
-(void)fetchConfigurationWithCompletionBlock:(/*^block*/id)arg1 ;
-(void)fetchDidFailWithError:(id)arg1 ;
-(id)init;
-(void)dealloc;
-(NSXPCConnection *)connection;
-(void)setConnection:(NSXPCConnection *)arg1 ;
-(id)callback;
-(void)setCallback:(id)arg1 ;
-(id)connectionError;
-(char)isFetching;
-(void)setFetching:(char)arg1 ;
@end

