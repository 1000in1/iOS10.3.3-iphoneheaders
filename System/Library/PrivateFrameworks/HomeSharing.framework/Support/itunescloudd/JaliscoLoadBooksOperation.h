/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 31, 2017 at 12:56:57 AM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/PrivateFrameworks/HomeSharing.framework/Support/itunescloudd
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <itunescloudd/CloudLibraryOperation.h>

@class NSArray;

@interface JaliscoLoadBooksOperation : CloudLibraryOperation {

	char _parserSuccess;
	NSArray* _queryStoreIDs;
	NSArray* _books;

}

@property (assign,nonatomic) char parserSuccess;                   //@synthesize parserSuccess=_parserSuccess - In the implementation block
@property (nonatomic,retain) NSArray * books;                      //@synthesize books=_books - In the implementation block
@property (nonatomic,retain) NSArray * queryStoreIDs;              //@synthesize queryStoreIDs=_queryStoreIDs - In the implementation block
-(id)queryFilter;
-(void)setQueryStoreIDs:(NSArray *)arg1 ;
-(NSArray *)queryStoreIDs;
-(id)metadataFilter;
-(id)_queryFilterEncodedStringForDAAPNameString:(id)arg1 ;
-(char)parserSuccess;
-(void)setParserSuccess:(char)arg1 ;
-(void)main;
-(void)setBooks:(NSArray *)arg1 ;
-(NSArray *)books;
@end

