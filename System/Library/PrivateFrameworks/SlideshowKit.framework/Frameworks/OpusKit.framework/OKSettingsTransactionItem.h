/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 31, 2017 at 12:57:35 AM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/PrivateFrameworks/SlideshowKit.framework/Frameworks/OpusKit.framework/OpusKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString;

@interface OKSettingsTransactionItem : NSObject {

	/*^block*/id _updateBlock;
	NSString* key;
	NSString* _key;

}

@property (nonatomic,copy) id updateBlock;              //@synthesize updateBlock=_updateBlock - In the implementation block
@property (nonatomic,copy) NSString * key;              //@synthesize key=_key - In the implementation block
-(id)init;
-(NSString *)key;
-(void)dealloc;
-(void)setKey:(NSString *)arg1 ;
-(void)setUpdateBlock:(id)arg1 ;
-(id)updateBlock;
@end

