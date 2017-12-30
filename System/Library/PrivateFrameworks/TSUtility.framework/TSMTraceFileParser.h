/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 31, 2017 at 12:57:48 AM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/PrivateFrameworks/TSUtility.framework/TSUtility
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <TSUtility/TSUtility-Structs.h>
@class NSData;

@interface TSMTraceFileParser : NSObject {

	NSData* mData;
	TSMTraceRecord_s* mRecordBuffer;
	unsigned mOffset;
	unsigned mDataLength;

}
+(char)dataIsTraceFile:(id)arg1 ;
+(id)parserWithData:(id)arg1 ;
-(TSMTraceRecord_s*)nextTraceRecord;
-(void)dealloc;
-(id)initWithData:(id)arg1 ;
@end

