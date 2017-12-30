/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 11:25:11 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /Applications/MobileSafari.app/MobileSafari
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MobileSafari/CompletionItem.h>

@class NSString, SFSearchResult, WBSCompletionQuery, NSArray;

@interface SearchQueryRestorationCompletionItem : NSObject <CompletionItem> {

	SFSearchResult* _sfSearchResultValue;
	WBSCompletionQuery* _queryToRestore;
	NSArray* _completionGroupsToRestore;

}

@property (nonatomic,retain) WBSCompletionQuery * queryToRestore;                                //@synthesize queryToRestore=_queryToRestore - In the implementation block
@property (nonatomic,copy) NSArray * completionGroupsToRestore;                                  //@synthesize completionGroupsToRestore=_completionGroupsToRestore - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) NSString * parsecDomainIdentifier; 
@property (nonatomic,readonly) SFSearchResult * sfSearchResultValue;                             //@synthesize sfSearchResultValue=_sfSearchResultValue - In the implementation block
@property (nonatomic,readonly) unsigned engagementDestination; 
@property (nonatomic,readonly) NSString * lastSearchQuery; 
@property (nonatomic,readonly) NSString * completionTableHeaderViewReuseIdentifier; 
@property (assign,nonatomic) unsigned minimumRankOfTopHitToSuppressResult; 
@property (nonatomic,readonly) char restoresSearchState; 
@property (nonatomic,retain) id<CompletionItemActionHandler> handlerForActionItem; 
-(void)acceptCompletionWithActionHandler:(id)arg1 ;
-(id)completionTableViewCellForCompletionList:(id)arg1 ;
-(void)configureCompletionTableViewCell:(id)arg1 forCompletionList:(id)arg2 ;
-(void)auditAcceptedCompletionWithRank:(unsigned)arg1 ;
-(id)completionTableViewCellReuseIdentifier;
-(id)reflectedStringForUserTypedString:(id)arg1 ;
-(WBSCompletionQuery *)queryToRestore;
-(void)setQueryToRestore:(WBSCompletionQuery *)arg1 ;
-(NSArray *)completionGroupsToRestore;
-(void)setCompletionGroupsToRestore:(NSArray *)arg1 ;
-(id)initWithQuery:(id)arg1 ;
-(NSString *)parsecDomainIdentifier;
-(SFSearchResult *)sfSearchResultValue;
-(unsigned)engagementDestination;
@end

