/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 11:24:57 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /Applications/MobileMail.app/MobileMail
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MobileMail/MFXPCServer.h>
#import <MobileMail/MSDResetListUnsubscribeProtocol.h>

@class NSString;

@interface MFDResetListUnsubscribe : MFXPCServer <MSDResetListUnsubscribeProtocol>

@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)exportedInterface;
-(void)resetListUnsubscribeSuggestionsWithCompletion:(/*^block*/id)arg1 ;
@end

