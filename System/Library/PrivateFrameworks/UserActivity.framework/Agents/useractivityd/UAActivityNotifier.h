/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 31, 2017 at 12:57:52 AM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/PrivateFrameworks/UserActivity.framework/Agents/useractivityd
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <useractivityd/UACornerActionManagerHandler.h>
#import <useractivityd/UAActivityNotifierProtocol.h>

@class NSSet;

@interface UAActivityNotifier : UACornerActionManagerHandler <UAActivityNotifierProtocol>

@property (copy) NSSet * items; 
@property (copy) NSSet * notifiedItems; 
-(id)initWithManager:(id)arg1 name:(id)arg2 ;
-(NSSet *)notifiedItems;
-(NSSet *)items;
@end

