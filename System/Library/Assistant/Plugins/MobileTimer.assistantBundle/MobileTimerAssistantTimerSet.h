/*
* This header is generated by classdump-dyld 1.0
* on Friday, December 29, 2017 at 6:36:19 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/Assistant/Plugins/MobileTimer.assistantBundle/MobileTimer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SAObjects/SATimerSet.h>
#import <Accessibility/AFServiceCommand.h>

@class NSString;

@interface MobileTimerAssistantTimerSet : SATimerSet <AFServiceCommand>

@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)_mainQueue_performWithCompletion:(/*^block*/id)arg1 ;
-(id)validateCommandArguments;
-(void)performWithCompletion:(/*^block*/id)arg1 ;
@end
