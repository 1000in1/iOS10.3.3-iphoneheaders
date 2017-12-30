/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 11:23:24 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SpringBoard/SpringBoard-Structs.h>
#import <libobjc.A.dylib/NSFastEnumeration.h>

@class NSMutableOrderedSet;

@interface SBAlertItemsObjectQueue : NSObject <NSFastEnumeration> {

	NSMutableOrderedSet* _objects;

}

@property (nonatomic,retain) NSMutableOrderedSet * objects;              //@synthesize objects=_objects - In the implementation block
-(void)prependObject:(id)arg1 ;
-(char)hasObjectOfClass:(Class)arg1 ;
-(void)appendObject:(id)arg1 ;
-(id)init;
-(void)removeObject:(id)arg1 ;
-(unsigned)countByEnumeratingWithState:(SCD_Struct_SB35*)arg1 objects:(id*)arg2 count:(unsigned)arg3 ;
-(char)containsObject:(id)arg1 ;
-(id)dequeueAllObjects;
-(NSMutableOrderedSet *)objects;
-(id)descriptionWithMultilinePrefix:(id)arg1 ;
-(id)succinctDescription;
-(id)succinctDescriptionBuilder;
-(id)descriptionBuilderWithMultilinePrefix:(id)arg1 ;
-(id)objectsOfClass:(Class)arg1 ;
-(void)setObjects:(NSMutableOrderedSet *)arg1 ;
-(char)hasObject;
@end

