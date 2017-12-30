/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 11:20:47 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/PrivateFrameworks/BaseBoard.framework/BaseBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/BSDescriptionProviding.h>
#import <libobjc.A.dylib/BSInvalidatable.h>

@protocol OS_dispatch_queue;
@class NSString, NSObject;

@interface BSSimpleAssertion : NSObject <BSDescriptionProviding, BSInvalidatable> {

	NSString* _identifier;
	NSString* _reason;
	NSObject*<OS_dispatch_queue> _queue;
	/*^block*/id _invalidationBlock;

}

@property (nonatomic,copy,readonly) NSString * identifier; 
@property (nonatomic,copy,readonly) NSString * reason; 
@property (getter=isValid,nonatomic,readonly) char valid; 
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)invalidate;
-(void)dealloc;
-(NSString *)description;
-(char)isValid;
-(NSString *)identifier;
-(NSString *)reason;
-(id)descriptionWithMultilinePrefix:(id)arg1 ;
-(id)succinctDescription;
-(id)initWithIdentifier:(id)arg1 forReason:(id)arg2 queue:(id)arg3 invalidationBlock:(/*^block*/id)arg4 ;
-(id)succinctDescriptionBuilder;
-(id)descriptionBuilderWithMultilinePrefix:(id)arg1 ;
@end

