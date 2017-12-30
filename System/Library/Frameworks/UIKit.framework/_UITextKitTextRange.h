/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 11:21:34 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIKit-Structs.h>
#import <UIKit/UITextRange.h>
#import <libobjc.A.dylib/NSCopying.h>

@class _UITextKitTextPosition, UITextPosition;

@interface _UITextKitTextRange : UITextRange <NSCopying> {

	_UITextKitTextPosition* _start;
	_UITextKitTextPosition* _end;

}

@property (nonatomic,retain) UITextPosition * start;              //@synthesize start=_start - In the implementation block
@property (nonatomic,retain) UITextPosition * end;                //@synthesize end=_end - In the implementation block
@property (nonatomic,readonly) int affinity; 
+(id)rangeWithRange:(NSRange)arg1 ;
+(id)rangeWithStart:(id)arg1 end:(id)arg2 ;
+(id)rangeWithRange:(NSRange)arg1 affinity:(int)arg2 ;
+(id)defaultRange;
-(id)init;
-(char)isEqual:(id)arg1 ;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(char)isEmpty;
-(UITextPosition *)start;
-(void)setStart:(UITextPosition *)arg1 ;
-(UITextPosition *)end;
-(void)setEnd:(UITextPosition *)arg1 ;
-(NSRange)asRange;
-(int)affinity;
@end

