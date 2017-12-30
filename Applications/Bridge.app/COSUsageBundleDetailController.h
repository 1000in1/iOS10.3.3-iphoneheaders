/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 11:23:46 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /Applications/Bridge.app/Bridge
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Preferences/PSListController.h>

@class NSSManager;

@interface COSUsageBundleDetailController : PSListController {

	NSSManager* _nssManager;

}

@property (nonatomic,retain) NSSManager * nssManager;              //@synthesize nssManager=_nssManager - In the implementation block
-(id)usageBundle;
-(void)confirmDeletion;
-(void)delete;
-(id)valueForSpecifier:(id)arg1 ;
-(NSSManager *)nssManager;
-(void)setNssManager:(NSSManager *)arg1 ;
-(id)specifiers;
@end

