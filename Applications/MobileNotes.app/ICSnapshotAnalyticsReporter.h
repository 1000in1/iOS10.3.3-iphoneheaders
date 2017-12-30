/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 11:25:02 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /Applications/MobileNotes.app/MobileNotes
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MobileNotes/MobileNotes-Structs.h>
#import <NotesShared/ICAnalyticsReporterBase.h>

@class NSDate, NSMutableDictionary, NSMutableSet;

@interface ICSnapshotAnalyticsReporter : ICAnalyticsReporterBase {

	char _previousLoggingHasFinished;
	NSDate* _timeStampForPreviousLogging;
	NSMutableDictionary* _blocksForNonCountKeys;
	NSMutableSet* _distributionKeysToResetBeforeLogging;
	unsigned _keysThatHaveFinishedLogging;

}

@property (retain) NSMutableDictionary * blocksForNonCountKeys;                      //@synthesize blocksForNonCountKeys=_blocksForNonCountKeys - In the implementation block
@property (retain) NSMutableSet * distributionKeysToResetBeforeLogging;              //@synthesize distributionKeysToResetBeforeLogging=_distributionKeysToResetBeforeLogging - In the implementation block
@property (assign) unsigned keysThatHaveFinishedLogging;                             //@synthesize keysThatHaveFinishedLogging=_keysThatHaveFinishedLogging - In the implementation block
@property (assign) char previousLoggingHasFinished;                                  //@synthesize previousLoggingHasFinished=_previousLoggingHasFinished - In the implementation block
@property (nonatomic,retain) NSDate * timeStampForPreviousLogging;                   //@synthesize timeStampForPreviousLogging=_timeStampForPreviousLogging - In the implementation block
+(id)sharedReporter;
-(NSDate *)timeStampForPreviousLogging;
-(void)performRepetitiveClearAndLogForNonCountKeys:(id)arg1 ;
-(void)setPreviousLoggingHasFinished:(char)arg1 ;
-(NSMutableDictionary *)blocksForNonCountKeys;
-(NSMutableSet *)distributionKeysToResetBeforeLogging;
-(char)localAccountIsMigrated;
-(char)shouldConsiderLegacyAccount:(NoteAccountObject*)arg1 ;
-(id)legacyFetchRequestWithEntityName:(id)arg1 andPredicate:(id)arg2 ;
-(id)legacyContext;
-(id)predicateForPPNotes;
-(void)performLoggingOnlyForNonCountKeys:(id)arg1 ;
-(char)previousLoggingHasFinished;
-(void)performClearAndLogForNonCountKeys;
-(void)setKeysThatHaveFinishedLogging:(unsigned)arg1 ;
-(unsigned)keysThatHaveFinishedLogging;
-(id)ICFetchRequestWithEntityName:(id)arg1 andPredicate:(id)arg2 ;
-(void)setTimeStampForPreviousLogging:(NSDate *)arg1 ;
-(void)setBlocksForNonCountKeys:(NSMutableDictionary *)arg1 ;
-(void)setDistributionKeysToResetBeforeLogging:(NSMutableSet *)arg1 ;
-(id)init;
@end

