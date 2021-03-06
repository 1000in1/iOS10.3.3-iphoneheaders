/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 11:21:04 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/PrivateFrameworks/CoreUI.framework/CoreUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <CoreUI/CoreUI-Structs.h>
@interface CUINamedRenditionInfo : NSObject {

	void* _bitmap;
	const renditionkeyfmt* _keyFormat;

}
-(char)isEqualToNamedRenditionInfo:(id)arg1 ;
-(id)_initWithKeyFormat:(const renditionkeyfmt*)arg1 andBitmap:(void*)arg2 ;
-(id)initWithData:(id)arg1 andKeyFormat:(const renditionkeyfmt*)arg2 ;
-(id)initWithKeyFormat:(const renditionkeyfmt*)arg1 ;
-(id)bitwiseAndWith:(id)arg1 ;
-(int)attributePresent:(int)arg1 withValue:(unsigned short)arg2 ;
-(void)setAttributePresent:(int)arg1 withValue:(unsigned short)arg2 ;
-(void)clearAttributePresent:(int)arg1 withValue:(unsigned short)arg2 ;
-(unsigned long)numberOfBitsSet;
-(void)dealloc;
-(char)isEqual:(id)arg1 ;
-(id)description;
-(id)archivedData;
@end

