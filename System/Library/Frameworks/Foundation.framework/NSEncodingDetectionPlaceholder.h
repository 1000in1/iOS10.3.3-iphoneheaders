/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 11:20:42 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/Frameworks/Foundation.framework/Foundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString;

@interface NSEncodingDetectionPlaceholder : NSObject {

	unsigned nsEncoding;
	unsigned long cfEncoding;
	NSString* string;
	char* bytes;
	unsigned long bytesLength;
	char* bytesStart;

}

@property (readonly) unsigned nsEncoding; 
@property (readonly) unsigned long cfEncoding; 
@property (readonly) NSString * string; 
@property (readonly) char* bytes; 
@property (readonly) unsigned long bytesLength; 
+(id)placeholderForDetector:(id)arg1 ;
-(unsigned)nsEncoding;
-(unsigned long)cfEncoding;
-(unsigned long)bytesLength;
-(void)dealloc;
-(id)debugDescription;
-(char*)bytes;
-(NSString *)string;
@end

