/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 11:22:41 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/Accounts/DataclassOwners/CloudDocsDataclassOwnerPlugin.bundle/CloudDocsDataclassOwnerPlugin
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol ACDDataclassOwnerProtocol <NSObject>
@optional
-(id)actionsForAddingAccount:(id)arg1 forDataclass:(id)arg2;

@required
+(id)dataclasses;
-(id)actionsForEnablingDataclassOnAccount:(id)arg1 forDataclass:(id)arg2;
-(id)actionsForDisablingDataclassOnAccount:(id)arg1 forDataclass:(id)arg2;
-(id)actionsForDeletingAccount:(id)arg1 forDataclass:(id)arg2;
-(char)performAction:(id)arg1 forAccount:(id)arg2 withChildren:(id)arg3 forDataclass:(id)arg4;

@end

