/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 31, 2017 at 12:56:56 AM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/PrivateFrameworks/HomeSharing.framework/Support/itunescloudd
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <itunescloudd/CloudLibraryOperation.h>

@class NSArray;

@interface SagaGetGeniusItemsOperation : CloudLibraryOperation {

	unsigned long long _seedID;
	unsigned _numberOfItems;
	NSArray* _itemIDs;

}

@property (nonatomic,readonly) NSArray * itemIDs;              //@synthesize itemIDs=_itemIDs - In the implementation block
-(id)initWithSeedID:(unsigned long long)arg1 numberOfItems:(unsigned)arg2 ;
-(NSArray *)itemIDs;
-(void)main;
@end

