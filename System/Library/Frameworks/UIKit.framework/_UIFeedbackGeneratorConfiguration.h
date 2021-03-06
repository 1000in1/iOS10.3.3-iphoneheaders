/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 11:21:15 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIKit-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, NSArray, NSSet;

@interface _UIFeedbackGeneratorConfiguration : NSObject <NSCopying> {

	char _settingsEnabled;
	char _prepared;
	char _enabled;
	/*^block*/id _preparationBlock;
	Class _clientClass;
	NSString* _usage;
	int _activationStyle;
	int _outputMode;
	NSString* __stats_key;

}

@property (nonatomic,copy) id preparationBlock;                            //@synthesize preparationBlock=_preparationBlock - In the implementation block
@property (nonatomic,copy) Class clientClass;                              //@synthesize clientClass=_clientClass - In the implementation block
@property (nonatomic,copy) NSString * usage;                               //@synthesize usage=_usage - In the implementation block
@property (nonatomic,readonly) int requiredSupportLevel; 
@property (assign,nonatomic) int activationStyle;                          //@synthesize activationStyle=_activationStyle - In the implementation block
@property (assign,nonatomic) int outputMode;                               //@synthesize outputMode=_outputMode - In the implementation block
@property (nonatomic,readonly) char defaultEnabled; 
@property (assign,nonatomic) char settingsEnabled;                         //@synthesize settingsEnabled=_settingsEnabled - In the implementation block
@property (assign,getter=isPrepared,nonatomic) char prepared;              //@synthesize prepared=_prepared - In the implementation block
@property (assign,getter=isEnabled,nonatomic) char enabled;                //@synthesize enabled=_enabled - In the implementation block
@property (nonatomic,readonly) NSArray * feedbackKeyPaths; 
@property (nonatomic,readonly) NSSet * usedFeedbacks; 
@property (nonatomic,readonly) NSString * descriptionKey; 
@property (nonatomic,copy) NSString * _stats_key;                          //@synthesize _stats_key=__stats_key - In the implementation block
+(id)defaultConfiguration;
+(id)_configurationWithKey:(id)arg1 preparationBlock:(/*^block*/id)arg2 ;
+(id)_disabledConfiguration;
-(id)init;
-(void)dealloc;
-(char)isEqual:(id)arg1 ;
-(id)description;
-(void)setEnabled:(char)arg1 ;
-(char)isEnabled;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)tweakedConfigurationForClass:(Class)arg1 usage:(id)arg2 ;
-(NSString *)_stats_key;
-(NSArray *)feedbackKeyPaths;
-(char)_prepareRegardlessOfPreferences:(char)arg1 ;
-(int)requiredSupportLevel;
-(char)_hasMutableFeedbackKeyPaths;
-(char)defaultEnabled;
-(void)set_stats_key:(NSString *)arg1 ;
-(char)isPrepared;
-(int)activationStyle;
-(int)outputMode;
-(char)settingsEnabled;
-(char)_shouldEnable;
-(void)setPrepared:(char)arg1 ;
-(void)setSettingsEnabled:(char)arg1 ;
-(void)_preferencesUpdated:(id)arg1 ;
-(void)_updateEnabled;
-(void)setActivationStyle:(int)arg1 ;
-(void)setPreparationBlock:(id)arg1 ;
-(NSString *)descriptionKey;
-(id)tweakedConfigurationForCaller:(id)arg1 usage:(id)arg2 ;
-(NSSet *)usedFeedbacks;
-(void)setOutputMode:(int)arg1 ;
-(id)preparationBlock;
-(Class)clientClass;
-(void)setClientClass:(Class)arg1 ;
-(NSString *)usage;
-(void)setUsage:(NSString *)arg1 ;
@end

