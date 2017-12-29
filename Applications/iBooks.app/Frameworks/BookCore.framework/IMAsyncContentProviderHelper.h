/*
* This header is generated by classdump-dyld 1.0
* on Friday, December 29, 2017 at 6:39:52 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /Applications/iBooks.app/Frameworks/BookCore.framework/BookCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue, OS_dispatch_group;
@class NSObject;

@interface IMAsyncContentProviderHelper : NSObject {

	NSObject*<OS_dispatch_queue> _sync;
	NSObject*<OS_dispatch_group> _group;
	char _ready;

}
-(id)initWithContentReady:(char)arg1 ;
-(void)addCallback:(/*^block*/id)arg1 queue:(id)arg2 ;
-(void)signalContentReady;
@end
