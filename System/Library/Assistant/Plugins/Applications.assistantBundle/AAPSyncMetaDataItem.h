/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 11:22:44 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/Assistant/Plugins/Applications.assistantBundle/Applications
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class NSString, AAPSyncAnchor;


@protocol AAPSyncMetaDataItem <NSCopying,NSObject>
@property (nonatomic,copy,readonly) NSString * appId; 
@property (nonatomic,copy,readonly) AAPSyncAnchor * anchor; 
@required
-(id)scrapeAppInfo;
-(AAPSyncAnchor *)anchor;
-(NSString *)appId;

@end

