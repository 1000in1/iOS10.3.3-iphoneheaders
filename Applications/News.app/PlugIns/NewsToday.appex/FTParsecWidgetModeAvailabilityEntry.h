/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 11:25:19 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /Applications/News.app/PlugIns/NewsToday.appex/NewsToday
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <NewsToday/FTWidgetModeAvailabilityEntry.h>

@class NSString;

@interface FTParsecWidgetModeAvailabilityEntry : NSObject <FTWidgetModeAvailabilityEntry> {

	/*^block*/id _availabilityChangedNotificationBlock;

}

@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) Class widgetModeContextClass; 
@property (getter=isAvailable,nonatomic,readonly) char available; 
@property (nonatomic,copy) id availabilityChangedNotificationBlock;              //@synthesize availabilityChangedNotificationBlock=_availabilityChangedNotificationBlock - In the implementation block
-(Class)widgetModeContextClass;
-(id)availabilityChangedNotificationBlock;
-(void)setAvailabilityChangedNotificationBlock:(id)arg1 ;
-(id)init;
-(char)isAvailable;
@end

