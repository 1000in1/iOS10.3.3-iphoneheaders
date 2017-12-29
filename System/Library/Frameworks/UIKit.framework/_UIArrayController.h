/*
* This header is generated by classdump-dyld 1.0
* on Friday, December 29, 2017 at 6:29:50 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol _UIArrayControllerDelegate;
@class NSArray, NSPredicate, NSOperationQueue, NSOrderedSet;

@interface _UIArrayController : NSObject {

	char _firstUpdateSent;
	char _invalidated;
	NSArray* _sortDescriptors;
	NSPredicate* _predicate;
	id<_UIArrayControllerDelegate> _delegate;
	NSOperationQueue* _operationQueue;
	NSOrderedSet* _lastSnapshot;

}

@property (assign,nonatomic,__weak) id<_UIArrayControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,copy) NSOrderedSet * lastSnapshot;                                   //@synthesize lastSnapshot=_lastSnapshot - In the implementation block
@property (nonatomic,retain) NSArray * sortDescriptors;                                   //@synthesize sortDescriptors=_sortDescriptors - In the implementation block
@property (nonatomic,retain) NSPredicate * predicate;                                     //@synthesize predicate=_predicate - In the implementation block
@property (nonatomic,retain) NSOperationQueue * operationQueue;                           //@synthesize operationQueue=_operationQueue - In the implementation block
-(void)invalidate;
-(void)setDelegate:(id<_UIArrayControllerDelegate>)arg1 ;
-(void)dealloc;
-(id<_UIArrayControllerDelegate>)delegate;
-(id)initWithDelegate:(id)arg1 ;
-(void)setOperationQueue:(NSOperationQueue *)arg1 ;
-(NSOperationQueue *)operationQueue;
-(void)setLastSnapshot:(NSOrderedSet *)arg1 ;
-(void)processUpdate:(id)arg1 changedObjects:(id)arg2 ;
-(char)objectAttributeModified:(id)arg1 newObject:(id)arg2 ;
-(id)_computeUpdatesFromOld:(id)arg1 toNew:(id)arg2 changedItems:(id)arg3 ;
-(void)callUpdateHandler:(id)arg1 changeDictionary:(id)arg2 ;
-(void)setSortDescriptors:(NSArray *)arg1 ;
-(NSArray *)sortDescriptors;
-(void)setPredicate:(NSPredicate *)arg1 ;
-(NSPredicate *)predicate;
-(NSOrderedSet *)lastSnapshot;
@end
