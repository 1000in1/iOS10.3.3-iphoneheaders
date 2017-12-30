/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 11:24:14 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /Applications/FindMyFriends.app/FindMyFriends
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <FindMyFriends/FMFBaseCmd.h>

@class NSString;

@interface FMFEventDeleteCommand : FMFBaseCmd {

	NSString* _eventId;

}

@property (nonatomic,copy) NSString * eventId;              //@synthesize eventId=_eventId - In the implementation block
-(id)willSucceedNotification;
-(id)willFailNotification;
-(id)didSucceedNotification;
-(id)didFailNotification;
-(id)pathSuffix;
-(id)initWithEventId:(id)arg1 ;
-(void)setEventId:(NSString *)arg1 ;
-(NSString *)eventId;
-(id)jsonBodyDictionary;
@end

