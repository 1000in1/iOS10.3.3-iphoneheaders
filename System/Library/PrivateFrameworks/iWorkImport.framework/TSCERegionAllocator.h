/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 31, 2017 at 1:10:39 AM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <iWorkImport/iWorkImport-Structs.h>
@interface TSCERegionAllocator : NSObject {

	TSCERegionNode* mHead;
	TSCERegionNode* mCurBlock;
	unsigned mBlockOffset;
	NSZone* mZone;

}
-(void*)malloc:(unsigned long)arg1 ;
-(id)initWithInitialCapacity:(unsigned long)arg1 ;
-(void*)calloc:(unsigned long)arg1 ;
-(void)dealloc;
-(NSZone*)zone;
-(void)reset;
@end

