/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 11:21:04 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/PrivateFrameworks/CoreUI.framework/CoreUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreUI/CoreUI-Structs.h>
#import <CoreUI/CUICatalog.h>

@interface CUIMutableCatalog : CUICatalog {

	unsigned _checkRespondsTo : 1;
	unsigned _respondsToCheck : 1;

}
-(unsigned)_storageRefForRendition:(id)arg1 representsODRContent:(char*)arg2 ;
-(id)_baseKeyForName:(id)arg1 ;
-(void)insertCGImage:(CGImageRef)arg1 name:(id)arg2 scale:(float)arg3 idiom:(int)arg4 subtype:(int)arg5 ;
-(id)init;
-(void)dealloc;
-(id)initWithName:(id)arg1 fromBundle:(id)arg2 error:(id*)arg3 ;
-(id)initWithName:(id)arg1 ;
-(void)removeImageNamed:(id)arg1 scale:(float)arg2 idiom:(int)arg3 subtype:(int)arg4 ;
-(void)removeImageNamed:(id)arg1 withDescription:(id)arg2 ;
-(void)insertCGImage:(CGImageRef)arg1 withName:(id)arg2 andDescription:(id)arg3 ;
@end

