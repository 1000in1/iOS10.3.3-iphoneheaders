/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 11:21:05 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/PrivateFrameworks/UIFoundation.framework/UIFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIFoundation/NSGlyphInfo.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@interface NSCIDGlyphInfo : NSGlyphInfo <NSSecureCoding> {

	unsigned short _cid;
	unsigned _collection;

}
+(id)glyphInfoWithCharacterIdentifier:(unsigned)arg1 collection:(unsigned)arg2 baseString:(id)arg3 ;
+(void)initialize;
+(char)supportsSecureCoding;
-(unsigned)_glyphForFont:(id)arg1 baseString:(id)arg2 ;
-(unsigned)characterIdentifier;
-(unsigned)characterCollection;
-(id)initWithCharacterIdentifier:(unsigned)arg1 collection:(unsigned)arg2 baseString:(id)arg3 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)description;
@end

