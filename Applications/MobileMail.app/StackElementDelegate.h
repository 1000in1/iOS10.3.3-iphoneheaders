/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 11:24:54 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /Applications/MobileMail.app/MobileMail
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol StackElementDelegate
@required
-(id)stackContainerView;
-(void)stackElement:(id)arg1 currentStateDidChangeFrom:(int)arg2 to:(int)arg3;
-(int)maximumStackElementDepth;
-(UIEdgeInsets*)stackContainerViewEdgeInsets;
-(char)stackIsTerminating;
-(id)viewForStackElement:(id)arg1;
-(id)viewBelowStackElement:(id)arg1;
-(void)stackElement:(id)arg1 willRemoveView:(id)arg2;
-(void)stackElement:(id)arg1 targetStateDidChangeFrom:(int)arg2 to:(int)arg3;

@end

