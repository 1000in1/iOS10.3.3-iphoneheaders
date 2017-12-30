/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 11:21:40 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/PrivateFrameworks/CacheDelete.framework/CacheDelete
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CacheDelete/CacheDelete-Structs.h>
#import <CacheDelete/CacheDeleteRecent.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSDictionary;

@interface CacheDeleteRecentServiceInfo : CacheDeleteRecent <NSSecureCoding, NSCopying> {

	SCD_Struct_Ca1 urgencies[4];
	NSDictionary* diagnostics[4];

}
+(char)supportsSecureCoding;
+(id)cacheDeleteRecentServiceInfo:(id)arg1 atUrgency:(int)arg2 pushed:(char)arg3 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)log;
-(id)initWithAmount:(id)arg1 atUrgency:(int)arg2 pushed:(char)arg3 ;
-(int)normalizeUrgency:(int)arg1 ;
-(char)validate:(double)arg1 atUrgency:(int)arg2 ;
-(id)amountAtUrgency:(int)arg1 ;
-(char)updateAmount:(id)arg1 atUrgency:(int)arg2 ;
-(void)updateDiagnostics:(id)arg1 atUrgency:(int)arg2 ;
-(id)diagnosticsAtUrgency:(int)arg1 ;
@end

