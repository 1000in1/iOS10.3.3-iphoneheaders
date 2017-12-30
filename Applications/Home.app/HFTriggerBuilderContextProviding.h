/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 11:24:25 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /Applications/Home.app/Home
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class NSString, NSSet;


@protocol HFTriggerBuilderContextProviding <NSObject>
@property (nonatomic,readonly) char showTriggerSummary; 
@property (nonatomic,readonly) char showTriggerEnableSwitch; 
@property (nonatomic,readonly) char showActionSetsInstructions; 
@property (nonatomic,readonly) char showConditionTriggers; 
@property (nonatomic,copy,readonly) NSString * serviceActionsInstructionDescription; 
@property (nonatomic,copy,readonly) NSString * actionEditorInstructionsDescription; 
@property (nonatomic,copy,readonly) NSString * triggerContextAwareTitle; 
@property (nonatomic,copy,readonly) NSString * deleteInstructionDescription; 
@property (nonatomic,copy,readonly) NSString * deleteInstructionConfirmation; 
@property (nonatomic,copy,readonly) NSSet * unsupportedTriggers; 
@required
-(char)showTriggerSummary;
-(char)showTriggerEnableSwitch;
-(char)showActionSetsInstructions;
-(char)showConditionTriggers;
-(NSString *)serviceActionsInstructionDescription;
-(NSString *)deleteInstructionDescription;
-(NSString *)actionEditorInstructionsDescription;
-(NSString *)deleteInstructionConfirmation;
-(NSString *)triggerContextAwareTitle;
-(NSSet *)unsupportedTriggers;

@end

