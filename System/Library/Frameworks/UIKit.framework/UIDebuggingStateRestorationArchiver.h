/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 11:21:16 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Foundation/NSCoder.h>

@class NSMutableDictionary, NSDictionary;

@interface UIDebuggingStateRestorationArchiver : NSCoder {

	NSMutableDictionary* _values;
	char _finished;

}

@property (nonatomic,readonly) NSDictionary * values; 
+(id)_wrapObject:(id)arg1 ;
+(void)setObjectMetadataForRestorableObject:(id)arg1 dictionary:(id)arg2 ;
+(void)setRestorationMetadataForRestorableObject:(id)arg1 dictionary:(id)arg2 ;
+(void)cleanupStoryboardInfoForObject:(id)arg1 dictionary:(id)arg2 ;
+(id)_specificTypeForObject:(id)arg1 ;
+(char)objectSupportsStateRestoration:(id)arg1 ;
+(id)stateRestorationDictionaryForObject:(id)arg1 ;
-(id)init;
-(void)encodeObject:(id)arg1 forKey:(id)arg2 ;
-(void)encodeBool:(char)arg1 forKey:(id)arg2 ;
-(void)encodeInt:(int)arg1 forKey:(id)arg2 ;
-(void)finishEncoding;
-(char)allowsKeyedCoding;
-(void)encodeBytes:(const char*)arg1 length:(unsigned)arg2 forKey:(id)arg3 ;
-(void)encodeFloat:(float)arg1 forKey:(id)arg2 ;
-(void)encodeDouble:(double)arg1 forKey:(id)arg2 ;
-(void)encodeConditionalObject:(id)arg1 forKey:(id)arg2 ;
-(NSDictionary *)values;
-(id)_dictionaryForValue:(id)arg1 withType:(id)arg2 forKey:(id)arg3 ;
-(void)encodeInt32:(int)arg1 forKey:(id)arg2 ;
-(void)encodeInt64:(long long)arg1 forKey:(id)arg2 ;
-(void)encodeValueOfObjCType:(const char*)arg1 at:(const void*)arg2 ;
-(void)decodeValueOfObjCType:(const char*)arg1 at:(void*)arg2 ;
-(void)encodeDataObject:(id)arg1 ;
-(id)decodeDataObject;
-(int)versionForClassName:(id)arg1 ;
@end

