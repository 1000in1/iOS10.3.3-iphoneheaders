/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 31, 2017 at 12:57:12 AM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/PrivateFrameworks/MobileInstallation.framework/XPCServices/com.apple.MobileInstallationHelperService.xpc/com.apple.MobileInstallationHelperService
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface MIHThreadFunctionParams : NSObject {

	/*^block*/id _block;
	unsigned _uid;

}

@property (nonatomic,copy) id block;                    //@synthesize block=_block - In the implementation block
@property (assign,nonatomic) unsigned uid;              //@synthesize uid=_uid - In the implementation block
-(unsigned)uid;
-(void)setUid:(unsigned)arg1 ;
-(void)setBlock:(id)arg1 ;
-(id)block;
@end

