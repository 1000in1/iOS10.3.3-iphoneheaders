/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 11:23:56 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /Applications/DiagnosticsService.app/PlugIns/Diagnostic-4009.appex/Diagnostic-4009
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <Diagnostic-4009/Diagnostic-4009-Structs.h>
@class NSDictionary;

@interface OSDCameraFrame : NSObject {

	CVBufferRef _buffer;
	NSDictionary* _metadata;

}

@property (assign,nonatomic) CVBufferRef buffer;                   //@synthesize buffer=_buffer - In the implementation block
@property (nonatomic,retain) NSDictionary * metadata;              //@synthesize metadata=_metadata - In the implementation block
-(void)dealloc;
-(void)setBuffer:(CVBufferRef)arg1 ;
-(CVBufferRef)buffer;
-(NSDictionary *)metadata;
-(void)setMetadata:(NSDictionary *)arg1 ;
@end

