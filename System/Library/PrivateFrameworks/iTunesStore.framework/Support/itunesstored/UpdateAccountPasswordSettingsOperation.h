/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 31, 2017 at 12:58:04 AM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/PrivateFrameworks/iTunesStore.framework/Support/itunesstored
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <iTunesStore/ISOperation.h>

@class SSMutableURLRequestProperties;

@interface UpdateAccountPasswordSettingsOperation : ISOperation {

	int _freeDownloadsPasswordSetting;
	int _paidPurchasesPasswordSetting;
	SSMutableURLRequestProperties* _requestProperties;

}

@property (readonly) int freeDownloadsPasswordSetting; 
@property (readonly) int paidPurchasesPasswordSetting; 
+(int)_accountPasswordSettingValueForServerValue:(id)arg1 ;
-(id)initWithFreeDownloadsPasswordSetting:(int)arg1 paidPurchasesPasswordSetting:(int)arg2 ;
-(id)_newAccountPasswordSettingsDictionary;
-(id)initWithFreeDownloadsPasswordSetting:(int)arg1 paidPurchasesPasswordSetting:(int)arg2 requestProperties:(id)arg3 ;
-(id)_serverValueForAccountPasswordSettingValue:(int)arg1 defaultValue:(id)arg2 ;
-(int)freeDownloadsPasswordSetting;
-(int)paidPurchasesPasswordSetting;
-(void)run;
-(id)_requestDictionary;
@end

