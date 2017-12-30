/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 11:20:54 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/Frameworks/AudioToolbox.framework/AudioToolbox
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString;

@interface AUAudioUnitProperty : NSObject <NSSecureCoding> {

	NSString* _key;
	unsigned long _scope;
	unsigned long _element;

}
+(id)propertyWithKey:(id)arg1 scope:(unsigned long)arg2 element:(unsigned long)arg3 ;
+(id)propertyWithKey:(id)arg1 ;
+(char)supportsSecureCoding;
-(id)initWithKey:(id)arg1 scope:(unsigned long)arg2 element:(unsigned long)arg3 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)dealloc;
-(id)initWithKey:(id)arg1 ;
@end

