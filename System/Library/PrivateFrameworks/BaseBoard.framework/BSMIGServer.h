/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 11:20:47 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/PrivateFrameworks/BaseBoard.framework/BaseBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <BaseBoard/BaseBoard-Structs.h>
@class NSString;

@interface BSMIGServer : NSObject {

	NSString* _portName;
	unsigned _port;
	opaque_pthread_t* _thread;
	mig_subsystem* _subsystem;
	CFRunLoopObserverRef _entryObserver;
	CFRunLoopObserverRef _exitObserver;

}

@property (assign,nonatomic) int threadPriority; 
@property (nonatomic,readonly) NSString * threadName; 
-(int)threadPriority;
-(void)setThreadName:(NSString *)arg1 ;
-(unsigned)_createPortNamed:(id)arg1 ;
-(id)initWithPortName:(id)arg1 subsystem:(mig_subsystem*)arg2 separateThread:(char)arg3 ;
-(NSString *)threadName;
-(id)init;
-(void)dealloc;
-(void)_installAutoreleasePoolsIfNecessaryForMode:(CFStringRef)arg1 ;
-(void*)_start;
-(unsigned)port;
-(void)setThreadPriority:(int)arg1 ;
@end

