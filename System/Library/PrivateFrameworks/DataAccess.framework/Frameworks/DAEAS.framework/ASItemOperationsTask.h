/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 31, 2017 at 12:56:39 AM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/PrivateFrameworks/DataAccess.framework/Frameworks/DAEAS.framework/DAEAS
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <DAEAS/ASTask.h>

@class NSArray, ASMailMessage;

@interface ASItemOperationsTask : ASTask {

	NSArray* _commands;
	int _numReplacedItems;
	int _bodyTruncationBytes;
	int _mimeSupport;
	ASMailMessage* _streamingMailMessage;

}
-(id)init;
-(void)setMIMESupport:(int)arg1 ;
-(int)bodyType;
-(int)taskStatusForExchangeStatus:(int)arg1 ;
-(int)commandCode;
-(id)requestBody;
-(char)getTopLevelToken:(char*)arg1 outStatusCodePage:(char*)arg2 outStatusToken:(char*)arg3 ;
-(char)processContext:(id)arg1 ;
-(id)replacementObjectForEmailItem:(id)arg1 ;
-(int)mimeSupport;
-(int)_mimeSupportCode;
-(char)handleStreamOperation:(int)arg1 forCodePage:(int)arg2 tag:(int)arg3 withParentItem:(id)arg4 withData:(char*)arg5 dataLength:(int)arg6 ;
-(void)setBodyTruncationBytes:(int)arg1 ;
-(id)streamingMailMessage;
-(void)setStreamingMailMessage:(id)arg1 ;
-(void)setCommands:(id)arg1 ;
-(id)commands;
-(void)finishWithError:(id)arg1 ;
@end
