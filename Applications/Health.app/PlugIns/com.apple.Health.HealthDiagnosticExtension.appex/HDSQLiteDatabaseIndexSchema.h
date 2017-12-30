/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 11:24:23 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /Applications/Health.app/PlugIns/com.apple.Health.HealthDiagnosticExtension.appex/com.apple.Health.HealthDiagnosticExtension
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString, NSArray;

@interface HDSQLiteDatabaseIndexSchema : NSObject {

	char _isUnique;
	NSString* _name;
	NSArray* _columns;

}

@property (nonatomic,copy) NSString * name;                  //@synthesize name=_name - In the implementation block
@property (nonatomic,retain) NSArray * columns;              //@synthesize columns=_columns - In the implementation block
@property (assign,nonatomic) char isUnique;                  //@synthesize isUnique=_isUnique - In the implementation block
-(char)isEqual:(id)arg1 ;
-(unsigned)hash;
-(id)description;
-(void)setName:(NSString *)arg1 ;
-(NSString *)name;
-(NSArray *)columns;
-(void)setColumns:(NSArray *)arg1 ;
-(void)setIsUnique:(char)arg1 ;
-(char)isUnique;
@end

