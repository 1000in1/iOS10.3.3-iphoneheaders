/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 11:21:03 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/PrivateFrameworks/WebCore.framework/WebCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <WebCore/WebCore-Structs.h>
#import <CoreFoundation/NSData.h>

@interface WebCoreSharedBufferData : NSData {

	RefPtr<WebCore::SharedBuffer::DataBuffer>* sharedBufferDataBuffer;

}
+(void)initialize;
-(id)initWithSharedBufferDataBuffer:(DataBuffer*)arg1 ;
-(void)dealloc;
-(unsigned)length;
-(const void*)bytes;
@end

