/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 11:24:14 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /Applications/FindMyFriends.app/FindMyFriends
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <FindMyFriends/FindMyFriends-Structs.h>
@interface FMFAppMapUtilities : NSObject
+(void)getETAForFriend:(id)arg1 withHandler:(/*^block*/id)arg2 ;
+(unsigned)storedMapType;
+(int)indexForMapType:(unsigned)arg1 ;
+(unsigned)transformedMapTypeForType:(unsigned)arg1 ;
+(void)updateStoredMapSegmentIndex:(int)arg1 ;
+(SCD_Struct_Ma2)mapRectForCoordinateRegion:(SCD_Struct_Ma2)arg1 ;
+(SCD_Struct_Ma2)regionForAnnotations:(id)arg1 ;
+(id)mapAttribution;
@end

