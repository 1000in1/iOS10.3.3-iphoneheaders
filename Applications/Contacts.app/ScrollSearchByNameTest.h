/*
* This header is generated by classdump-dyld 1.0
* on Friday, December 29, 2017 at 6:38:06 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /Applications/Contacts.app/Contacts
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Contacts/ContactsTest.h>
#import <UIKit/UINavigationControllerDelegate.h>

@class NSMutableDictionary, NSString;

@interface ScrollSearchByNameTest : ContactsTest <UINavigationControllerDelegate> {

	char _animate;
	NSMutableDictionary* _extraResults;
	unsigned _currentDirectoryIndex;
	NSString* _queryString;
	unsigned _currentQueryIndex;
	double _lastSearchBeginTime;

}

@property (nonatomic,retain) NSMutableDictionary * extraResults;              //@synthesize extraResults=_extraResults - In the implementation block
@property (assign,nonatomic) unsigned currentDirectoryIndex;                  //@synthesize currentDirectoryIndex=_currentDirectoryIndex - In the implementation block
@property (assign,nonatomic) char animate;                                    //@synthesize animate=_animate - In the implementation block
@property (nonatomic,retain) NSString * queryString;                          //@synthesize queryString=_queryString - In the implementation block
@property (assign,nonatomic) unsigned currentQueryIndex;                      //@synthesize currentQueryIndex=_currentQueryIndex - In the implementation block
@property (assign,nonatomic) double lastSearchBeginTime;                      //@synthesize lastSearchBeginTime=_lastSearchBeginTime - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(char)prepareForTestWithOptions:(id)arg1 ;
-(void)setExtraResults:(NSMutableDictionary *)arg1 ;
-(void)setCurrentQueryIndex:(unsigned)arg1 ;
-(unsigned)currentQueryIndex;
-(void)setLastSearchBeginTime:(double)arg1 ;
-(double)lastSearchBeginTime;
-(NSMutableDictionary *)extraResults;
-(unsigned)currentDirectoryIndex;
-(void)setCurrentDirectoryIndex:(unsigned)arg1 ;
-(void)startSearchQueryWithOptions:(id)arg1 ;
-(char)animate;
-(NSString *)queryString;
-(void)setQueryString:(NSString *)arg1 ;
-(void)setAnimate:(char)arg1 ;
@end
