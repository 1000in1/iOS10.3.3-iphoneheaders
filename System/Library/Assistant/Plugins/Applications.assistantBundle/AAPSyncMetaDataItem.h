/*
* This header is generated by classdump-dyld 1.0
* on Friday, December 29, 2017 at 6:36:17 PM Japan Standard Time
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
