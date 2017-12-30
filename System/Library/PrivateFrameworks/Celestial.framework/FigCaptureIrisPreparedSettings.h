/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 11:21:40 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Celestial/Celestial-Structs.h>
#import <libobjc.A.dylib/FigXPCCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface FigCaptureIrisPreparedSettings : NSObject <FigXPCCoding, NSCopying> {

	long long _settingsID;
	unsigned _processedOutputFormat;
	unsigned _rawOutputFormat;
	unsigned _outputWidth;
	unsigned _outputHeight;
	unsigned _bracketedImageCount;
	int _SISMode;
	int _HDRMode;

}

@property (assign,nonatomic) long long settingsID;                        //@synthesize settingsID=_settingsID - In the implementation block
@property (assign,nonatomic) unsigned processedOutputFormat;              //@synthesize processedOutputFormat=_processedOutputFormat - In the implementation block
@property (assign,nonatomic) unsigned rawOutputFormat;                    //@synthesize rawOutputFormat=_rawOutputFormat - In the implementation block
@property (assign,nonatomic) unsigned outputWidth;                        //@synthesize outputWidth=_outputWidth - In the implementation block
@property (assign,nonatomic) unsigned outputHeight;                       //@synthesize outputHeight=_outputHeight - In the implementation block
@property (assign,nonatomic) unsigned bracketedImageCount;                //@synthesize bracketedImageCount=_bracketedImageCount - In the implementation block
@property (assign,setter=ISMode,nonatomic) int SISMode;                   //@synthesize SISMode=_SISMode - In the implementation block
@property (assign,nonatomic) int HDRMode;                                 //@synthesize HDRMode=_HDRMode - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(void)dealloc;
-(char)isEqual:(id)arg1 ;
-(NSString *)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(unsigned)rawOutputFormat;
-(int)SISMode;
-(id)figCaptureStillImageSettingsRepresentation;
-(void)setOutputWidth:(unsigned)arg1 ;
-(void)setOutputHeight:(unsigned)arg1 ;
-(long long)settingsID;
-(void)setSettingsID:(long long)arg1 ;
-(unsigned)outputWidth;
-(unsigned)outputHeight;
-(void)setSISMode:(int)arg1 ;
-(void)setRawOutputFormat:(unsigned)arg1 ;
-(unsigned)bracketedImageCount;
-(void)setBracketedImageCount:(unsigned)arg1 ;
-(unsigned)processedOutputFormat;
-(void)setProcessedOutputFormat:(unsigned)arg1 ;
-(id)copyXPCEncoding;
-(id)initWithXPCEncoding:(id)arg1 ;
-(int)HDRMode;
-(void)setHDRMode:(int)arg1 ;
@end

