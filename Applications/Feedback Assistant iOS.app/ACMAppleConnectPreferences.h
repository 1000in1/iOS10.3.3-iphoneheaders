/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 11:24:01 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /Applications/Feedback Assistant iOS.app/Feedback Assistant iOS
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Feedback Assistant iOS/ACMPreferences.h>
#import <Feedback Assistant iOS/ACMAppleConnectPreferences.h>
@class NSString;


@protocol ACMAppleConnectPreferences <ACMBasePreferences>
@property (assign,nonatomic) NSString * recentUserName; 
@property (assign,nonatomic) int logLevel; 
@property (nonatomic,copy) NSString * defaultUserName; 
@property (assign,nonatomic) char shouldRememberPasswordInKeychain; 
@required
+(id)preferencesWithStore:(id)arg1;
-(int)logLevel;
-(void)setLogLevel:(int)arg1;
-(id)UUID;
-(void)clearCache;
-(id)environmentPreferencesWithRealm:(id)arg1;
-(id)allValuesWithOptions:(int)arg1;
-(void)replaceAllValues:(id)arg1 withOptions:(int)arg2;
-(void)savePreferencesIfNeeded;
-(char)runsOn64BitsDevice;
-(void)setRunsOn64BitsDevice:(char)arg1;
-(void)purgeAllValues;
-(void)purgeAllValuesWithOptions:(int)arg1;
-(NSString *)recentUserName;
-(void)setRecentUserName:(id)arg1;
-(NSString *)defaultUserName;
-(void)setDefaultUserName:(id)arg1;
-(char)shouldRememberPasswordInKeychain;
-(void)setShouldRememberPasswordInKeychain:(char)arg1;
-(id)principalPreferencesWithPrincipal:(id)arg1;
-(void)cleanupOnMemoryWarning;
-(void)setUUID:(id)arg1;

@end


@class NSString, NSMutableDictionary;

@interface ACMAppleConnectPreferences : ACMPreferences <ACMAppleConnectPreferences> {

	NSMutableDictionary* _environmentsContainer;

}

@property (retain,readonly) NSMutableDictionary * environmentsContainer;              //@synthesize environmentsContainer=_environmentsContainer - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (retain) id<ACMPreferencesStore> preferencesStore; 
@property (assign,nonatomic) NSString * recentUserName; 
@property (assign,nonatomic) int logLevel; 
@property (nonatomic,copy) NSString * defaultUserName; 
@property (assign,nonatomic) char shouldRememberPasswordInKeychain; 
+(id)preferencesWithStore:(id)arg1 ;
-(int)logLevel;
-(void)setLogLevel:(int)arg1 ;
-(void)dealloc;
-(id)UUID;
-(void)clearCache;
-(id)environmentPreferencesWithRealm:(id)arg1 ;
-(id)allValuesWithOptions:(int)arg1 ;
-(void)replaceAllValues:(id)arg1 withOptions:(int)arg2 ;
-(void)savePreferencesIfNeeded;
-(id)initWithPreferencesStore:(id)arg1 ;
-(NSMutableDictionary *)environmentsContainer;
-(char)runsOn64BitsDevice;
-(void)setRunsOn64BitsDevice:(char)arg1 ;
-(void)purgeAllValues;
-(void)purgeAllValuesWithOptions:(int)arg1 ;
-(NSString *)recentUserName;
-(void)setRecentUserName:(NSString *)arg1 ;
-(NSString *)defaultUserName;
-(void)setDefaultUserName:(NSString *)arg1 ;
-(char)shouldRememberPasswordInKeychain;
-(void)setShouldRememberPasswordInKeychain:(char)arg1 ;
-(id)principalPreferencesWithPrincipal:(id)arg1 ;
-(id)createEnvironmentWithRealm:(id)arg1 ;
-(void)cleanupOnMemoryWarning;
-(void)setUUID:(id)arg1 ;
@end

