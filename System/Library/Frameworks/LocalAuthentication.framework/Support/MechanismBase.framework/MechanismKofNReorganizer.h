/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 7:25:41 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/Frameworks/LocalAuthentication.framework/Support/MechanismBase.framework/MechanismBase
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MechanismBase/MechanismBase.h>

@class NSNumber;

@interface MechanismKofNReorganizer : MechanismBase {

	/*^block*/id _apply;
	int _min;
	int _max;
	NSNumber* _k;

}

@property (nonatomic,readonly) int min;                     //@synthesize min=_min - In the implementation block
@property (nonatomic,readonly) int max;                     //@synthesize max=_max - In the implementation block
@property (k,nonatomic,readonly) NSNumber * k;              //@synthesize k=_k - In the implementation block
-(int)min;
-(int)max;
-(void)runWithHints:(id)arg1 eventsDelegate:(id)arg2 reply:(/*^block*/id)arg3 ;
-(id)initWithMin:(int)arg1 max:(int)arg2 k:(id)arg3 apply:(/*^block*/id)arg4 ;
-(id)reorganizeMechanisms:(id)arg1 k:(int)arg2 error:(id*)arg3 ;
-(NSNumber *)k;
@end

