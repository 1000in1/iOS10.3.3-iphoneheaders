/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 31, 2017 at 1:10:38 AM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol TSPComponentParserDelegate;
#import <iWorkImport/iWorkImport-Structs.h>
@interface TSPComponentParser : NSObject {

	id<TSPComponentParserDelegate> _delegate;
	unsigned _state;
	unsigned _archiveInfoLength;
	ArchiveInfo* _archiveInfo;
	unsigned _messagesLength;

}
-(void)readWithChannel:(id)arg1 completionQueue:(id)arg2 completion:(/*^block*/id)arg3 ;
-(char)readFromStream:(DispatchDataInputStream*)arg1 error:(id*)arg2 ;
-(unsigned)readArchiveInfoLengthFromStream:(DispatchDataInputStream*)arg1 error:(id*)arg2 ;
-(unsigned)readArchiveInfoFromStream:(DispatchDataInputStream*)arg1 error:(id*)arg2 ;
-(unsigned)readArchiveFromStream:(DispatchDataInputStream*)arg1 error:(id*)arg2 ;
-(id)init;
-(id)initWithDelegate:(id)arg1 ;
@end

