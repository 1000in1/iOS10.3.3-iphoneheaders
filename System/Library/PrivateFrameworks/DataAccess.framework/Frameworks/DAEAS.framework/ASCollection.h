/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 31, 2017 at 12:56:39 AM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/PrivateFrameworks/DataAccess.framework/Frameworks/DAEAS.framework/DAEAS
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <DAEAS/ASItem.h>

@class NSString, NSNumber, NSArray, ASFolderItemsSyncResponse;

@interface ASCollection : ASItem {

	int _dataclass;
	NSString* _syncKey;
	NSString* _collectionId;
	NSNumber* _status;
	NSNumber* _moreAvailable;
	NSArray* _changedItems;
	NSArray* _responseItems;
	ASFolderItemsSyncResponse* _parentResponse;
	int _sniffableType;
	char _checkedShouldSniffInvites;

}
+(char)acceptsTopLevelLeaves;
+(char)parsingLeafNode;
+(char)parsingWithSubItems;
+(char)frontingBasicTypes;
+(char)notifyOfUnknownTokens;
+(id)asParseRules;
-(id)init;
-(id)description;
-(id)status;
-(void)setStatus:(id)arg1 ;
-(id)syncKey;
-(void)parseASParseContext:(id)arg1 root:(id)arg2 parent:(id)arg3 callbackDict:(id)arg4 streamCallbackDict:(id)arg5 account:(id)arg6 ;
-(id)responseItems;
-(void)setResponseItems:(id)arg1 ;
-(int)dataclass;
-(void)setSyncKey:(id)arg1 ;
-(void)setDataclassString:(id)arg1 ;
-(void)setCollectionId:(id)arg1 ;
-(void)setChangedItems:(id)arg1 ;
-(void)setParentResponse:(id)arg1 ;
-(id)changedItems;
-(int)sniffableTypeForAccount:(id)arg1 ;
-(id)collectionId;
-(void)setMoreAvailable:(id)arg1 ;
-(id)moreAvailable;
@end

