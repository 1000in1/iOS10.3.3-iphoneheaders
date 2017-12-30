/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 11:25:07 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /Applications/MobilePhone.app/MobilePhone
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class NSString, NSArray;


@protocol PHVoicemailListViewControllerConcrete <PHVoicemailCellConfigurationDelegate>
@property (readonly) NSString * navigationBarText; 
@property (readonly) NSString * folderName; 
@property (readonly) id voicemailPredicate; 
@property (readonly) char popOffIfEmpty; 
@property (readonly) NSString * tableViewDestructiveActionText; 
@property (readonly) NSString * navigationBarTextWithCountFormat; 
@property (readonly) NSArray * childListControllers; 
@optional
-(void)willShowVoicemails:(id)arg1;
-(NSArray *)childListControllers;
-(NSString *)navigationBarTextWithCountFormat;

@required
-(id)voicemailPredicate;
-(void)performTableViewDestructiveActionForVoicemail:(id)arg1;
-(NSString *)navigationBarText;
-(char)popOffIfEmpty;
-(NSString *)tableViewDestructiveActionText;
-(NSString *)folderName;

@end

