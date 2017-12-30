/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 31, 2017 at 12:57:37 AM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/PrivateFrameworks/SlideshowKit.framework/Frameworks/OpusKit.framework/OpusKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <OpusKit/OpusKit-Structs.h>
#import <OpusKit/OKAction.h>
#import <libobjc.A.dylib/OKActionSwipeExports.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@interface OKActionSwipe : OKAction <OKActionSwipeExports, NSSecureCoding> {

	unsigned _direction;

}

@property (assign,nonatomic) unsigned direction;              //@synthesize direction=_direction - In the implementation block
+(char)supportsSecureCoding;
+(void)setupJavascriptContext:(id)arg1 ;
+(id)swipeActionWithLocation:(CGPoint)arg1 direction:(unsigned)arg2 touchCount:(unsigned)arg3 context:(id)arg4 ;
-(id)init;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)setDirection:(unsigned)arg1 ;
-(unsigned)direction;
@end

