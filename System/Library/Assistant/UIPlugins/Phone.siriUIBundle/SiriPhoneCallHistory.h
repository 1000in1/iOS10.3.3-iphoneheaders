/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 11:22:52 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/Assistant/UIPlugins/Phone.siriUIBundle/Phone
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Phone/SiriPhoneCall.h>

@class SAPhoneCallHistory;

@interface SiriPhoneCallHistory : SiriPhoneCall {

	SAPhoneCallHistory* _callHistory;

}

@property (nonatomic,retain) SAPhoneCallHistory * callHistory;              //@synthesize callHistory=_callHistory - In the implementation block
-(void)setCallHistory:(SAPhoneCallHistory *)arg1 ;
-(void)_setFormattedCallCount;
-(void)_setStatusImage;
-(id)date;
-(SAPhoneCallHistory *)callHistory;
@end

