/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 11:21:30 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIWebPDFSearchOperationDelegate.h>

@protocol UIWebPDFSearchControllerDelegate;
@class NSOperationQueue, NSMutableArray, NSString, UIPDFDocument, NSObject, NSArray;

@interface UIWebPDFSearchController : NSObject <UIWebPDFSearchOperationDelegate> {

	unsigned _resultIndexWhenLimitHit;
	char _notifiedThatSearchBegin;
	unsigned _pageIndexWhenLimitHit;
	NSOperationQueue* _searchQueue;
	NSMutableArray* _results;
	NSString* _searchString;
	UIPDFDocument* _documentToSearch;
	NSObject*<UIWebPDFSearchControllerDelegate> searchDelegate;
	unsigned startingPageIndex;
	float documentScale;
	unsigned resultLimit;

}

@property (nonatomic,retain) NSArray * results;                                                       //@synthesize results=_results - In the implementation block
@property (nonatomic,retain) NSString * searchString;                                                 //@synthesize searchString=_searchString - In the implementation block
@property (assign,nonatomic) NSObject*<UIWebPDFSearchControllerDelegate> searchDelegate; 
@property (nonatomic,retain) UIPDFDocument * documentToSearch;                                        //@synthesize documentToSearch=_documentToSearch - In the implementation block
@property (assign,nonatomic) float documentScale; 
@property (assign,nonatomic) unsigned startingPageIndex; 
@property (assign,nonatomic) unsigned resultLimit; 
@property (nonatomic,readonly) char searching; 
@property (nonatomic,readonly) char paused; 
-(id)init;
-(void)cancel;
-(void)dealloc;
-(void)resume;
-(NSString *)searchString;
-(float)documentScale;
-(void)setDocumentToSearch:(UIPDFDocument *)arg1 ;
-(void)setDocumentScale:(float)arg1 ;
-(void)setSearchDelegate:(NSObject*<UIWebPDFSearchControllerDelegate>)arg1 ;
-(void)setResultLimit:(unsigned)arg1 ;
-(void)setSearchString:(NSString *)arg1 ;
-(unsigned)resultLimit;
-(void)searchWasCancelled:(id)arg1 ;
-(void)search:(id)arg1 hasPartialResults:(id)arg2 ;
-(void)searchDidFinish:(id)arg1 ;
-(void)searchLimitHit:(id)arg1 ;
-(UIPDFDocument *)documentToSearch;
-(void)searchDidBegin:(id)arg1 ;
-(unsigned)startingPageIndex;
-(void)setStartingPageIndex:(unsigned)arg1 ;
-(NSObject*<UIWebPDFSearchControllerDelegate>)searchDelegate;
-(char)paused;
-(unsigned)_actualStartingPageIndex;
-(void)_clearSearchQueue;
-(void)search:(id)arg1 ;
-(void)searchDidTimeOut:(id)arg1 ;
-(char)searching;
-(void)pause;
-(NSArray *)results;
-(void)setResults:(NSArray *)arg1 ;
@end

