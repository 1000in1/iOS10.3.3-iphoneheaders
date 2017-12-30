/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 6:40:20 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/TextInput/kbd
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MessagesDataKeyboardPlugin/TILinguisticDataSourceMessage.h>

@class NSDate, NSString, NSDictionary;

@interface TIMailOutgoingMessage : NSObject <TILinguisticDataSourceMessage> {

	NSDictionary* _searchResult;

}

@property (nonatomic,retain) NSDictionary * searchResult;              //@synthesize searchResult=_searchResult - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,copy,readonly) NSDate * dateSent; 
@property (nonatomic,copy,readonly) NSString * recipient; 
@property (nonatomic,copy,readonly) NSString * body; 
@property (nonatomic,readonly) char fromMe; 
-(void)dealloc;
-(NSString *)body;
-(NSDictionary *)searchResult;
-(void)setSearchResult:(NSDictionary *)arg1 ;
-(NSDate *)dateSent;
-(NSString *)recipient;
@end
