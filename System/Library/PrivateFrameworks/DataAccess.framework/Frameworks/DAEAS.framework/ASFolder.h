/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 31, 2017 at 12:56:40 AM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/PrivateFrameworks/DataAccess.framework/Frameworks/DAEAS.framework/DAEAS
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <DAEAS/ASItem.h>
#import <libobjc.A.dylib/NSCoding.h>

@class NSString;

@interface ASFolder : ASItem <NSCoding> {

	char _renameOnCollision;
	NSString* _serverID;
	NSString* _parentID;
	NSString* _displayName;
	int _folderType;
	int _localID;
	unsigned _changeType;
	int _dataclass;

}

@property (nonatomic,copy) NSString * parentID;                   //@synthesize parentID=_parentID - In the implementation block
@property (nonatomic,copy) NSString * displayName;                //@synthesize displayName=_displayName - In the implementation block
@property (assign,nonatomic) int folderType;                      //@synthesize folderType=_folderType - In the implementation block
@property (assign,nonatomic) int dataclass;                       //@synthesize dataclass=_dataclass - In the implementation block
@property (assign,nonatomic) int localID;                         //@synthesize localID=_localID - In the implementation block
@property (nonatomic,copy) NSString * serverID;                   //@synthesize serverID=_serverID - In the implementation block
@property (assign,nonatomic) unsigned changeType;                 //@synthesize changeType=_changeType - In the implementation block
@property (assign,nonatomic) char renameOnCollision;              //@synthesize renameOnCollision=_renameOnCollision - In the implementation block
+(char)acceptsTopLevelLeaves;
+(char)parsingLeafNode;
+(char)parsingWithSubItems;
+(char)frontingBasicTypes;
+(char)notifyOfUnknownTokens;
+(id)asParseRules;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(char)isEqual:(id)arg1 ;
-(unsigned)hash;
-(id)description;
-(NSString *)displayName;
-(void)setDisplayName:(NSString *)arg1 ;
-(void)setChangeType:(unsigned)arg1 ;
-(void)setRenameOnCollision:(char)arg1 ;
-(void)setDataclass:(int)arg1 ;
-(void)parseASParseContext:(id)arg1 root:(id)arg2 parent:(id)arg3 callbackDict:(id)arg4 streamCallbackDict:(id)arg5 account:(id)arg6 ;
-(int)dataclass;
-(void)setLocalID:(int)arg1 ;
-(int)localID;
-(id)_folderTypeString;
-(void)setFolderTypeNumber:(id)arg1 ;
-(char)mayContainDataclasses:(int)arg1 ;
-(id)initWithFolderType:(int)arg1 serverID:(id)arg2 parentID:(id)arg3 displayName:(id)arg4 localID:(int)arg5 ;
-(char)renameOnCollision;
-(unsigned)changeType;
-(int)folderType;
-(void)setFolderType:(int)arg1 ;
-(NSString *)serverID;
-(void)setServerID:(NSString *)arg1 ;
-(NSString *)parentID;
-(void)setParentID:(NSString *)arg1 ;
@end

