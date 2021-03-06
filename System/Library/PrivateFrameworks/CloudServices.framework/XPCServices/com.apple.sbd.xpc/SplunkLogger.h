/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 31, 2017 at 12:56:30 AM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/PrivateFrameworks/CloudServices.framework/XPCServices/com.apple.sbd.xpc/com.apple.sbd
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSURLSessionDelegate.h>

@protocol OS_dispatch_queue;
@class NSURL, NSString, NSMutableArray, NSObject;

@interface SplunkLogger : NSObject <NSURLSessionDelegate> {

	BOOL _allowInvalidCert;
	NSURL* _splunkUploadURL;
	NSString* _path;
	NSMutableArray* _events;
	NSObject*<OS_dispatch_queue> _queue;

}

@property (nonatomic,retain) NSString * path;                                 //@synthesize path=_path - In the implementation block
@property (nonatomic,retain) NSMutableArray * events;                         //@synthesize events=_events - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> queue;              //@synthesize queue=_queue - In the implementation block
@property (assign,nonatomic) BOOL allowInvalidCert;                           //@synthesize allowInvalidCert=_allowInvalidCert - In the implementation block
@property (nonatomic,readonly) NSURL * splunkUploadURL;                       //@synthesize splunkUploadURL=_splunkUploadURL - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)isDataCollectionEnabled;
-(void)logEventNamed:(id)arg1 value:(id)arg2 ;
-(NSURL *)splunkUploadURL;
-(void)postEvents;
-(id)init;
-(void)flush;
-(NSString *)path;
-(void)setPath:(NSString *)arg1 ;
-(NSObject*<OS_dispatch_queue>)queue;
-(void)setQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(void)URLSession:(id)arg1 didReceiveChallenge:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(NSMutableArray *)events;
-(BOOL)allowInvalidCert;
-(void)setAllowInvalidCert:(BOOL)arg1 ;
-(void)setEvents:(NSMutableArray *)arg1 ;
@end

