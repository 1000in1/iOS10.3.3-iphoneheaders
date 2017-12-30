/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 31, 2017 at 12:56:40 AM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/PrivateFrameworks/DataAccess.framework/Frameworks/DAEAS.framework/DAEAS
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol ASPolicyManagerDelegate;
@interface ASPolicyManager : NSObject {

	char _updatingPolicy;
	id<ASPolicyManagerDelegate> _delegate;

}

@property (assign,nonatomic) char updatingPolicy;                                      //@synthesize updatingPolicy=_updatingPolicy - In the implementation block
@property (assign,nonatomic,__weak) id<ASPolicyManagerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(void)setDelegate:(id<ASPolicyManagerDelegate>)arg1 ;
-(id<ASPolicyManagerDelegate>)delegate;
-(void)policyKeyChanged:(id)arg1 ;
-(void)policyFailedToUpdate;
-(id)currentPolicyKey;
-(char)updatingPolicy;
-(void)requestPolicyUpdate;
-(void)setUpdatingPolicy:(char)arg1 ;
-(id)initWithAccount:(id)arg1 ;
@end

