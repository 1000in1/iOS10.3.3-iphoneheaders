/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 11:21:05 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/PrivateFrameworks/UIFoundation.framework/UIFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIFoundation/UIFoundation-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString;

@interface NSGlyphInfo : NSObject <NSCopying, NSSecureCoding> {

	NSString* _baseString;

}
+(id)glyphInfoWithGlyph:(unsigned)arg1 forFont:(id)arg2 baseString:(id)arg3 ;
+(id)glyphInfoWithCharacterIdentifier:(unsigned)arg1 collection:(unsigned)arg2 baseString:(id)arg3 ;
+(id)glyphInfoWithGlyphName:(id)arg1 forFont:(id)arg2 baseString:(id)arg3 ;
+(void)initialize;
+(char)supportsSecureCoding;
-(Class)classForKeyedArchiver;
-(unsigned)_glyphForFont:(id)arg1 baseString:(id)arg2 ;
-(id)initWithBaseString:(id)arg1 ;
-(id)_baseString;
-(id)glyphName;
-(unsigned)characterIdentifier;
-(unsigned)characterCollection;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)dealloc;
-(id)copyWithZone:(NSZone*)arg1 ;
@end

