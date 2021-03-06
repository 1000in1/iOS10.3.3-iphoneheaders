/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 7:25:41 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/Frameworks/LocalAuthentication.framework/Support/ModuleBase.framework/ModuleBase
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class NSMutableDictionary, MechanismContext, NSObject;

@interface MechanismManager : NSObject {

	NSMutableDictionary* _plugins;
	MechanismContext* _mechanismContext;
	NSObject*<OS_dispatch_queue> _serverQueue;
	int _evaluatedPolicy;

}

@property (nonatomic,readonly) int evaluatedPolicy;                                 //@synthesize evaluatedPolicy=_evaluatedPolicy - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> serverQueue;              //@synthesize serverQueue=_serverQueue - In the implementation block
-(id)init;
-(NSObject*<OS_dispatch_queue>)serverQueue;
-(void)setServerQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(id)loadMechanism:(int)arg1 initParams:(id)arg2 className:(id)arg3 error:(id*)arg4 ;
-(char)_preloadForPlugin:(int)arg1 className:(id)arg2 userId:(id)arg3 error:(id*)arg4 ;
-(id)_pathForPlugin:(int)arg1 error:(id*)arg2 ;
-(id)loadMechanism:(int)arg1 initParams:(id)arg2 error:(id*)arg3 ;
-(int)evaluatedPolicy;
@end

