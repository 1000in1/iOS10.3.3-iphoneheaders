/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 6:40:20 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/TextInput/kbd
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/MSSearchDelegate.h>
#import <MessagesDataKeyboardPlugin/TILinguisticDataSource.h>

@class MSSearch, NSCondition, NSArray, NSString;

@interface TIMailDataSource : NSObject <MSSearchDelegate, TILinguisticDataSource> {

	char _valid;
	MSSearch* _search;
	NSCondition* _cond;
	NSArray* _outgoingMessages;

}

@property (nonatomic,retain) MSSearch * search;                      //@synthesize search=_search - In the implementation block
@property (nonatomic,readonly) NSCondition * cond;                   //@synthesize cond=_cond - In the implementation block
@property (assign,getter=isValid,nonatomic) char valid;              //@synthesize valid=_valid - In the implementation block
@property (nonatomic,copy) NSArray * outgoingMessages;               //@synthesize outgoingMessages=_outgoingMessages - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)searchCriterionForSenderAddresses:(id)arg1 ;
-(NSCondition *)cond;
-(void)searchAccounts:(id)arg1 ;
-(void)searchMailWithSenderAddresses:(id)arg1 ;
-(void)initializeSearchIfNecessary;
-(NSArray *)outgoingMessages;
-(void)setOutgoingMessages:(NSArray *)arg1 ;
-(id)init;
-(void)dealloc;
-(char)isValid;
-(MSSearch *)search;
-(void)setSearch:(MSSearch *)arg1 ;
-(char)search:(id)arg1 didFindResults:(id)arg2 ;
-(void)search:(id)arg1 didFinishWithError:(id)arg2 ;
-(id)nextOutgoingMessageBatch;
-(void)setValid:(char)arg1 ;
@end

