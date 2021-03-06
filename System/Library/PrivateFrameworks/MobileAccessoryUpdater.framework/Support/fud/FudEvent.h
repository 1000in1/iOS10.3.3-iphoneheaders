/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 31, 2017 at 12:57:11 AM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/PrivateFrameworks/MobileAccessoryUpdater.framework/Support/fud
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_xpc_object;
@class NSString, NSDictionary, NSObject;

@interface FudEvent : NSObject {

	int type;
	NSString* filterName;
	NSString* clientName;
	NSDictionary* clientOptions;
	NSObject*<OS_xpc_object> data;
	char isConnectionEvent;
	char synthesizedEvent;
	char sendResponse;

}

@property (readonly) int type; 
@property (retain) NSString * filterName; 
@property (retain) NSString * clientName; 
@property (retain) NSDictionary * clientOptions; 
@property (readonly) NSObject*<OS_xpc_object> data; 
@property (assign) char isConnectionEvent; 
@property (assign) char synthesizedEvent; 
@property (assign) char sendResponse; 
-(id)initWithEventType:(int)arg1 filter:(id)arg2 client:(id)arg3 data:(id)arg4 ;
-(void)setIsConnectionEvent:(char)arg1 ;
-(char)isInternalEvent;
-(NSDictionary *)clientOptions;
-(char)isConnectionEvent;
-(char)synthesizedEvent;
-(void)setSynthesizedEvent:(char)arg1 ;
-(char)sendResponse;
-(void)setSendResponse:(char)arg1 ;
-(void)dealloc;
-(id)description;
-(int)type;
-(NSObject*<OS_xpc_object>)data;
-(void)setClientName:(NSString *)arg1 ;
-(NSString *)clientName;
-(void)setFilterName:(NSString *)arg1 ;
-(NSString *)filterName;
-(void)setClientOptions:(NSDictionary *)arg1 ;
@end

