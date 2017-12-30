/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 11:24:28 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /Applications/InCallService.app/InCallService
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <InCallService/InCallService-Structs.h>
@interface PHAlert : NSObject {

	/*^block*/id _completion;
	CFUserNotificationRef _userNotification;

}

@property (assign,nonatomic) CFUserNotificationRef userNotification;              //@synthesize userNotification=_userNotification - In the implementation block
@property (nonatomic,copy) id completion;                                         //@synthesize completion=_completion - In the implementation block
-(id)otherButtonTitle;
-(void)defaultResponse;
-(void)alternateResponse;
-(void)otherResponse;
-(void)showOnViewController:(id)arg1 ;
-(void)show;
-(void)dealloc;
-(id)title;
-(id)completion;
-(void)setCompletion:(id)arg1 ;
-(id)message;
-(id)alternateButtonTitle;
-(CFUserNotificationRef)userNotification;
-(void)setUserNotification:(CFUserNotificationRef)arg1 ;
-(id)defaultButtonTitle;
@end

