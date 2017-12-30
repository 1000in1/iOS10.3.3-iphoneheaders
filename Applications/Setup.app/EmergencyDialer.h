/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 11:25:30 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /Applications/Setup.app/Setup
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SpringBoardUIServices/SBUIEmergencyCallHostViewController.h>

@protocol EmergencyDialerDelegate;
@interface EmergencyDialer : SBUIEmergencyCallHostViewController {

	id<EmergencyDialerDelegate> _delegate;

}

@property (__weak) id<EmergencyDialerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(void)setDelegate:(id<EmergencyDialerDelegate>)arg1 ;
-(id<EmergencyDialerDelegate>)delegate;
-(unsigned)supportedInterfaceOrientations;
-(void)dismiss;
@end

