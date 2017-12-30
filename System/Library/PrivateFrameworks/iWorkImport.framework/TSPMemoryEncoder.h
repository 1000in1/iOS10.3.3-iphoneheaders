/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 31, 2017 at 1:10:39 AM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <iWorkImport/TSPEncoder.h>

@class TSPMemoryComponentWriteChannel, NSString;

@interface TSPMemoryEncoder : NSObject <TSPEncoder> {

	char _alwaysDefragmentData;
	TSPMemoryComponentWriteChannel* _metadataWriteChannel;
	TSPMemoryComponentWriteChannel* _rootComponentWriteChannel;

}

@property (nonatomic,readonly) NSObject*<OS_dispatch_data> metadataDispatchData; 
@property (nonatomic,readonly) NSObject*<OS_dispatch_data> rootObjectComponentDispatchData; 
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithAlwaysDefragmentData:(char)arg1 ;
-(NSObject*<OS_dispatch_data>)metadataDispatchData;
-(NSObject*<OS_dispatch_data>)rootObjectComponentDispatchData;
-(id)newRootObjectComponentWriteChannel;
-(id)newMetadataComponentWriteChannel;
-(id)metadataData;
-(id)rootObjectComponentData;
-(id)init;
-(id)encodedData;
@end

