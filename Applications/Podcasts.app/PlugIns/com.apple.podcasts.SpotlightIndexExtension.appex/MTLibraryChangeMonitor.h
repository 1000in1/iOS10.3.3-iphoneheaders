/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 11:25:21 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /Applications/Podcasts.app/PlugIns/com.apple.podcasts.SpotlightIndexExtension.appex/com.apple.podcasts.SpotlightIndexExtension
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <com.apple.podcasts.SpotlightIndexExtension/com.apple.podcasts.SpotlightIndexExtension-Structs.h>
@class NSHashTable;

@interface MTLibraryChangeMonitor : NSObject {

	NSHashTable* _notifiers;

}

@property (nonatomic,retain) NSHashTable * notifiers;              //@synthesize notifiers=_notifiers - In the implementation block
+(id)sharedInstance;
+(id)allocWithZone:(NSZone*)arg1 ;
-(void)addChangeNotifier:(id)arg1 ;
-(void)removeChangeNotifier:(id)arg1 ;
-(void)notify:(id)arg1 ;
-(id)init;
-(id)copy;
-(NSHashTable *)notifiers;
-(void)setNotifiers:(NSHashTable *)arg1 ;
@end

