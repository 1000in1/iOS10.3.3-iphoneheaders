/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 11:21:27 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol _UIKeyboardArbitrationClient
@required
-(void)queue_keyboardChanged:(id)arg1 onComplete:(/*^block*/id)arg2;
-(void)queue_keyboardChangedWithCompletion:(/*^block*/id)arg1;
-(void)queue_keyboardTransition:(id)arg1 event:(unsigned)arg2 withInfo:(id)arg3 onComplete:(/*^block*/id)arg4;
-(void)queue_keyboardSuppressed:(char)arg1 withCompletion:(/*^block*/id)arg2;
-(void)queue_applicationLostFocusWithCompletion:(/*^block*/id)arg1;
-(void)queue_getDebugInfoWithCompletion:(/*^block*/id)arg1;

@end

