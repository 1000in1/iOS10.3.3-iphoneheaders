/*
* This header is generated by classdump-dyld 1.0
* on Friday, December 29, 2017 at 6:39:51 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /Applications/iBooks.app/Frameworks/BookCore.framework/BookCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <BookCore/IMCommonCoreAccessibilityExtras.h>

@class UIColor, NSString;

@interface IMCommonCoreAccessibility : NSObject <IMCommonCoreAccessibilityExtras> {

	char _accessibilitySupportLoaded;

}

@property (nonatomic,retain) UIColor * preferredSpeakScreenHighlightColor; 
@property (nonatomic,retain) UIColor * preferredSpeakScreenUnderlineColor; 
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,setter=_setAccessibilitySupportLoaded:,getter=_isAccessibilitySupportLoaded,nonatomic) char _accessibilitySupportLoaded;              //@synthesize accessibilitySupportLoaded=_accessibilitySupportLoaded - In the implementation block
+(id)sharedInstance;
-(UIColor *)preferredSpeakScreenHighlightColor;
-(void)setPreferredSpeakScreenHighlightColor:(UIColor *)arg1 ;
-(UIColor *)preferredSpeakScreenUnderlineColor;
-(void)setPreferredSpeakScreenUnderlineColor:(UIColor *)arg1 ;
-(id)preferencesDomain;
-(char)needsAccessibilityAnnouncements;
-(void)performExtraValidation;
-(void)addExtraSafeCategoryNamesToCollection:(id)arg1 ;
-(char)_isAccessibilitySupportLoaded;
-(void)addSafeCategoryNamesToCollection:(id)arg1 ;
-(void)_setAccessibilitySupportLoaded:(char)arg1 ;
-(void)loadAccessibilitySupport;
-(char)needsAccessibilityElements;
-(void)performValidation;
@end
