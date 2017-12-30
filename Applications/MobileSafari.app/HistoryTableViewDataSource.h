/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 11:25:12 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /Applications/MobileSafari.app/MobileSafari
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol HistoryTableViewDataSourceDelegate;
#import <MobileSafari/MobileSafari-Structs.h>
@class WBSHistorySessionController, NSOrderedSet, NSString;

@interface HistoryTableViewDataSource : NSObject {

	WBSHistorySessionController* _sessionController;
	NSOrderedSet* _currentSessions;
	NSOrderedSet* _currentUnfilteredSessions;
	/*^block*/id _deleteCompletionBlock;
	NSString* _filterString;
	struct {
		char updating;
		char didChangeFilter;
		char didChangeExternally;
		unsigned progressiveFilterState;
	}  _needsUpdateFlags;
	id<HistoryTableViewDataSourceDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<HistoryTableViewDataSourceDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
+(void)initialize;
-(void)filterUsingString:(id)arg1 ;
-(id)historyItemForRowAtIndexPath:(id)arg1 ;
-(void)deleteHistoryItemAtIndexPath:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)historyChanged:(id)arg1 ;
-(id)_browsingSessions;
-(id)_browsingSessions:(id)arg1 filteredUsingString:(id)arg2 ;
-(void)_setCurrentBrowsingSessions:(id)arg1 computingIndividualChanges:(char)arg2 ;
-(id)_computeChangeSetBetweenOldHistorySessions:(id)arg1 newHistorySessions:(id)arg2 ;
-(void)_reportChangeToDelegate:(id)arg1 ;
-(id)_computeChangeSetBetweenOldHistorySession:(id)arg1 newHistorySession:(id)arg2 oldSectionIndex:(int)arg3 newSectionIndex:(int)arg4 ;
-(char)_historyItemTitle:(id)arg1 matchesFilterTokens:(id)arg2 ;
-(char)_historyItemURL:(id)arg1 matchesFilter:(id)arg2 ;
-(id)_historySession:(id)arg1 filteredUsingHistoryItemsPredicate:(id)arg2 ;
-(void)setDelegate:(id<HistoryTableViewDataSourceDelegate>)arg1 ;
-(void)dealloc;
-(unsigned)numberOfRowsInSection:(unsigned)arg1 ;
-(id<HistoryTableViewDataSourceDelegate>)delegate;
-(unsigned)numberOfSections;
-(id)initWithDelegate:(id)arg1 ;
-(void)_updateIfNeeded;
@end

