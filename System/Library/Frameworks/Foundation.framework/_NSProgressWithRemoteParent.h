/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 11:20:45 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/Frameworks/Foundation.framework/Foundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Foundation/NSProgress.h>

@class NSXPCConnection;

@interface _NSProgressWithRemoteParent : NSProgress {

	NSXPCConnection* _parentConnection;
	unsigned long long _sequence;

}

@property (retain) NSXPCConnection * parentConnection;              //@synthesize parentConnection=_parentConnection - In the implementation block
@property (assign) unsigned long long sequence;                     //@synthesize sequence=_sequence - In the implementation block
-(void)setParentConnection:(NSXPCConnection *)arg1 ;
-(void)_updateFractionCompleted:(id)arg1 ;
-(void)_setUserInfoValue:(id)arg1 forKey:(id)arg2 fromChild:(char)arg3 ;
-(NSXPCConnection *)parentConnection;
-(void)dealloc;
-(unsigned long long)sequence;
-(void)setSequence:(unsigned long long)arg1 ;
@end

