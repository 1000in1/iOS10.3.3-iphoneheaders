/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 11:21:39 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/Frameworks/AddressBook.framework/AddressBook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface ABTCC : NSObject {

	char _calledExternalChangeCallbacks;
	int _simulateType;
	char _simulateAccessPrompt;
	char _simulateAccessPromptGranted;
	unsigned _simulateAccessPromptDelay;

}
+(id)sharedInstance;
-(id)init;
-(void)dealloc;
-(void)callExternalChangeCallbacks:(char)arg1 ;
-(id)_simulateQueue;
-(int)accessPreflight;
-(unsigned char)isAccessRestricted;
-(void)accessRequestWithCompletion:(/*^block*/id)arg1 ;
-(void)simulate:(int)arg1 ;
-(void)simulateIfAccessPromptDisplayedThenUserGrantedAccess:(char)arg1 withDelay:(unsigned)arg2 ;
@end

