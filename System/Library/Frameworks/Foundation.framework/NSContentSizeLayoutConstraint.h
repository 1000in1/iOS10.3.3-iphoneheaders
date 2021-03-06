/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 11:20:45 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/Frameworks/Foundation.framework/Foundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Foundation/NSLayoutConstraint.h>

@interface NSContentSizeLayoutConstraint : NSLayoutConstraint {

	float _huggingPriority;
	float _compressionResistancePriority;

}

@property (readonly) float huggingPriority;                            //@synthesize huggingPriority=_huggingPriority - In the implementation block
@property (readonly) float compressionResistancePriority;              //@synthesize compressionResistancePriority=_compressionResistancePriority - In the implementation block
-(id)_priorityDescription;
-(float)priorityForVariable:(id)arg1 ;
-(float)huggingPriority;
-(float)compressionResistancePriority;
-(id)initWithLayoutItem:(id)arg1 value:(float)arg2 huggingPriority:(float)arg3 compressionResistancePriority:(float)arg4 orientation:(int)arg5 ;
@end

