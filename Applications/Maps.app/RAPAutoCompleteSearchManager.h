/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 11:24:43 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /Applications/Maps.app/Maps
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Maps/RAPInitialViewControllerProvider.h>

@class NSMutableArray, NSString;

@interface RAPAutoCompleteSearchManager : NSObject <RAPInitialViewControllerProvider> {

	NSMutableArray* _lists;
	NSString* _lastQuery;

}

@property (nonatomic,retain) NSMutableArray * lists;              //@synthesize lists=_lists - In the implementation block
@property (nonatomic,copy) NSString * lastQuery;                  //@synthesize lastQuery=_lastQuery - In the implementation block
-(id)rapViewControllerWithReport:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)recordValues:(id)arg1 forKey:(id)arg2 withTicket:(id)arg3 ;
-(NSString *)lastQuery;
-(void)setLastQuery:(NSString *)arg1 ;
-(id)init;
-(void)setLists:(NSMutableArray *)arg1 ;
-(NSMutableArray *)lists;
@end

