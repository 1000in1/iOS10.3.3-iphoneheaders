/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 11:21:17 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSCoding.h>

@class NSArray, NSSet;

@interface _UITraitStorageList : NSObject <NSCoding> {

	id _topLevelObject;
	NSArray* _traitStorages;
	NSSet* _descendants;

}

@property (nonatomic,__weak,readonly) id topLevelObject;              //@synthesize topLevelObject=_topLevelObject - In the implementation block
@property (nonatomic,readonly) NSArray * traitStorages;               //@synthesize traitStorages=_traitStorages - In the implementation block
@property (nonatomic,readonly) NSSet * descendants;                   //@synthesize descendants=_descendants - In the implementation block
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(NSArray *)traitStorages;
-(id)initWithTopLevelObject:(id)arg1 traitStorages:(id)arg2 descendants:(id)arg3 ;
-(id)topLevelObject;
-(NSSet *)descendants;
@end

