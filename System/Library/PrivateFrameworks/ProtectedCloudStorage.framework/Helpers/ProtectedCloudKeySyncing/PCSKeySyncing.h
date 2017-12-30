/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 31, 2017 at 12:57:30 AM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/PrivateFrameworks/ProtectedCloudStorage.framework/Helpers/ProtectedCloudKeySyncing
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSUserDefaults, AccountsModel;

@interface PCSKeySyncing : NSObject {

	NSUserDefaults* _settings;
	AccountsModel* _accounts;

}

@property (retain) NSUserDefaults * settings;              //@synthesize settings=_settings - In the implementation block
@property (retain) AccountsModel * accounts;               //@synthesize accounts=_accounts - In the implementation block
+(id)defaultSyncingManager;
-(id)getClientWithIdentifier:(id)arg1 ;
-(BOOL)saveClient:(id)arg1 ;
-(void)updateClient:(id)arg1 ;
-(id)copyAllPCSKeys:(id)arg1 error:(id*)arg2 ;
-(id)copySHA256Hash:(id)arg1 ;
-(id)init;
-(NSUserDefaults *)settings;
-(void)setSettings:(NSUserDefaults *)arg1 ;
-(id)allClients;
-(id)dsid;
-(void)setAccounts:(AccountsModel *)arg1 ;
-(AccountsModel *)accounts;
@end

