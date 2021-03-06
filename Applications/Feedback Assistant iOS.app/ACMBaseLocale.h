/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 11:24:02 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /Applications/Feedback Assistant iOS.app/Feedback Assistant iOS
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSDictionary;

@interface ACMBaseLocale : NSObject {

	ACMBaseLocale* _nextLocale;
	NSDictionary* _localeStrings;

}

@property (nonatomic,retain) ACMBaseLocale * nextLocale;                //@synthesize nextLocale=_nextLocale - In the implementation block
@property (nonatomic,retain) NSDictionary * localeStrings;              //@synthesize localeStrings=_localeStrings - In the implementation block
+(id)sharedInstance;
+(void)initialize;
+(id)localizedString:(id)arg1 ;
+(id)createLocaleForIdentifier:(id)arg1 ;
+(void)setupUsingPreferredLanguages;
+(void)setupRecoveringPreferredLanguages;
-(void)dealloc;
-(id)objectForKey:(id)arg1 ;
-(void)setNextLocale:(ACMBaseLocale *)arg1 ;
-(ACMBaseLocale *)nextLocale;
-(NSDictionary *)localeStrings;
-(void)setLocaleStrings:(NSDictionary *)arg1 ;
@end

