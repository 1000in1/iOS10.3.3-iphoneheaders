/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 11:24:42 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /Applications/Maps.app/Maps
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Maps/PersonalizedItemSource.h>
#import <Maps/ParkedCarManagerObserver.h>

@class ParkedCarPersonalizedItem, NSString;

@interface ParkedCarItemSource : PersonalizedItemSource <ParkedCarManagerObserver> {

	ParkedCarPersonalizedItem* _item;

}

@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)parkedCarManager:(id)arg1 didRemoveParkedCar:(id)arg2 ;
-(void)parkedCarManager:(id)arg1 didAddParkedCar:(id)arg2 ;
-(void)parkedCarManager:(id)arg1 didUpdateParkedCar:(id)arg2 ;
-(id)init;
-(void)dealloc;
-(id)allItems;
@end

