/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 11:23:19 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SpringBoard/SpringBoard-Structs.h>
#import <libobjc.A.dylib/BSDescriptionProviding.h>

@class SBWallpaperEffectView, NSString;

@interface SBWallpaperStyleInfo : NSObject <BSDescriptionProviding> {

	SCD_Struct_SB37 _priorityInfo[14];
	SBWallpaperEffectView* _wallpaperEffectView;
	SCD_Struct_SB23 _styleTransitionState;

}

@property (nonatomic,retain) SBWallpaperEffectView * wallpaperEffectView;              //@synthesize wallpaperEffectView=_wallpaperEffectView - In the implementation block
@property (assign,nonatomic) SCD_Struct_SB23 styleTransitionState;                     //@synthesize styleTransitionState=_styleTransitionState - In the implementation block
@property (nonatomic,readonly) int highestValidPriority; 
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(SBWallpaperEffectView *)wallpaperEffectView;
-(void)setWallpaperEffectView:(SBWallpaperEffectView *)arg1 ;
-(void)setPriorityInfo:(SCD_Struct_SB38)arg1 forPriority:(int)arg2 ;
-(void)removePriorityInfoForPriority:(int)arg1 ;
-(int)highestValidPriority;
-(SCD_Struct_SB38)priorityInfoForPriority:(int)arg1 ;
-(void)enumerateValidPrioritiesUsingBlock:(/*^block*/id)arg1 ;
-(id)init;
-(NSString *)description;
-(void)setStyleTransitionState:(SCD_Struct_SB23)arg1 ;
-(SCD_Struct_SB23)styleTransitionState;
-(id)descriptionWithMultilinePrefix:(id)arg1 ;
-(id)succinctDescription;
-(id)succinctDescriptionBuilder;
-(id)descriptionBuilderWithMultilinePrefix:(id)arg1 ;
@end

