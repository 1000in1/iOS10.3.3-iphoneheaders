/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 11:23:21 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol SBLayoutElementDescriptor <SBLayoutElementIdentity>
@property (nonatomic,readonly) int layoutRole; 
@property (nonatomic,readonly) unsigned supportedLayoutRoles; 
@property (nonatomic,readonly) unsigned layoutAttributes; 
@property (nonatomic,readonly) Class viewControllerClass; 
@property (nonatomic,copy,readonly) id entityGenerator; 
@required
-(char)supportsLayoutRole:(int)arg1;
-(unsigned)supportedLayoutRoles;
-(id)entityGenerator;
-(int)layoutRole;
-(Class)viewControllerClass;
-(unsigned)layoutAttributes;
-(char)hasLayoutAttributes:(unsigned)arg1;

@end

