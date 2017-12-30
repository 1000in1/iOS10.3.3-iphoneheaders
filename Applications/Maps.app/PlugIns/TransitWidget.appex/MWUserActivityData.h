/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 11:24:47 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /Applications/Maps.app/PlugIns/TransitWidget.appex/TransitWidget
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MapsWidget/MWOpenable.h>

@class NSString, NSDictionary;

@interface MWUserActivityData : NSObject <MWOpenable> {

	NSString* _activityType;
	NSDictionary* _userInfo;

}

@property (nonatomic,copy,readonly) NSString * activityType;              //@synthesize activityType=_activityType - In the implementation block
@property (nonatomic,copy,readonly) NSDictionary * userInfo;              //@synthesize userInfo=_userInfo - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)openInContext:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(id)initWithActivityType:(id)arg1 userInfo:(id)arg2 ;
-(char)isEqualToUserActivityData:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(char)isEqual:(id)arg1 ;
-(NSDictionary *)userInfo;
-(NSString *)activityType;
@end

