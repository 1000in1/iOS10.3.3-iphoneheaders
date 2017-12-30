/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 11:21:39 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/Frameworks/AddressBook.framework/AddressBook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Foundation/NSOperation.h>

@protocol ABSearchOperationDelegate;
@class NSThread, NSPredicate, NSArray;

@interface ABSearchOperation : NSOperation {

	void* _addressBook;
	void* _internalSearchAddressBook;
	/*^block*/id _progressBlock;
	NSThread* _progressBlockThread;
	void* _context;
	id<ABSearchOperationDelegate> _delegate;
	NSPredicate* _predicate;
	NSArray* _prefetchProperties;
	unsigned _sortOrdering;

}

@property (nonatomic,copy) id progressBlock;                                      //@synthesize progressBlock=_progressBlock - In the implementation block
@property (assign,nonatomic) void* internalSearchAddressBook; 
@property (assign,nonatomic) void* addressBook; 
@property (nonatomic,retain) NSPredicate * predicate;                             //@synthesize predicate=_predicate - In the implementation block
@property (nonatomic,copy) NSArray * prefetchProperties;                          //@synthesize prefetchProperties=_prefetchProperties - In the implementation block
@property (assign,nonatomic) id<ABSearchOperationDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) void* context;                                       //@synthesize context=_context - In the implementation block
@property (assign,nonatomic) unsigned sortOrdering;                               //@synthesize sortOrdering=_sortOrdering - In the implementation block
+(id)personPredicateWithName:(id)arg1 addressBook:(void*)arg2 ;
+(id)personPredicateWithNameLike:(id)arg1 inGroup:(void*)arg2 addressBook:(void*)arg3 ;
+(id)personPredicateWithNameLike:(id)arg1 inSource:(void*)arg2 includeSourceInResults:(char)arg3 addressBook:(void*)arg4 ;
+(id)personPredicateWithNameLike:(id)arg1 inSource:(void*)arg2 includeSourceInResults:(char)arg3 includePhotosInResults:(char)arg4 addressBook:(void*)arg5 ;
+(id)personPredicateWithNameLike:(id)arg1 inAccount:(id)arg2 addressBook:(void*)arg3 ;
+(id)personPredicateWithNameOnly:(id)arg1 inAccount:(id)arg2 addressBook:(void*)arg3 ;
+(id)personPredicateWithAnyValueForProperty:(int)arg1 addressBook:(void*)arg2 ;
+(id)personPredicateWithGroup:(void*)arg1 addressBook:(void*)arg2 ;
+(id)personPredicateWithNameLike:(id)arg1 inSource:(void*)arg2 addressBook:(void*)arg3 ;
+(id)personPredicateWithNameLike:(id)arg1 inGroups:(id)arg2 sources:(id)arg3 addressBook:(void*)arg4 ;
+(id)personPredicateWithPhoneLike:(id)arg1 countryHint:(id)arg2 addressBook:(void*)arg3 ;
+(id)personPredicateWithValue:(id)arg1 comparison:(long)arg2 forProperty:(int)arg3 addressBook:(void*)arg4 ;
+(id)personPredicateWithNameLike:(id)arg1 addressBook:(void*)arg2 ;
-(void)cancel;
-(void)setDelegate:(id<ABSearchOperationDelegate>)arg1 ;
-(void)dealloc;
-(id<ABSearchOperationDelegate>)delegate;
-(void*)context;
-(void)setContext:(void*)arg1 ;
-(void)setPredicate:(NSPredicate *)arg1 ;
-(NSPredicate *)predicate;
-(void)main;
-(void*)internalSearchAddressBook;
-(void)_mainThread_tellDelegateSearchFoundMatch:(void*)arg1 ;
-(void)setInternalSearchAddressBook:(void*)arg1 ;
-(NSArray *)prefetchProperties;
-(void)setPrefetchProperties:(NSArray *)arg1 ;
-(unsigned)sortOrdering;
-(void)setSortOrdering:(unsigned)arg1 ;
-(char)isConcurrent;
-(id)progressBlock;
-(void)setProgressBlock:(id)arg1 ;
-(char)predicateShouldContinue:(id)arg1 ;
-(char)predicateShouldContinue:(id)arg1 afterFindingRecord:(void*)arg2 ;
-(void)setAddressBook:(void*)arg1 ;
-(void*)addressBook;
@end

