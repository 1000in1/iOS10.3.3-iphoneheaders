/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 11:22:53 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/Assistant/UIPlugins/Sports.siriUIBundle/Sports
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Sports/Sports-Structs.h>
#import <Sports/ACSportsDomainObjectView.h>

@class SASportsEntity;

@interface ACSportsEntityView : ACSportsDomainObjectView {

	SASportsEntity* _entity;

}

@property (nonatomic,retain) SASportsEntity * entity;              //@synthesize entity=_entity - In the implementation block
-(void)didChangeEntityFromEntity:(id)arg1 ;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(char)isSelectable;
-(SASportsEntity *)entity;
-(void)setEntity:(SASportsEntity *)arg1 ;
-(float)contentHeight;
@end

