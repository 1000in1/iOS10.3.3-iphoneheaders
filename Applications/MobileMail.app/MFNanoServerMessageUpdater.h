/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 11:24:57 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /Applications/MobileMail.app/MobileMail
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class NSObject;

@interface MFNanoServerMessageUpdater : NSObject {

	NSObject*<OS_dispatch_queue> _queue;

}
-(id)_libraryMessageForMessageId:(id)arg1 ;
-(void)updateMessages:(id)arg1 ;
-(char)_status:(unsigned)arg1 containsState:(unsigned)arg2 ;
-(void)_addOperation:(id)arg1 withMessages:(id)arg2 toChangeManager:(id)arg3 ;
-(id)init;
-(void)dealloc;
@end

