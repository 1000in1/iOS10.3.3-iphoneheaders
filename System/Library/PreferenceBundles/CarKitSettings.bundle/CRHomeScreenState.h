/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 4:29:06 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/PreferenceBundles/CarKitSettings.bundle/CarKitSettings
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class NSArray;


@protocol CRHomeScreenState <NSObject>
@property (nonatomic,copy,readonly) NSArray * iconState; 
@property (nonatomic,copy,readonly) NSArray * hiddenIcons; 
@property (nonatomic,readonly) unsigned rows; 
@property (nonatomic,readonly) unsigned columns; 
@required
-(NSArray *)hiddenIcons;
-(NSArray *)iconState;
-(unsigned)rows;
-(unsigned)columns;

@end
