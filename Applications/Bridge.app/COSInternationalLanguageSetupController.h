/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 11:23:46 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /Applications/Bridge.app/Bridge
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Preferences/PSSetupController.h>

@class NSString;

@interface COSInternationalLanguageSetupController : PSSetupController {

	NSString* _languageToSet;

}

@property (nonatomic,copy) NSString * languageToSet;              //@synthesize languageToSet=_languageToSet - In the implementation block
-(void)setLanguageToSet:(NSString *)arg1 ;
-(NSString *)languageToSet;
-(char)useOfficialLanguages;
-(int)preferredStatusBarStyle;
-(void)commit;
-(void)setupController;
-(void)setLanguage:(id)arg1 specifier:(id)arg2 ;
@end

