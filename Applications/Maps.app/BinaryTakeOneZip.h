/*
* This header is generated by classdump-dyld 1.0
* on Friday, December 29, 2017 at 6:38:36 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /Applications/Maps.app/Maps
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol BinaryTakeOneZipDelegate;
@interface BinaryTakeOneZip : NSObject {

	char _didReceiveRightSignal;
	char _didReceiveLeftSignal;
	char _didReceiveBothSignals;
	id<BinaryTakeOneZipDelegate> _delegate;

}
-(void)receiveRightSignal;
-(void)receiveLeftSignal;
-(void)_recieveRightSignal:(char)arg1 leftSignal:(char)arg2 ;
-(id)initWithDelegate:(id)arg1 ;
@end
