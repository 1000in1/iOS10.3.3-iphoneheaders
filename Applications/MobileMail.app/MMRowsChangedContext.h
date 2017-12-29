/*
* This header is generated by classdump-dyld 1.0
* on Friday, December 29, 2017 at 6:38:58 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /Applications/MobileMail.app/MobileMail
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MobileMail/MobileMail-Structs.h>
#import <CoreFoundation/NSDictionary.h>

@class NSSet, NSArray, MFSparseMutable64IndexSet;

@interface MMRowsChangedContext : NSDictionary {

	NSSet* _insertedIndexPaths;
	NSSet* _removedIndexPaths;
	NSSet* _updatedIndexPaths;
	NSSet* _destinationIndexPaths;
	NSSet* _relocatedIndexPaths;
	NSArray* _addedMessageInfos;
	NSArray* _removedMessageInfos;
	MFSparseMutable64IndexSet* _mergedConversations;
	unsigned _startingMessageCount;
	unsigned _endingMessageCount;

}

@property (nonatomic,retain) NSSet * insertedIndexPaths;                                   //@synthesize insertedIndexPaths=_insertedIndexPaths - In the implementation block
@property (nonatomic,retain) NSSet * removedIndexPaths;                                    //@synthesize removedIndexPaths=_removedIndexPaths - In the implementation block
@property (nonatomic,retain) NSSet * updatedIndexPaths;                                    //@synthesize updatedIndexPaths=_updatedIndexPaths - In the implementation block
@property (nonatomic,retain) NSSet * destinationIndexPaths;                                //@synthesize destinationIndexPaths=_destinationIndexPaths - In the implementation block
@property (nonatomic,retain) NSSet * relocatedIndexPaths;                                  //@synthesize relocatedIndexPaths=_relocatedIndexPaths - In the implementation block
@property (nonatomic,retain) NSArray * addedMessageInfos;                                  //@synthesize addedMessageInfos=_addedMessageInfos - In the implementation block
@property (nonatomic,retain) NSArray * removedMessageInfos;                                //@synthesize removedMessageInfos=_removedMessageInfos - In the implementation block
@property (nonatomic,retain) MFSparseMutable64IndexSet * mergedConversations;              //@synthesize mergedConversations=_mergedConversations - In the implementation block
@property (assign,nonatomic) unsigned startingMessageCount;                                //@synthesize startingMessageCount=_startingMessageCount - In the implementation block
@property (assign,nonatomic) unsigned endingMessageCount;                                  //@synthesize endingMessageCount=_endingMessageCount - In the implementation block
-(NSSet *)updatedIndexPaths;
-(NSSet *)relocatedIndexPaths;
-(NSSet *)destinationIndexPaths;
-(NSArray *)addedMessageInfos;
-(NSArray *)removedMessageInfos;
-(MFSparseMutable64IndexSet *)mergedConversations;
-(void)setUpdatedIndexPaths:(NSSet *)arg1 ;
-(void)setRemovedMessageInfos:(NSArray *)arg1 ;
-(void)setMergedConversations:(MFSparseMutable64IndexSet *)arg1 ;
-(void)setStartingMessageCount:(unsigned)arg1 ;
-(void)setEndingMessageCount:(unsigned)arg1 ;
-(void)setAddedMessageInfos:(NSArray *)arg1 ;
-(void)setRelocatedIndexPaths:(NSSet *)arg1 ;
-(void)setDestinationIndexPaths:(NSSet *)arg1 ;
-(unsigned)startingMessageCount;
-(unsigned)endingMessageCount;
-(id)descriptionWithLocale:(id)arg1 indent:(unsigned)arg2 ;
-(void)dealloc;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSSet *)insertedIndexPaths;
-(char)hasChanges;
-(void)setInsertedIndexPaths:(NSSet *)arg1 ;
-(void)setRemovedIndexPaths:(NSSet *)arg1 ;
-(NSSet *)removedIndexPaths;
@end
