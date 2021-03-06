/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 11:23:22 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SpringBoard/SBIcon.h>

@class SBIcon;

@interface SBPlaceholderIcon : SBIcon {

	id _nodeIdentifier;
	SBIcon* _icon;

}
+(id)emptyPlaceholder;
+(id)grabbedIconPlaceholder;
+(id)placeholderNodeIdentifierForIcon:(id)arg1 ;
+(id)placeholderForIcon:(id)arg1 ;
+(void)setGrabbedIcon:(id)arg1 ;
-(char)shouldCacheImageForFormat:(int)arg1 ;
-(id)automationID;
-(char)isEmptyPlaceholder;
-(char)isGrabbedIconPlaceholder;
-(id)nodeIdentifier;
-(id)referencedIcon;
-(id)_initWithNodeIdentifier:(id)arg1 icon:(id)arg2 ;
-(id)generateIconImage:(int)arg1 ;
-(char)isPlaceholder;
@end

