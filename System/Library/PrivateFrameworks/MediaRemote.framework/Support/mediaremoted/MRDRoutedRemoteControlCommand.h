/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 31, 2017 at 12:57:10 AM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/PrivateFrameworks/MediaRemote.framework/Support/mediaremoted
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <mediaremoted/MRDRemoteControlCommand.h>

@class NSString;

@interface MRDRoutedRemoteControlCommand : MRDRemoteControlCommand {

	NSString* _routedAppDisplayID;

}

@property (nonatomic,readonly) NSString * routedAppDisplayID;              //@synthesize routedAppDisplayID=_routedAppDisplayID - In the implementation block
-(id)initWithCommand:(id)arg1 routedApp:(id)arg2 ;
-(NSString *)routedAppDisplayID;
-(void)dealloc;
-(id)description;
@end

