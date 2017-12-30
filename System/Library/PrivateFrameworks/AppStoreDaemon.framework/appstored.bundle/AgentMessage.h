/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 31, 2017 at 12:56:17 AM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/PrivateFrameworks/AppStoreDaemon.framework/appstored.bundle/appstored
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class AgentRef;

@interface AgentMessage : NSObject {

	char _ifMatched;
	AgentRef* _reference;
	int _type;

}

@property (nonatomic,readonly) AgentRef * reference;              //@synthesize reference=_reference - In the implementation block
@property (nonatomic,readonly) int type;                          //@synthesize type=_type - In the implementation block
+(id)forAgent:(id)arg1 ;
+(id)forPID:(long long)arg1 supervisor:(id)arg2 ;
+(id)_forAgent:(id)arg1 type:(int)arg2 ;
+(id)_forPID:(long long)arg1 supervisor:(id)arg2 type:(int)arg3 ;
-(void)ifType:(int)arg1 andKind:(Class)arg2 then:(/*^block*/id)arg3 ;
-(void)ifType:(int)arg1 andKind:(Class)arg2 thenCast:(/*^block*/id)arg3 ;
-(void)ifUnmatchedThen:(/*^block*/id)arg1 ;
-(void)ignoreType:(int)arg1 andKind:(Class)arg2 ;
-(id)_initWithAgent:(id)arg1 type:(int)arg2 ;
-(id)_initWithPID:(long long)arg1 supervisor:(id)arg2 type:(int)arg3 ;
-(id)description;
-(int)type;
-(void)sendMessage;
-(AgentRef *)reference;
@end

