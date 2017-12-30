/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 11:23:54 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /Applications/Diagnostics.app/Diagnostics
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreFoundation/NSMutableDictionary.h>

@class NSMutableDictionary;

@interface DASessionSettings : NSMutableDictionary {

	NSMutableDictionary* _proxy;
	NSMutableDictionary* _observers;

}

@property (nonatomic,retain) NSMutableDictionary * proxy;                  //@synthesize proxy=_proxy - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * observers;              //@synthesize observers=_observers - In the implementation block
+(id)stringForSessionSetting:(int)arg1 ;
+(int)sessionSettingFromString:(id)arg1 ;
-(void)observeValueForSetting:(int)arg1 usingBlock:(/*^block*/id)arg2 ;
-(unsigned)count;
-(id)objectForKey:(id)arg1 ;
-(void)removeObjectForKey:(id)arg1 ;
-(void)setObject:(id)arg1 forKey:(id)arg2 ;
-(id)initWithCapacity:(unsigned)arg1 ;
-(id)initWithObjects:(const id*)arg1 forKeys:(const id*)arg2 count:(unsigned)arg3 ;
-(id)keyEnumerator;
-(NSMutableDictionary *)proxy;
-(void)setObservers:(NSMutableDictionary *)arg1 ;
-(NSMutableDictionary *)observers;
-(void)setProxy:(NSMutableDictionary *)arg1 ;
@end

