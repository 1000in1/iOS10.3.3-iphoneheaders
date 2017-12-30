/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 31, 2017 at 12:58:03 AM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/PrivateFrameworks/iTunesStore.framework/Support/itunesstored
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_source;
@class NSDictionary, NSObject, NSString;

@interface SpringBoardPendingAlert : NSObject {

	/*^block*/id _completionBlock;
	NSDictionary* _options;
	NSObject*<OS_dispatch_source> _timeoutTimer;
	NSString* _viewControllerName;

}

@property (nonatomic,copy) id completionBlock;                                        //@synthesize completionBlock=_completionBlock - In the implementation block
@property (nonatomic,copy) NSDictionary * options;                                    //@synthesize options=_options - In the implementation block
@property (nonatomic,copy) NSString * viewControllerName;                             //@synthesize viewControllerName=_viewControllerName - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_source> timeoutTimer;              //@synthesize timeoutTimer=_timeoutTimer - In the implementation block
-(void)setViewControllerName:(NSString *)arg1 ;
-(NSString *)viewControllerName;
-(void)cancelTimeoutTimer;
-(void)dealloc;
-(id)completionBlock;
-(void)setCompletionBlock:(id)arg1 ;
-(NSDictionary *)options;
-(void)setOptions:(NSDictionary *)arg1 ;
-(void)setTimeoutTimer:(NSObject*<OS_dispatch_source>)arg1 ;
-(NSObject*<OS_dispatch_source>)timeoutTimer;
@end

