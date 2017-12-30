/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 31, 2017 at 1:10:39 AM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <iWorkImport/TSPComponentWriteChannel.h>

@class NSError, NSString;

@interface TSPIOHandlerWriteChannelAdapter : NSObject <TSPComponentWriteChannel> {

	/*^block*/id _handler;
	NSError* _error;

}

@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)close;
-(id)initWithHandler:(/*^block*/id)arg1 ;
-(void)writeData:(id)arg1 ;
-(void)setError:(id)arg1 ;
@end

