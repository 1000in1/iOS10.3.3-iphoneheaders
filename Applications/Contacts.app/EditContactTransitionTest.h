/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 11:23:52 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /Applications/Contacts.app/Contacts
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Contacts/ContactsTest.h>

@interface EditContactTransitionTest : ContactsTest {

	unsigned _iteration;
	unsigned _maxIterations;

}

@property (assign,nonatomic) unsigned iteration;                  //@synthesize iteration=_iteration - In the implementation block
@property (assign,nonatomic) unsigned maxIterations;              //@synthesize maxIterations=_maxIterations - In the implementation block
-(char)prepareForTestWithOptions:(id)arg1 ;
-(void)showNextContact;
-(void)setMaxIterations:(unsigned)arg1 ;
-(unsigned)maxIterations;
-(void)setIteration:(unsigned)arg1 ;
-(void)measureEditingTransitionOnController:(id)arg1 ;
-(unsigned)iteration;
@end

