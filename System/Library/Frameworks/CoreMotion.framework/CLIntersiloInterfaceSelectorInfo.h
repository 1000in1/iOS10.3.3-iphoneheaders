/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 11:21:40 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/Frameworks/CoreMotion.framework/CoreMotion
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSMethodSignature, NSString;

@interface CLIntersiloInterfaceSelectorInfo : NSObject {

	SEL _sel;
	int _numArguments;
	int _replyBlockIndex;
	int _returnAddressIndex;
	int _returnValueSize;
	NSMethodSignature* _sig;
	NSString* _str;

}

@property (nonatomic,readonly) SEL sel;                                     //@synthesize sel=_sel - In the implementation block
@property (nonatomic,readonly) int numArguments;                            //@synthesize numArguments=_numArguments - In the implementation block
@property (nonatomic,readonly) int replyBlockIndex;                         //@synthesize replyBlockIndex=_replyBlockIndex - In the implementation block
@property (nonatomic,readonly) int returnAddressIndex;                      //@synthesize returnAddressIndex=_returnAddressIndex - In the implementation block
@property (nonatomic,readonly) int returnValueSize;                         //@synthesize returnValueSize=_returnValueSize - In the implementation block
@property (nonatomic,retain,readonly) NSMethodSignature * sig;              //@synthesize sig=_sig - In the implementation block
@property (nonatomic,retain,readonly) NSString * str;                       //@synthesize str=_str - In the implementation block
-(id)description;
-(NSString *)str;
-(id)initWithSelector:(SEL)arg1 andMethodSignature:(id)arg2 ;
-(SEL)sel;
-(int)numArguments;
-(int)replyBlockIndex;
-(int)returnAddressIndex;
-(int)returnValueSize;
-(NSMethodSignature *)sig;
@end

