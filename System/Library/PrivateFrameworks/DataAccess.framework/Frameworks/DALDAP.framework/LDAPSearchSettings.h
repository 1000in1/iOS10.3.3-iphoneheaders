/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 31, 2017 at 12:56:40 AM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/PrivateFrameworks/DataAccess.framework/Frameworks/DALDAP.framework/DALDAP
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString;

@interface LDAPSearchSettings : NSObject {

	NSString* _searchDescription;
	NSString* _searchBase;
	unsigned _scope;

}

@property (nonatomic,retain) NSString * searchDescription;              //@synthesize searchDescription=_searchDescription - In the implementation block
@property (nonatomic,retain) NSString * searchBase;                     //@synthesize searchBase=_searchBase - In the implementation block
@property (assign,nonatomic) unsigned scope;                            //@synthesize scope=_scope - In the implementation block
-(char)isEqual:(id)arg1 ;
-(unsigned)hash;
-(id)description;
-(void)setScope:(unsigned)arg1 ;
-(unsigned)scope;
-(void)setSearchBase:(NSString *)arg1 ;
-(NSString *)searchBase;
-(id)initWithSettingsDict:(id)arg1 ;
-(char)hasSameScopeAndBaseAsOther:(id)arg1 ;
-(NSString *)searchDescription;
-(void)setSearchDescription:(NSString *)arg1 ;
-(id)settingsDict;
@end

