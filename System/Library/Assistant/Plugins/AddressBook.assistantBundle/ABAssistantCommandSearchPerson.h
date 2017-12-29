/*
* This header is generated by classdump-dyld 1.0
* on Friday, December 29, 2017 at 6:36:17 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/Assistant/Plugins/AddressBook.assistantBundle/AddressBook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SAObjects/SAABPersonSearch.h>
#import <AddressBook/ABAssistantCommand.h>
#import <libobjc.A.dylib/ABSearchOperationDelegate.h>

@class NSMutableArray, DADConnection, NSString;

@interface ABAssistantCommandSearchPerson : SAABPersonSearch <ABAssistantCommand, ABSearchOperationDelegate> {

	void* _addressBook;
	NSMutableArray* _peopleFound;
	DADConnection* _connection;

}

@property (nonatomic,retain) DADConnection * connection;              //@synthesize connection=_connection - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic) void* addressBook; 
-(BOOL)addABSearchOperationWithPredicate:(id)arg1 toOperationQueue:(id)arg2 ;
-(BOOL)searchForLocalContacts;
-(BOOL)searchForRemoteContacts;
-(void)searchForMeContacts;
-(void)dealloc;
-(DADConnection *)connection;
-(void)setConnection:(DADConnection *)arg1 ;
-(id)_validate;
-(id)_perform;
-(void)searchOperation:(id)arg1 didFindMatches:(id)arg2 moreComing:(char)arg3 ;
-(void)setAddressBook:(void*)arg1 ;
-(void*)addressBook;
-(void)performWithCompletion:(/*^block*/id)arg1 ;
@end
