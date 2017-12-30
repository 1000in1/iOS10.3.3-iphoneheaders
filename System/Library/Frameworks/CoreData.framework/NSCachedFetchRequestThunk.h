/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 11:20:49 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/Frameworks/CoreData.framework/CoreData
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSSQLiteStatement;

@interface NSCachedFetchRequestThunk : NSObject {

	NSSQLiteStatement* _limitedStatement;
	NSSQLiteStatement* _unlimitedStatement;
	id _connection;

}

@property (nonatomic,retain) NSSQLiteStatement * limitedStatement;                //@synthesize limitedStatement=_limitedStatement - In the implementation block
@property (nonatomic,retain) NSSQLiteStatement * unlimitedStatement;              //@synthesize unlimitedStatement=_unlimitedStatement - In the implementation block
-(id)initForConnection:(id)arg1 ;
-(NSSQLiteStatement *)limitedStatement;
-(void)setLimitedStatement:(NSSQLiteStatement *)arg1 ;
-(NSSQLiteStatement *)unlimitedStatement;
-(void)setUnlimitedStatement:(NSSQLiteStatement *)arg1 ;
-(void)dealloc;
-(void)clearCaches;
@end

