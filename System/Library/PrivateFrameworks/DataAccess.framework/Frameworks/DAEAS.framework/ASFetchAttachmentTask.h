/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 31, 2017 at 12:56:39 AM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/PrivateFrameworks/DataAccess.framework/Frameworks/DAEAS.framework/DAEAS
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <DAEAS/ASTask.h>
#import <libobjc.A.dylib/ASFetchAttachmentTaskProtocol.h>

@class NSString, NSFileHandle;

@interface ASFetchAttachmentTask : ASTask <ASFetchAttachmentTaskProtocol> {

	NSString* _attachmentUUID;
	NSString* _attachmentName;
	NSString* _messageID;
	NSString* _localFileName;
	NSString* _attachmentContentType;
	unsigned _localFileLength;
	NSFileHandle* _localFileHandle;

}

@property (nonatomic,retain) NSString * attachmentUUID;                     //@synthesize attachmentUUID=_attachmentUUID - In the implementation block
@property (nonatomic,retain) NSString * attachmentName;                     //@synthesize attachmentName=_attachmentName - In the implementation block
@property (nonatomic,retain) NSString * messageID;                          //@synthesize messageID=_messageID - In the implementation block
@property (nonatomic,retain) NSString * localFileName;                      //@synthesize localFileName=_localFileName - In the implementation block
@property (nonatomic,retain) NSString * attachmentContentType;              //@synthesize attachmentContentType=_attachmentContentType - In the implementation block
@property (assign,nonatomic) unsigned localFileLength;                      //@synthesize localFileLength=_localFileLength - In the implementation block
@property (nonatomic,retain) NSFileHandle * localFileHandle;                //@synthesize localFileHandle=_localFileHandle - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)command;
-(NSString *)attachmentName;
-(int)commandCode;
-(id)requestBody;
-(char)processContext:(id)arg1 ;
-(char)shouldLogIncomingData;
-(id)initForMessageServerID:(id)arg1 andAttachmentName:(id)arg2 ;
-(id)initForMessageUUID:(id)arg1 ;
-(NSString *)attachmentUUID;
-(void)setAttachmentUUID:(NSString *)arg1 ;
-(void)setAttachmentName:(NSString *)arg1 ;
-(NSString *)localFileName;
-(void)setLocalFileName:(NSString *)arg1 ;
-(NSString *)attachmentContentType;
-(void)setAttachmentContentType:(NSString *)arg1 ;
-(unsigned)localFileLength;
-(void)setLocalFileLength:(unsigned)arg1 ;
-(NSFileHandle *)localFileHandle;
-(void)setLocalFileHandle:(NSFileHandle *)arg1 ;
-(id)parameterData;
-(NSString *)messageID;
-(void)setMessageID:(NSString *)arg1 ;
-(void)finishWithError:(id)arg1 ;
@end

