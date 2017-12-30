/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 4:29:19 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/PreferenceBundles/TwitterSettings.bundle/TwitterSettings
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Foundation/NSOperation.h>

@class ACAccount, ACAccountStore, NSArray, NSDictionary;

@interface SLTwitterABLookup : NSOperation {

	ACAccount* _account;
	ACAccountStore* _accountStore;
	char _executing;
	char _finished;
	NSArray* _emails;
	NSArray* _phones;
	NSDictionary* _personDictionary;

}

@property (nonatomic,copy) NSArray * emails;                               //@synthesize emails=_emails - In the implementation block
@property (nonatomic,copy) NSArray * phones;                               //@synthesize phones=_phones - In the implementation block
@property (nonatomic,retain) NSDictionary * personDictionary;              //@synthesize personDictionary=_personDictionary - In the implementation block
-(void)_populateABWithData:(id)arg1 ;
-(NSDictionary *)personDictionary;
-(void)setPersonDictionary:(NSDictionary *)arg1 ;
-(void)start;
-(char)isFinished;
-(char)isExecuting;
-(char)isConcurrent;
-(NSArray *)emails;
-(NSArray *)phones;
-(id)initWithAccount:(id)arg1 store:(id)arg2 ;
-(void)setEmails:(NSArray *)arg1 ;
-(void)setPhones:(NSArray *)arg1 ;
@end

