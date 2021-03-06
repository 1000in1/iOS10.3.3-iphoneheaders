/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 11:23:11 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/CoreServices/OTACrashCopier
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <OTACrashCopier/OTACrashCopier-Structs.h>
@class NSDictionary;

@interface OTALog : NSObject {

	_sFILE* _stream;
	NSDictionary* metaData;
	NSDictionary* _metaData;

}

@property (readonly) _sFILE* stream;                       //@synthesize stream=_stream - In the implementation block
@property (readonly) NSDictionary * metaData;              //@synthesize metaData=_metaData - In the implementation block
+(char)usesMetaData:(int)arg1 ;
-(char)isFile:(id)arg1 validForSubmission:(int)arg2 to:(int)arg3 ;
-(char)isFile:(id)arg1 reasonableSize:(long long)arg2 forRouting:(int)arg3 ofType:(int)arg4 ;
-(id)initWithPath:(id)arg1 forRouting:(int)arg2 ;
-(void)dealloc;
-(NSDictionary *)metaData;
-(_sFILE*)stream;
@end

