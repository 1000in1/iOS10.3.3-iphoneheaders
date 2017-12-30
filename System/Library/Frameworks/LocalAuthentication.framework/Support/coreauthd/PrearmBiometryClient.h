/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 7:25:42 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/Frameworks/LocalAuthentication.framework/Support/coreauthd
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TouchID_MechTouchId/LABiometricClient.h>

@class TouchIdPrearmContext;

@interface PrearmBiometryClient : NSObject <LABiometricClient> {

	TouchIdPrearmContext* _prearmContext;

}

@property (assign,nonatomic,__weak) TouchIdPrearmContext * prearmContext;              //@synthesize prearmContext=_prearmContext - In the implementation block
-(id)initWithPrearmContext:(id)arg1 ;
-(TouchIdPrearmContext *)prearmContext;
-(void)setPrearmContext:(TouchIdPrearmContext *)arg1 ;
-(void)biometryLost;
-(void)matchResult:(id)arg1 withDetails:(id)arg2 lockoutError:(id)arg3 ;
-(void)touchIdButtonPressed:(char)arg1 ;
-(void)statusMessage:(int)arg1 ;
@end

