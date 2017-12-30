/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 31, 2017 at 12:57:47 AM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/PrivateFrameworks/Symptoms.framework/Frameworks/SymptomEvaluator.framework/SymptomEvaluator
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SymptomEvaluator/SymptomEvaluator-Structs.h>
#import <libobjc.A.dylib/ConfigurableObjectProtocol.h>

@protocol OS_dispatch_source;
@class NSString, NSObject;

@interface KernelEventMonitor : NSObject <ConfigurableObjectProtocol> {

	NSString* _symptomName;
	int _nativeSocket;
	int _nativeSocket6;
	NSObject*<OS_dispatch_source> _kernelNotificationSource;
	NSObject*<OS_dispatch_source> _kernelNotificationSource6;

}

@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedInstance;
+(id)configureClass:(id)arg1 ;
-(NSString *)description;
-(int)configureInstance:(id)arg1 ;
-(int)read:(id)arg1 returnedValues:(id)arg2 ;
-(void)_handleNetworkEvent:(kern_event_msg*)arg1 ;
-(void)_handleSocket:(int)arg1 ;
-(void)initListening;
@end

