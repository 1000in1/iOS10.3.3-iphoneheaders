/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 11:23:09 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/CoreServices/AssistiveTouch.app/assistivetouchd
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <assistivetouchd/SCATModernMenuItem.h>

@class NSString;

@interface SCATModernMenuGestureFreehandItem : SCATModernMenuItem {

	char _shouldRotate;
	char _focused;
	NSString* _imagePrefixForTouchDependentGlyph;
	unsigned _preferredNumberOfTitleLines;

}

@property (assign,nonatomic) char shouldRotate;                                         //@synthesize shouldRotate=_shouldRotate - In the implementation block
@property (nonatomic,retain) NSString * imagePrefixForTouchDependentGlyph;              //@synthesize imagePrefixForTouchDependentGlyph=_imagePrefixForTouchDependentGlyph - In the implementation block
@property (assign,getter=isFocused,nonatomic) char focused;                             //@synthesize focused=_focused - In the implementation block
@property (assign,nonatomic) unsigned preferredNumberOfTitleLines;                      //@synthesize preferredNumberOfTitleLines=_preferredNumberOfTitleLines - In the implementation block
+(id)itemWithIdentifier:(id)arg1 delegate:(id)arg2 title:(id)arg3 imagePrefixForTouchDependentGlyph:(id)arg4 shouldRotate:(char)arg5 activateBehavior:(unsigned)arg6 ;
+(id)itemWithIdentifier:(id)arg1 delegate:(id)arg2 title:(id)arg3 activateBehavior:(unsigned)arg4 ;
+(id)itemWithIdentifier:(id)arg1 delegate:(id)arg2 title:(id)arg3 imagePrefixForTouchDependentGlyph:(id)arg4 activateBehavior:(unsigned)arg5 ;
-(void)setImagePrefixForTouchDependentGlyph:(NSString *)arg1 ;
-(void)setPreferredNumberOfTitleLines:(unsigned)arg1 ;
-(char)handleActivateWithElement:(id)arg1 ;
-(unsigned)preferredNumberOfTitleLines;
-(NSString *)imagePrefixForTouchDependentGlyph;
-(char)shouldRotate;
-(void)setShouldRotate:(char)arg1 ;
-(void)dealloc;
-(char)isFocused;
-(void)setFocused:(char)arg1 ;
@end

