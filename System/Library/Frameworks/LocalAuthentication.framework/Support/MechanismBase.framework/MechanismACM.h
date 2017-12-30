/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 7:25:41 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/Frameworks/LocalAuthentication.framework/Support/MechanismBase.framework/MechanismBase
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MechanismBase/MechanismBase-Structs.h>
#import <MechanismBase/MechanismBase.h>

@interface MechanismACM : MechanismBase {

	ACMHandleRef _acmContext;
	unsigned _acmFlags;

}

@property (nonatomic,readonly) ACMHandleRef acmContext;              //@synthesize acmContext=_acmContext - In the implementation block
@property (nonatomic,readonly) unsigned acmFlags;                    //@synthesize acmFlags=_acmFlags - In the implementation block
-(ACMHandleRef)acmContext;
-(id)initWithEventIdentifier:(int)arg1 remoteViewController:(int)arg2 acmContextRecord:(id)arg3 ;
-(unsigned)acmFlags;
@end

