/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 11:21:27 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIKeyboardInputMode.h>

@class NSExtension;

@interface UIKeyboardExtensionInputMode : UIKeyboardInputMode {

	NSExtension* _extension;

}

@property (nonatomic,retain) NSExtension * extension;              //@synthesize extension=_extension - In the implementation block
-(void)dealloc;
-(char)isExtensionInputMode;
-(id)identifierWithLayouts;
-(char)isDefaultRightToLeft;
-(id)hardwareLayout;
-(char)isAllowedForTraits:(id)arg1 ;
-(char)defaultLayoutIsASCIICapable;
-(void)setPrimaryLanguage:(id)arg1 ;
-(char)isDesiredForTraits:(id)arg1 ;
-(id)initWithIdentifier:(id)arg1 ;
-(id)containingBundle;
-(NSExtension *)extension;
-(void)setExtension:(NSExtension *)arg1 ;
-(id)displayName;
-(id)containingBundleDisplayName;
-(char)isStalledExtensionInputMode;
-(id)normalizedIdentifierLevels;
-(id)extendedDisplayName;
@end

