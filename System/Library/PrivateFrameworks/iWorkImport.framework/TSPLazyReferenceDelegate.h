/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 31, 2017 at 1:10:37 AM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol TSPLazyReferenceDelegate <NSObject>
@optional
-(void)lazyReference:(id)arg1 didCreateCopy:(id)arg2;

@required
-(char)readLazyReference:(id)arg1 object:(id*)arg2 error:(id*)arg3;
-(void)addLoadObserver:(id)arg1 action:(SEL)arg2 forLazyReference:(id)arg3;
-(id)objectForIdentifier:(long long)arg1;

@end

