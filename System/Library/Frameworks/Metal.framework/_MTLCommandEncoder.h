/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 11:20:52 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/Frameworks/Metal.framework/Metal
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol MTLDevice, MTLCommandBuffer;
@class NSString, _MTLCommandBuffer;

@interface _MTLCommandEncoder : NSObject {

	id<MTLDevice> _device;
	NSString* _label;
	_MTLCommandBuffer*<MTLCommandBuffer> _commandBuffer;
	unsigned _numThisEncoder;
	unsigned long long _globalTraceObjectID;
	unsigned long long _labelTraceID;

}

@property (nonatomic,readonly) id<MTLDevice> device; 
@property (copy) NSString * label;                                                                           //@synthesize label=_label - In the implementation block
@property (assign,getter=globalTraceObjectID,nonatomic) unsigned long long globalTraceObjectID;              //@synthesize globalTraceObjectID=_globalTraceObjectID - In the implementation block
@property (getter=getType,nonatomic,readonly) unsigned type; 
@property (assign,nonatomic) unsigned numThisEncoder;                                                        //@synthesize numThisEncoder=_numThisEncoder - In the implementation block
-(id)formattedDescription:(unsigned)arg1 ;
-(unsigned long long)globalTraceObjectID;
-(id)initWithCommandBuffer:(id)arg1 ;
-(void)setGlobalTraceObjectID:(unsigned long long)arg1 ;
-(unsigned)numThisEncoder;
-(void)setNumThisEncoder:(unsigned)arg1 ;
-(void)insertDebugSignpost:(id)arg1 ;
-(void)dealloc;
-(id)description;
-(NSString *)label;
-(void)setLabel:(NSString *)arg1 ;
-(void)endEncoding;
-(id)commandBuffer;
-(void)pushDebugGroup:(id)arg1 ;
-(void)popDebugGroup;
-(id<MTLDevice>)device;
-(unsigned)getType;
@end

